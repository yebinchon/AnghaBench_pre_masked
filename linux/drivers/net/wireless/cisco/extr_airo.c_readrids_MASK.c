
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {struct airo_info* ml_priv; } ;
struct airo_info {unsigned char micstats; int flags; } ;
struct TYPE_3__ {int command; int len; unsigned short ridnum; int data; } ;
typedef TYPE_1__ aironet_ioctl ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct airo_info*,unsigned short,unsigned char*,scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 unsigned short VAR_18 ;
 unsigned short VAR_19 ;
 unsigned short VAR_20 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,unsigned char*,int ) ;
 int FUNC_3 (struct airo_info*,int) ;
 int FUNC_4 (struct airo_info*,int) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct airo_info*,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_21, aironet_ioctl *VAR_22) {
 unsigned short VAR_23;
 unsigned char *VAR_24;
 int VAR_25;
 struct airo_info *VAR_26 = VAR_21->ml_priv;

 if (FUNC_8(VAR_7, &VAR_26->flags))
  return -VAR_3;

 switch(VAR_22->command)
 {
 case 140: VAR_23 = VAR_11; break;
 case 139: VAR_23 = VAR_12;
  if (FUNC_8(VAR_6, &VAR_26->flags)) {
   FUNC_3 (VAR_26, 1);
   FUNC_9 (VAR_26, 1);
   FUNC_4(VAR_26, 1);
  }
  break;
 case 135: VAR_23 = VAR_15; break;
 case 131: VAR_23 = VAR_10; break;
 case 138: VAR_23 = VAR_13; break;
 case 137: VAR_23 = VAR_14; break;
 case 129: VAR_23 = VAR_20;

  if (!FUNC_1(VAR_0))
   return -VAR_5;
  break;
 case 130: VAR_23 = VAR_19;

  if (!FUNC_1(VAR_0))
   return -VAR_5;
  break;
 case 134: VAR_23 = VAR_18; break;
 case 132: VAR_23 = VAR_17; break;
 case 133: VAR_23 = VAR_16; break;
 case 136:
  if (FUNC_2(VAR_22->data, &VAR_26->micstats,
     FUNC_7((int)VAR_22->len,(int)sizeof(VAR_26->micstats))))
   return -VAR_1;
  return 0;
 case 128: VAR_23 = VAR_22->ridnum; break;
 default:
  return -VAR_2;
 }

 if ((VAR_24 = FUNC_6(VAR_9, VAR_8)) == ((void*)0))
  return -VAR_4;

 FUNC_0(VAR_26,VAR_23,VAR_24,VAR_9, 1);




 VAR_25 = VAR_22->len;

 if (FUNC_2(VAR_22->data, VAR_24, FUNC_7(VAR_25, (int)VAR_9))) {
  FUNC_5 (VAR_24);
  return -VAR_1;
 }
 FUNC_5 (VAR_24);
 return 0;
}
