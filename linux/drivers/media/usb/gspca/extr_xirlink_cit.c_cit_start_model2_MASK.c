
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int sof_len; int lighting; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;



 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int ) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 int VAR_2 = 0;

 FUNC_2(VAR_0, 0x0000, 0x0100);
 FUNC_1(VAR_0, 0x0116, 0);
 FUNC_2(VAR_0, 0x0060, 0x0116);
 FUNC_2(VAR_0, 0x0002, 0x0112);
 FUNC_2(VAR_0, 0x00bc, 0x012c);
 FUNC_2(VAR_0, 0x0008, 0x012b);
 FUNC_2(VAR_0, 0x0000, 0x0108);
 FUNC_2(VAR_0, 0x0001, 0x0133);
 FUNC_2(VAR_0, 0x0001, 0x0102);
 switch (VAR_0->pixfmt.width) {
 case 176:
  FUNC_2(VAR_0, 0x002c, 0x0103);
  FUNC_2(VAR_0, 0x0000, 0x0104);
  FUNC_2(VAR_0, 0x0024, 0x0105);
  FUNC_2(VAR_0, 0x00b9, 0x010a);
  FUNC_2(VAR_0, 0x0038, 0x0119);


  VAR_1->sof_len = 10;
  break;
 case 320:
  FUNC_2(VAR_0, 0x0028, 0x0103);
  FUNC_2(VAR_0, 0x0000, 0x0104);
  FUNC_2(VAR_0, 0x001e, 0x0105);
  FUNC_2(VAR_0, 0x0039, 0x010a);
  FUNC_2(VAR_0, 0x0070, 0x0119);
  VAR_1->sof_len = 2;
  break;
 case 352:
  FUNC_2(VAR_0, 0x002c, 0x0103);
  FUNC_2(VAR_0, 0x0000, 0x0104);
  FUNC_2(VAR_0, 0x0024, 0x0105);
  FUNC_2(VAR_0, 0x0039, 0x010a);
  FUNC_2(VAR_0, 0x0070, 0x0119);
  VAR_1->sof_len = 2;
  break;
 }

 FUNC_2(VAR_0, 0x0000, 0x0100);

 switch (VAR_0->pixfmt.width) {
 case 176:
  FUNC_2(VAR_0, 0x0050, 0x0111);
  FUNC_2(VAR_0, 0x00d0, 0x0111);
  break;
 case 320:
 case 352:
  FUNC_2(VAR_0, 0x0040, 0x0111);
  FUNC_2(VAR_0, 0x00c0, 0x0111);
  break;
 }
 FUNC_2(VAR_0, 0x009b, 0x010f);
 FUNC_2(VAR_0, 0x00bb, 0x010f);
 FUNC_0(VAR_0, 0x000a, 0x005c);
 FUNC_0(VAR_0, 0x0004, 0x0000);
 FUNC_0(VAR_0, 0x0006, 0x00fb);
 FUNC_0(VAR_0, 0x0008, 0x0000);
 FUNC_0(VAR_0, 0x000c, 0x0009);
 FUNC_0(VAR_0, 0x0012, 0x000a);
 FUNC_0(VAR_0, 0x002a, 0x0000);
 FUNC_0(VAR_0, 0x002c, 0x0000);
 FUNC_0(VAR_0, 0x002e, 0x0008);






 FUNC_0(VAR_0, 0x0030, 0x0000);





 switch (VAR_0->pixfmt.width) {
 case 176:
  FUNC_0(VAR_0, 0x0014, 0x0002);
  FUNC_0(VAR_0, 0x0016, 0x0002);
  FUNC_0(VAR_0, 0x0018, 0x004a);
  VAR_2 = 6;
  break;
 case 320:
  FUNC_0(VAR_0, 0x0014, 0x0009);
  FUNC_0(VAR_0, 0x0016, 0x0005);
  FUNC_0(VAR_0, 0x0018, 0x0044);
  VAR_2 = 8;
  break;
 case 352:
  FUNC_0(VAR_0, 0x0014, 0x0003);
  FUNC_0(VAR_0, 0x0016, 0x0002);
  FUNC_0(VAR_0, 0x0018, 0x004a);
  VAR_2 = 16;
  break;
 }



 if (0)
  FUNC_0(VAR_0, 0x001a, 0x005a);
 FUNC_0(VAR_0, 0x001c, VAR_2);







 switch (VAR_0->pixfmt.width) {
 case 176:
  FUNC_0(VAR_0, 0x0026, 0x00c2);
  break;
 case 320:
  FUNC_0(VAR_0, 0x0026, 0x0044);
  break;





 case 352:
  FUNC_0(VAR_0, 0x0026, 0x0048);
  break;
 }

 FUNC_0(VAR_0, 0x0028, FUNC_3(VAR_1->lighting));

 FUNC_4(VAR_1->lighting, 1);


 FUNC_0(VAR_0, 0x001e, 0x002f);

 FUNC_0(VAR_0, 0x0020, 0x0034);

 FUNC_0(VAR_0, 0x0022, 0x00a0);


 FUNC_0(VAR_0, 0x0030, 0x0004);

 return 0;
}
