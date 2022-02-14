
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int s32 ;







 int * VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, s32 VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2) {
 case 130:
  break;
 case 132:
  VAR_3 = 2;
  break;
 case 129:
  VAR_3 = 3;
  break;
 case 128:
  VAR_3 = 4;
  break;
 case 131:
  VAR_3 = 6;
  break;
 default:
  break;
 }

 FUNC_1(VAR_1, VAR_0[VAR_3],
    sizeof VAR_0[0]);

 if (VAR_2 == 128)
  FUNC_0(VAR_1, 0x4aa6);
 else
  FUNC_0(VAR_1, 0xfaa6);
}
