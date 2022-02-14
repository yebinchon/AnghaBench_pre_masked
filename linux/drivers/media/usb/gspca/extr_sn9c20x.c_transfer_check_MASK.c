
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sd {int pktsz; int npkt; int nchg; int work; TYPE_4__* jpegqual; } ;
struct gspca_dev {TYPE_2__** urb; int last_packet_type; } ;
typedef int s32 ;
struct TYPE_7__ {int val; } ;
struct TYPE_8__ {int minimum; int maximum; TYPE_3__ cur; } ;
struct TYPE_6__ {TYPE_1__* iso_frame_desc; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1,
   u8 *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 int VAR_4, VAR_5;

 VAR_4 = 0;


 if (VAR_2[6] & 0x08) {
  VAR_1->last_packet_type = VAR_0;
  VAR_4 = -5;
 } else {


  VAR_5 = (VAR_3->pktsz * 100) /
   (VAR_3->npkt *
    VAR_1->urb[0]->iso_frame_desc[0].length);
  if (VAR_5 >= 85)
   VAR_4 = -3;
  else if (VAR_5 < 75)
   VAR_4 = 2;
 }
 if (VAR_4 != 0) {
  VAR_3->nchg += VAR_4;
  if (VAR_3->nchg < -6 || VAR_3->nchg >= 12) {



   s32 VAR_6 = VAR_3->jpegqual->cur.val;
   VAR_3->nchg = 0;
   VAR_4 += VAR_6;
   if (VAR_4 < VAR_3->jpegqual->minimum)
    VAR_4 = VAR_3->jpegqual->minimum;
   else if (VAR_4 > VAR_3->jpegqual->maximum)
    VAR_4 = VAR_3->jpegqual->maximum;
   if (VAR_4 != VAR_6) {
    VAR_3->jpegqual->cur.val = VAR_4;
    FUNC_0(&VAR_3->work);
   }
  }
 } else {
  VAR_3->nchg = 0;
 }
 VAR_3->pktsz = VAR_3->npkt = 0;
}
