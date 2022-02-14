
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int npkt; int pktsz; int short_mark; int* jpeg_hdr; int nchg; int quality; scalar_t__ ag_cnt; int work; } ;
struct gspca_dev {scalar_t__ last_packet_type; TYPE_2__** urb; } ;
struct TYPE_4__ {TYPE_1__* iso_frame_desc; } ;
struct TYPE_3__ {int length; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gspca_dev*,scalar_t__,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sd*,int*) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_7,
   u8 *VAR_8,
   int VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_7;
 int VAR_11, VAR_12;
 VAR_10->npkt++;
 VAR_10->pktsz += VAR_9;






 VAR_11 = VAR_10->short_mark;
 if (VAR_11 != 0) {
  VAR_10->short_mark = 0;
  if (VAR_11 < 0
   && VAR_8[0] == 0xff
   && VAR_8[1] == 0x00)
   goto marker_found;
  if (VAR_8[0] == 0xff && VAR_8[1] == 0xff) {
   VAR_11 = 0;
   goto marker_found;
  }
  VAR_9 -= VAR_11;
  if (VAR_9 <= 0)
   return;
  VAR_8 += VAR_11;
 }


 for (VAR_11 = VAR_9 - 1; --VAR_11 >= 0; ) {
  if (VAR_8[VAR_11] != 0xff) {
   VAR_11--;
   continue;
  }
  if (VAR_8[VAR_11 + 1] == 0xff) {


   if (VAR_11 + 2 >= VAR_9 || VAR_8[VAR_11 + 2] == 0x00)
    goto marker_found;
  }
 }



 if (VAR_8[VAR_9 - 1] == 0xff)
  VAR_10->short_mark = -1;
 if (VAR_7->last_packet_type == VAR_4)
  FUNC_0(VAR_7, VAR_1,
    VAR_10->jpeg_hdr, VAR_3);
 FUNC_0(VAR_7, VAR_2, VAR_8, VAR_9);
 return;



marker_found:
 VAR_12 = 0;
 if (VAR_11 > 2) {
  if (VAR_8[VAR_11 - 2] != 0xff || VAR_8[VAR_11 - 1] != 0xd9) {
   VAR_7->last_packet_type = VAR_0;
   VAR_12 = -3;
  }
 } else if (VAR_11 + 6 < VAR_9) {
  if (VAR_8[VAR_11 + 6] & 0x08) {
   VAR_7->last_packet_type = VAR_0;
   VAR_12 = -5;
  }
 }

 FUNC_0(VAR_7, VAR_4, VAR_8, VAR_11);


 if (VAR_12 == 0) {
  int VAR_13;

  VAR_13 = (VAR_10->pktsz * 100) /
   (VAR_10->npkt *
    VAR_7->urb[0]->iso_frame_desc[0].length);
  if (VAR_13 >= 85)
   VAR_12 = -3;
  else if (VAR_13 < 75)
   VAR_12 = 2;
 }
 if (VAR_12 != 0) {
  VAR_10->nchg += VAR_12;
  if (VAR_10->nchg < -6 || VAR_10->nchg >= 12) {
   VAR_10->nchg = 0;
   VAR_12 += VAR_10->quality;
   if (VAR_12 < VAR_6)
    VAR_12 = VAR_6;
   else if (VAR_12 > VAR_5)
    VAR_12 = VAR_5;
   if (VAR_12 != VAR_10->quality) {
    VAR_10->quality = VAR_12;
    FUNC_1(&VAR_10->work);
   }
  }
 } else {
  VAR_10->nchg = 0;
 }
 VAR_10->pktsz = VAR_10->npkt = 0;



 if (VAR_11 + 62 > VAR_9) {
  VAR_10->short_mark = VAR_11 + 62 - VAR_9;
  return;
 }
 if (VAR_10->ag_cnt >= 0)
  FUNC_2(VAR_10, VAR_8 + VAR_11);


 VAR_11 += 62;
 if (VAR_11 < VAR_9) {
  VAR_8 += VAR_11;
  VAR_9 -= VAR_11;
  FUNC_0(VAR_7, VAR_1,
    VAR_10->jpeg_hdr, VAR_3);
  FUNC_0(VAR_7, VAR_2, VAR_8, VAR_9);
 }
}
