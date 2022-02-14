
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx {int model; int dev; } ;
typedef enum AV_MODE { ____Placeholder_AV_MODE } AV_MODE ;


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
 int FUNC_0 (struct cx231xx*,int ,int*) ;
 int FUNC_1 (struct cx231xx*,int ,int) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct cx231xx *VAR_12,
     enum AV_MODE VAR_13)
{
 u8 VAR_14 = 0;
 int VAR_15 = 0;

 switch (VAR_12->model) {
 case 141:
 case 140:
 case 136:
 case 138:
 case 139:
 case 137:
 case 135:
 case 133:
 case 134:
 case 130:
 case 128:
 case 131:
 case 132:
 case 129:
  if (VAR_13 == VAR_8) {
   while (VAR_14 != (VAR_7 |
      VAR_3)) {
    VAR_15 = FUNC_1(VAR_12, VAR_11,
       VAR_7 |
       VAR_3);
    VAR_15 |= FUNC_0(VAR_12, VAR_11,
       &VAR_14);
    if (VAR_15 < 0)
     break;
   }

   VAR_15 = FUNC_1(VAR_12, VAR_0,
       0x00);
   VAR_15 |= FUNC_1(VAR_12, VAR_1,
       0x00);
   VAR_15 |= FUNC_1(VAR_12, VAR_2,
       0x00);
  } else if (VAR_13 == VAR_9) {
   VAR_15 = FUNC_1(VAR_12, VAR_0,
       0x70);
   VAR_15 |= FUNC_1(VAR_12, VAR_1,
       0x70);
   VAR_15 |= FUNC_1(VAR_12, VAR_2,
       0x70);

   VAR_15 |= FUNC_0(VAR_12, VAR_11,
        &VAR_14);
   VAR_14 |= VAR_4 |
      VAR_5 |
      VAR_6;
   VAR_15 |= FUNC_1(VAR_12, VAR_11,
         VAR_14);
  } else if (VAR_13 == VAR_10) {
   while (VAR_14 != (VAR_7 |
      VAR_3)) {
    VAR_15 = FUNC_1(VAR_12, VAR_11,
       VAR_7 |
       VAR_3);
    VAR_15 |= FUNC_0(VAR_12, VAR_11,
       &VAR_14);
    if (VAR_15 < 0)
     break;
   }

   VAR_15 |= FUNC_1(VAR_12, VAR_0,
      0x00);
   VAR_15 |= FUNC_1(VAR_12, VAR_1,
      0x00);
   VAR_15 |= FUNC_1(VAR_12, VAR_2,
      0x00);
  } else {
   FUNC_2(VAR_12->dev, "Invalid AV mode input\n");
   VAR_15 = -1;
  }
  break;
 default:
  if (VAR_13 == VAR_8) {
   while (VAR_14 != (VAR_7 |
      VAR_3)) {
    VAR_15 = FUNC_1(VAR_12, VAR_11,
       VAR_7 |
       VAR_3);
    VAR_15 |= FUNC_0(VAR_12, VAR_11,
       &VAR_14);
    if (VAR_15 < 0)
     break;
   }

   VAR_15 |= FUNC_1(VAR_12, VAR_0,
       0x40);
   VAR_15 |= FUNC_1(VAR_12, VAR_1,
       0x40);
   VAR_15 |= FUNC_1(VAR_12, VAR_2,
       0x00);
  } else if (VAR_13 == VAR_9) {
   VAR_15 = FUNC_1(VAR_12, VAR_0,
       0x70);
   VAR_15 |= FUNC_1(VAR_12, VAR_1,
       0x70);
   VAR_15 |= FUNC_1(VAR_12, VAR_2,
       0x70);

   VAR_15 |= FUNC_0(VAR_12, VAR_11,
             &VAR_14);
   VAR_14 |= VAR_4 |
      VAR_5 |
      VAR_6;
   VAR_15 |= FUNC_1(VAR_12, VAR_11,
       VAR_14);
  } else if (VAR_13 == VAR_10) {
   while (VAR_14 != (VAR_7 |
      VAR_3)) {
    VAR_15 = FUNC_1(VAR_12, VAR_11,
       VAR_7 |
       VAR_3);
    VAR_15 |= FUNC_0(VAR_12, VAR_11,
       &VAR_14);
    if (VAR_15 < 0)
     break;
   }

   VAR_15 |= FUNC_1(VAR_12, VAR_0,
       0x00);
   VAR_15 |= FUNC_1(VAR_12, VAR_1,
       0x00);
   VAR_15 |= FUNC_1(VAR_12, VAR_2,
       0x40);
  } else {
   FUNC_2(VAR_12->dev, "Invalid AV mode input\n");
   VAR_15 = -1;
  }
 }

 return VAR_15;
}
