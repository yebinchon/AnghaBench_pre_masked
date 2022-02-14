
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
typedef enum flag { ____Placeholder_flag } flag ;


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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct spi_device*,int ) ;




bool FUNC_1(struct spi_device *VAR_18, enum flag VAR_19)
{
 switch (VAR_19) {
 case 136:
  return (FUNC_0(VAR_18, VAR_16) & VAR_1);
 case 132:
  return (FUNC_0(VAR_18, VAR_16) & VAR_4);
 case 131:
  return (FUNC_0(VAR_18, VAR_16) & VAR_7);
 case 133:
  return (FUNC_0(VAR_18, VAR_16) & VAR_2);
 case 130:
  return (FUNC_0(VAR_18, VAR_16) & VAR_3);
 case 128:
  return (FUNC_0(VAR_18, VAR_16) & VAR_6);
 case 143:
  return (FUNC_0(VAR_18, VAR_16) & VAR_0);
 case 129:
  return (FUNC_0(VAR_18, VAR_16) & VAR_5);
 case 139:
  return (FUNC_0(VAR_18, VAR_17) & VAR_9);




 case 140:
  return !(FUNC_0(VAR_18, VAR_17) & VAR_11);
 case 138:
  return (FUNC_0(VAR_18, VAR_17) & VAR_10);
 case 137:
  return (FUNC_0(VAR_18, VAR_17) & VAR_12);
 case 135:
  return (FUNC_0(VAR_18, VAR_17) & VAR_14);
 case 134:
  return (FUNC_0(VAR_18, VAR_17) & VAR_15);
 case 141:
  return (FUNC_0(VAR_18, VAR_17) & VAR_8);
 case 142:
  return (FUNC_0(VAR_18, VAR_17) & VAR_13);
 default: return 0;
 }
}
