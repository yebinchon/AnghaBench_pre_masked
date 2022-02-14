
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;


 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,unsigned short const,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0)
{
 const unsigned short VAR_1 = 0;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_1(VAR_0, 0x0000, 0x0100);
 FUNC_1(VAR_0, 0x0003, 0x0438);
 FUNC_1(VAR_0, 0x001e, 0x042b);
 FUNC_1(VAR_0, 0x0041, 0x042c);
 FUNC_1(VAR_0, 0x0008, 0x0436);
 FUNC_1(VAR_0, 0x0024, 0x0403);
 FUNC_1(VAR_0, 0x002c, 0x0404);
 FUNC_1(VAR_0, 0x0002, 0x0426);
 FUNC_1(VAR_0, 0x0014, 0x0427);

 switch (VAR_0->pixfmt.width) {
 case 160:
  FUNC_1(VAR_0, 0x0004, 0x010b);
  FUNC_1(VAR_0, 0x0001, 0x010a);
  FUNC_1(VAR_0, 0x0010, 0x0102);
  FUNC_1(VAR_0, 0x00a0, 0x0103);
  FUNC_1(VAR_0, 0x0000, 0x0104);
  FUNC_1(VAR_0, 0x0078, 0x0105);
  break;

 case 176:
  FUNC_1(VAR_0, 0x0006, 0x010b);
  FUNC_1(VAR_0, 0x0000, 0x010a);
  FUNC_1(VAR_0, 0x0005, 0x0102);
  FUNC_1(VAR_0, 0x00b0, 0x0103);
  FUNC_1(VAR_0, 0x0000, 0x0104);
  FUNC_1(VAR_0, 0x0090, 0x0105);
  break;

 case 320:
  FUNC_1(VAR_0, 0x0008, 0x010b);
  FUNC_1(VAR_0, 0x0004, 0x010a);
  FUNC_1(VAR_0, 0x0005, 0x0102);
  FUNC_1(VAR_0, 0x00a0, 0x0103);
  FUNC_1(VAR_0, 0x0010, 0x0104);
  FUNC_1(VAR_0, 0x0078, 0x0105);
  break;
 }

 FUNC_1(VAR_0, VAR_1, 0x0109);
 FUNC_1(VAR_0, VAR_2, 0x0111);

 return 0;
}
