
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int fmt; int* jpeg_hdr; int pktsz; int npkt; int avg_lum; } ;
struct gspca_dev {scalar_t__ last_packet_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__,int*,int) ;
 scalar_t__ FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (struct gspca_dev*,int*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4,
   u8 *VAR_5,
   int VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;
 int VAR_8, VAR_9;
 static const u8 VAR_10[] = {
  0xff, 0xff, 0x00, 0xc4, 0xc4, 0x96
 };

 VAR_9 = (VAR_7->fmt & 0x03) == 0;
 if (VAR_6 >= 64 && FUNC_2(VAR_5, VAR_10, 6) == 0) {
  VAR_8 = ((VAR_5[35] >> 2) & 3) |
      (VAR_5[20] << 2) |
      (VAR_5[19] << 10);
  VAR_8 += ((VAR_5[35] >> 4) & 3) |
       (VAR_5[22] << 2) |
       (VAR_5[21] << 10);
  VAR_8 += ((VAR_5[35] >> 6) & 3) |
       (VAR_5[24] << 2) |
       (VAR_5[23] << 10);
  VAR_8 += (VAR_5[36] & 3) |
      (VAR_5[26] << 2) |
      (VAR_5[25] << 10);
  VAR_8 += ((VAR_5[36] >> 2) & 3) |
       (VAR_5[28] << 2) |
       (VAR_5[27] << 10);
  VAR_8 += ((VAR_5[36] >> 4) & 3) |
       (VAR_5[30] << 2) |
       (VAR_5[29] << 10);
  VAR_8 += ((VAR_5[36] >> 6) & 3) |
       (VAR_5[32] << 2) |
       (VAR_5[31] << 10);
  VAR_8 += ((VAR_5[44] >> 4) & 3) |
       (VAR_5[34] << 2) |
       (VAR_5[33] << 10);
  VAR_8 >>= 9;
  FUNC_0(&VAR_7->avg_lum, VAR_8);

  if (VAR_9)
   FUNC_3(VAR_4, VAR_5);

  FUNC_1(VAR_4, VAR_3, ((void*)0), 0);
  VAR_6 -= 64;
  if (VAR_6 == 0)
   return;
  VAR_5 += 64;
 }
 if (VAR_4->last_packet_type == VAR_3) {
  if (VAR_9) {
   FUNC_1(VAR_4, VAR_0,
    VAR_7->jpeg_hdr, VAR_2);
   FUNC_1(VAR_4, VAR_1,
    VAR_5, VAR_6);
  } else {
   FUNC_1(VAR_4, VAR_0,
    VAR_5, VAR_6);
  }
 } else {

  if (VAR_9) {
   VAR_7->npkt++;
   VAR_7->pktsz += VAR_6;
  }
  FUNC_1(VAR_4, VAR_1, VAR_5, VAR_6);
 }
}
