
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {scalar_t__ temp_type; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct pm860x_battery_info*,int ,int*) ;
 int FUNC_2 (struct pm860x_battery_info*,int,int) ;

__attribute__((used)) static int FUNC_3(struct pm860x_battery_info *VAR_11, int *VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_11->temp_type == VAR_3) {
  VAR_13 = FUNC_1(VAR_11, VAR_2, VAR_12);
  if (VAR_13)
   return VAR_13;
  *VAR_12 = (*VAR_12 - 884) * 1000 / 3611;
 } else {
  VAR_13 = FUNC_1(VAR_11, VAR_1, VAR_12);
  if (VAR_13)
   return VAR_13;

  *VAR_12 = (*VAR_12 * 1000) / VAR_0;

  if (*VAR_12 > VAR_10) {
   VAR_14 = -30;
   VAR_16 = VAR_9 * VAR_0 / 1000;
   FUNC_2(VAR_11, 0, VAR_16);
  } else if (*VAR_12 > VAR_9) {
   VAR_14 = -15;
   VAR_16 = VAR_9 * VAR_0 / 1000;
   FUNC_2(VAR_11, 0, VAR_16);
  } else if (*VAR_12 > VAR_4) {
   VAR_14 = -5;
   VAR_15 = VAR_9 * VAR_0 / 1000;
   VAR_16 = VAR_8 * VAR_0 / 1000;
   FUNC_2(VAR_11, VAR_15, VAR_16);
  } else if (*VAR_12 > VAR_5) {
   VAR_14 = 5;
   VAR_15 = VAR_9 * VAR_0 / 1000;
   VAR_16 = VAR_8 * VAR_0 / 1000;
   FUNC_2(VAR_11, VAR_15, VAR_16);
  } else if (*VAR_12 > VAR_6) {
   VAR_14 = 15;
   VAR_15 = VAR_9 * VAR_0 / 1000;
   VAR_16 = VAR_8 * VAR_0 / 1000;
   FUNC_2(VAR_11, VAR_15, VAR_16);
  } else if (*VAR_12 > VAR_7) {
   VAR_14 = 25;
   VAR_15 = VAR_9 * VAR_0 / 1000;
   VAR_16 = VAR_8 * VAR_0 / 1000;
   FUNC_2(VAR_11, VAR_15, VAR_16);
  } else if (*VAR_12 > VAR_8) {
   VAR_14 = 35;
   VAR_15 = VAR_9 * VAR_0 / 1000;
   VAR_16 = VAR_8 * VAR_0 / 1000;
   FUNC_2(VAR_11, VAR_15, VAR_16);
  } else {
   VAR_15 = VAR_8 * VAR_0 / 1000;
   FUNC_2(VAR_11, VAR_15, 0);
   VAR_14 = 45;
  }

  FUNC_0(VAR_11->dev, "temp_C:%d C,temp_mv:%d mv\n", VAR_14, *VAR_12);
  *VAR_12 = VAR_14;
 }
 return 0;
}
