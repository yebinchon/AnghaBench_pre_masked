
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int webcam; } ;
struct gspca_dev {int dummy; } ;




 int FUNC_0 (struct gspca_dev*,int,int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, u8 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;
 u8 VAR_3[2];

 switch (VAR_2->webcam) {
 case 128:
  FUNC_0(VAR_0, 0x1026, &VAR_1, 1);
  break;
 case 129:

  VAR_1 = FUNC_1(VAR_1);
  VAR_3[0] = VAR_1 << 3;
  VAR_3[1] = VAR_1 >> 5;
  FUNC_0(VAR_0, 0x101d, VAR_3, 2);
  break;
 }
}
