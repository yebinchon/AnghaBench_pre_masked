
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int detected_std; scalar_t__ mode; int scan_in_progress; int watch_stereo; int nicam_on; int v4l2_std; int main; int second; int has_nicam; scalar_t__ radio; scalar_t__ restart; } ;
struct msp3400c_carrier_detect {int cdo; int name; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (struct msp3400c_carrier_detect*) ;
 int FUNC_1 (double) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,int,scalar_t__,char*,...) ;
 int FUNC_3 (struct i2c_client*) ;
 scalar_t__ FUNC_4 () ;
 struct msp3400c_carrier_detect* VAR_14 ;
 struct msp3400c_carrier_detect* VAR_15 ;
 struct msp3400c_carrier_detect* VAR_16 ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct i2c_client*,int ,int ) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_9 (struct i2c_client*,int) ;
 scalar_t__ FUNC_10 (struct msp_state*,int) ;
 int FUNC_11 (struct msp_state*) ;
 int FUNC_12 () ;
 struct msp_state* FUNC_13 (int ) ;
 int FUNC_14 (struct i2c_client*) ;

int FUNC_15(void *VAR_19)
{
 struct i2c_client *VAR_20 = VAR_19;
 struct msp_state *VAR_21 = FUNC_13(FUNC_3(VAR_20));
 struct msp3400c_carrier_detect *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;

 FUNC_2(&VAR_20->dev, 1, VAR_18, "msp3400 daemon started\n");
 VAR_21->detected_std = VAR_6;
 FUNC_12();
 for (;;) {
  FUNC_2(&VAR_20->dev, 2, VAR_18, "msp3400 thread: sleep\n");
  FUNC_10(VAR_21, -1);
  FUNC_2(&VAR_20->dev, 2, VAR_18, "msp3400 thread: wakeup\n");

restart:
  FUNC_2(&VAR_20->dev, 2, VAR_18, "thread: restart scan\n");
  VAR_21->restart = 0;
  if (FUNC_4())
   break;

  if (VAR_21->radio || VAR_2 == VAR_21->mode) {

   FUNC_2(&VAR_20->dev, 1, VAR_18,
    "thread: no carrier scan\n");
   VAR_21->scan_in_progress = 0;
   FUNC_11(VAR_21);
   continue;
  }


  VAR_21->scan_in_progress = 1;
  FUNC_11(VAR_21);

  FUNC_8(VAR_20, VAR_0);
  VAR_26 = VAR_27 = 0;
  VAR_24 = VAR_25 = -1;
  VAR_21->watch_stereo = 0;
  VAR_21->nicam_on = 0;


  if (FUNC_10(VAR_21, 200))
   goto restart;


  VAR_22 = VAR_16;
  VAR_23 = FUNC_0(VAR_16);

  if (VAR_17 && (VAR_21->v4l2_std & VAR_13)) {

   VAR_24 = 3;
   VAR_23 = 0;
   FUNC_2(&VAR_20->dev, 1, VAR_18, "AM sound override\n");
  }

  for (VAR_29 = 0; VAR_29 < VAR_23; VAR_29++) {
   FUNC_7(VAR_20, VAR_22[VAR_29].cdo, VAR_22[VAR_29].cdo);
   if (FUNC_10(VAR_21, 100))
    goto restart;
   VAR_28 = FUNC_9(VAR_20, 0x1b);
   if (VAR_28 > 32767)
    VAR_28 -= 65536;
   if (VAR_26 < VAR_28)
    VAR_26 = VAR_28, VAR_24 = VAR_29;
   FUNC_2(&VAR_20->dev, 1, VAR_18,
    "carrier1 val: %5d / %s\n", VAR_28, VAR_22[VAR_29].name);
  }


  switch (VAR_24) {
  case 1:
   VAR_22 = VAR_14;
   VAR_23 = FUNC_0(VAR_14);
   break;
  case 3:
   VAR_22 = VAR_15;
   VAR_23 = FUNC_0(VAR_15);
   break;
  case 0:
  case 2:
  default:
   VAR_22 = ((void*)0);
   VAR_23 = 0;
   break;
  }

  if (VAR_17 && (VAR_21->v4l2_std & VAR_13)) {

   VAR_22 = ((void*)0);
   VAR_23 = 0;
   VAR_25 = 0;
  }
  for (VAR_29 = 0; VAR_29 < VAR_23; VAR_29++) {
   FUNC_7(VAR_20, VAR_22[VAR_29].cdo, VAR_22[VAR_29].cdo);
   if (FUNC_10(VAR_21, 100))
    goto restart;
   VAR_28 = FUNC_9(VAR_20, 0x1b);
   if (VAR_28 > 32767)
    VAR_28 -= 65536;
   if (VAR_27 < VAR_28)
    VAR_27 = VAR_28, VAR_25 = VAR_29;
   FUNC_2(&VAR_20->dev, 1, VAR_18,
    "carrier2 val: %5d / %s\n", VAR_28, VAR_22[VAR_29].name);
  }


  VAR_21->main = VAR_16[VAR_24].cdo;
  switch (VAR_24) {
  case 1:
   VAR_21->detected_std = VAR_7 | VAR_11;
   if (VAR_25 == 0) {

    VAR_21->second = VAR_14[VAR_25].cdo;
    FUNC_8(VAR_20, VAR_5);
    VAR_21->watch_stereo = 1;
   } else if (VAR_25 == 1 && VAR_21->has_nicam) {

    VAR_21->second = VAR_14[VAR_25].cdo;
    FUNC_8(VAR_20, VAR_3);
    VAR_21->nicam_on = 1;
    VAR_21->watch_stereo = 1;
   } else {
    goto no_second;
   }
   break;
  case 2:

   VAR_21->detected_std = VAR_12;
   VAR_21->second = FUNC_1(6.552);
   FUNC_8(VAR_20, VAR_4);
   VAR_21->nicam_on = 1;
   VAR_21->watch_stereo = 1;
   break;
  case 3:
   if (VAR_25 == 1 || VAR_25 == 2) {

    VAR_21->second = VAR_15[VAR_25].cdo;
    FUNC_8(VAR_20, VAR_5);
    VAR_21->watch_stereo = 1;
    VAR_21->detected_std = VAR_8;
   } else if (VAR_25 == 0 && (VAR_21->v4l2_std & VAR_13)) {

    VAR_21->second = VAR_15[VAR_25].cdo;
    FUNC_8(VAR_20, VAR_1);
    VAR_21->watch_stereo = 1;
    VAR_21->detected_std = VAR_9;
   } else if (VAR_25 == 0 && VAR_21->has_nicam) {

    VAR_21->second = VAR_15[VAR_25].cdo;
    FUNC_8(VAR_20, VAR_3);
    VAR_21->nicam_on = 1;
    VAR_21->watch_stereo = 1;
    VAR_21->detected_std = VAR_8;
   } else {
    goto no_second;
   }
   break;
  case 0:
   VAR_21->detected_std = VAR_10;

  default:
no_second:
   VAR_21->second = VAR_16[VAR_24].cdo;
   FUNC_8(VAR_20, VAR_5);
   break;
  }
  FUNC_7(VAR_20, VAR_21->second, VAR_21->main);


  VAR_21->scan_in_progress = 0;
  FUNC_6(VAR_20);
  FUNC_11(VAR_21);

  if (VAR_18)
   FUNC_5(VAR_20);



  VAR_23 = 3;
  while (VAR_21->watch_stereo) {
   if (FUNC_10(VAR_21, VAR_23 ? 1000 : 5000))
    goto restart;
   if (VAR_23)
    VAR_23--;
   FUNC_14(VAR_20);
  }
 }
 FUNC_2(&VAR_20->dev, 1, VAR_18, "thread: exit\n");
 return 0;
}
