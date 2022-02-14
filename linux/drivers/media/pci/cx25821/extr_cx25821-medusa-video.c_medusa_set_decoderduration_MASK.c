
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int * i2c_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(struct cx25821_dev *VAR_5, int VAR_6,
           int VAR_7)
{
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = VAR_0;


 if (VAR_6 < VAR_4 || VAR_6 > 128) {
  return;
 }

 switch (VAR_6) {
 default:
  break;
 case 133:
 case 132:
  VAR_10 = VAR_1;
  break;
 case 131:
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
 case 128:
  VAR_10 = VAR_3;
  break;
 }


 VAR_8 = FUNC_0(&VAR_5->i2c_bus[0], VAR_10, &VAR_9);

 if (!(VAR_6 % 2)) {
  VAR_8 &= 0xFFFF0000;
  VAR_8 |= VAR_7;
 } else {
  VAR_8 &= 0x0000FFFF;
  VAR_8 |= ((u32) VAR_7) << 16;
 }

 FUNC_1(&VAR_5->i2c_bus[0], VAR_10, VAR_8);
}
