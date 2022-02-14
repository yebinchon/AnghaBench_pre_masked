
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
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(struct cx25821_dev *VAR_16, int VAR_17,
        int VAR_18)
{
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 int VAR_21 = VAR_0;
 int VAR_22 = VAR_1;

 switch (VAR_17) {
 default:
 case 135:
  break;
 case 134:
  VAR_21 = VAR_2;
  VAR_22 = VAR_3;
  break;
 case 133:
  VAR_21 = VAR_4;
  VAR_22 = VAR_5;
  break;
 case 132:
  VAR_21 = VAR_6;
  VAR_22 = VAR_7;
  break;
 case 131:
  VAR_21 = VAR_8;
  VAR_22 = VAR_9;
  return;
 case 130:
  VAR_21 = VAR_10;
  VAR_22 = VAR_11;
  return;
 case 129:
  VAR_21 = VAR_12;
  VAR_22 = VAR_13;
  return;
 case 128:
  VAR_21 = VAR_14;
  VAR_22 = VAR_15;
  return;
 }

 VAR_19 = FUNC_0(&VAR_16->i2c_bus[0], VAR_21, &VAR_20);
 VAR_19 &= 0xFFFFFF7F;
 if (VAR_18)
  VAR_19 |= 0x00000080;
 FUNC_1(&VAR_16->i2c_bus[0], VAR_21, VAR_19);

 VAR_19 = FUNC_0(&VAR_16->i2c_bus[0], VAR_22, &VAR_20);
 VAR_19 &= 0xFFFFFF7F;
 if (VAR_18)
  VAR_19 |= 0x00000080;
 FUNC_1(&VAR_16->i2c_bus[0], VAR_22, VAR_19);
}
