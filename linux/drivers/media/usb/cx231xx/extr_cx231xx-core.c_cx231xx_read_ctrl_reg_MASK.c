
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cx231xx {int state; int udev; } ;


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
 int FUNC_0 (struct cx231xx*,int,int,int,int,int ,char*,int,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct cx231xx *VAR_12, u8 VAR_13, u16 VAR_14,
     char *VAR_15, int VAR_16)
{
 u8 VAR_17 = 0;
 int VAR_18;
 int VAR_19 = FUNC_1(VAR_12->udev, 0);

 if (VAR_12->state & VAR_0)
  return -VAR_6;

 if (VAR_16 > VAR_8)
  return -VAR_1;

 switch (VAR_16) {
 case 1:
  VAR_17 = VAR_3;
  break;
 case 2:
  VAR_17 = VAR_5;
  break;
 case 3:
  VAR_17 = VAR_4;
  break;
 case 4:
  VAR_17 = VAR_2;
  break;
 default:
  VAR_17 = 0xFF;
 }

 if (VAR_17 == 0xFF)
  return -VAR_1;

 VAR_18 = FUNC_0(VAR_12, VAR_19, VAR_13,
         VAR_9 | VAR_11 | VAR_10,
         VAR_17, VAR_14, VAR_15, VAR_16, VAR_7);
 return VAR_18;
}
