
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int* jpeg_hdr; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,...) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;
 static unsigned char VAR_9[] = {0xff, 0xd9};
 if (VAR_6[0] == 0xff && VAR_6[1] == 0xfe) {
  FUNC_0(VAR_5, VAR_3,
    VAR_9, 2);


  FUNC_0(VAR_5, VAR_0,
   VAR_8->jpeg_hdr, VAR_2);



  VAR_6 += 12;
  VAR_7 -= 12;
 }
 FUNC_0(VAR_5, VAR_1, VAR_6, VAR_7);
}
