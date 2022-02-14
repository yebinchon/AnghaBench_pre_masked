
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msp_state {scalar_t__ mode; int scan_in_progress; int v4l2_std; int watch_stereo; int nicam_on; int std; int i2s_mode; scalar_t__ has_i2s_conf; scalar_t__ has_nicam; int rxsubchans; int detected_std; scalar_t__ radio; int second; int main; scalar_t__ restart; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {char* name; int retval; int second; int main; } ;


 int FUNC_0 (double) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int,scalar_t__,char*,...) ;
 int FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 int FUNC_6 (struct i2c_client*,scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (struct i2c_client*,int) ;
 scalar_t__ FUNC_8 (struct msp_state*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 TYPE_1__* VAR_14 ;
 int FUNC_11 (struct msp_state*) ;
 int FUNC_12 (struct i2c_client*,int,int) ;
 int FUNC_13 (struct i2c_client*,int,int) ;
 int FUNC_14 () ;
 struct msp_state* FUNC_15 (int ) ;
 int FUNC_16 (struct i2c_client*) ;

int FUNC_17(void *VAR_15)
{
 struct i2c_client *VAR_16 = VAR_15;
 struct msp_state *VAR_17 = FUNC_15(FUNC_2(VAR_16));
 int VAR_18, VAR_19, VAR_20, VAR_21;

 FUNC_1(&VAR_16->dev, 1, VAR_13, "msp3410 daemon started\n");
 VAR_17->detected_std = VAR_7;
 FUNC_14();
 for (;;) {
  FUNC_1(&VAR_16->dev, 2, VAR_13, "msp3410 thread: sleep\n");
  FUNC_8(VAR_17, -1);
  FUNC_1(&VAR_16->dev, 2, VAR_13, "msp3410 thread: wakeup\n");

restart:
  FUNC_1(&VAR_16->dev, 2, VAR_13, "thread: restart scan\n");
  VAR_17->restart = 0;
  if (FUNC_3())
   break;

  if (VAR_17->mode == VAR_2) {

   FUNC_1(&VAR_16->dev, 1, VAR_13,
    "thread: no carrier scan\n");
   VAR_17->scan_in_progress = 0;
   FUNC_11(VAR_17);
   continue;
  }


  VAR_17->scan_in_progress = 1;
  FUNC_11(VAR_17);




  if (VAR_17->radio)
   VAR_20 = 0x40;
  else
   VAR_20 = (VAR_17->v4l2_std & VAR_8) ? 0x20 : 1;
  VAR_17->watch_stereo = 0;
  VAR_17->nicam_on = 0;


  if (FUNC_8(VAR_17, 200))
   goto restart;

  if (VAR_13)
   FUNC_1(&VAR_16->dev, 2, VAR_13,
    "setting standard: %s (0x%04x)\n",
    FUNC_10(VAR_20), VAR_20);

  if (VAR_20 != 1) {

   VAR_18 = VAR_20;
  } else {

   FUNC_12(VAR_16, 0x20, VAR_20);
   for (;;) {
    if (FUNC_8(VAR_17, 100))
     goto restart;


    VAR_18 = FUNC_7(VAR_16, 0x7e);
    if (VAR_18 < 0x07ff)
     break;
    FUNC_1(&VAR_16->dev, 2, VAR_13,
     "detection still in progress\n");
   }
  }
  for (VAR_19 = 0; VAR_14[VAR_19].name != ((void*)0); VAR_19++)
   if (VAR_14[VAR_19].retval == VAR_18)
    break;
  FUNC_1(&VAR_16->dev, 1, VAR_13, "current standard: %s (0x%04x)\n",
   FUNC_10(VAR_18), VAR_18);
  VAR_17->main = VAR_14[VAR_19].main;
  VAR_17->second = VAR_14[VAR_19].second;
  VAR_17->std = VAR_18;
  VAR_17->rxsubchans = VAR_10;

  if (VAR_12 && !VAR_17->radio &&
      (VAR_17->v4l2_std & VAR_9) && (VAR_18 != 0x0009)) {

   FUNC_1(&VAR_16->dev, 1, VAR_13, "autodetection failed, switching to backup standard: %s (0x%04x)\n",
    VAR_14[8].name ?
     VAR_14[8].name : "unknown", VAR_18);
   VAR_17->std = VAR_18 = 0x0009;
   FUNC_12(VAR_16, 0x20, VAR_18);
  } else {
   VAR_17->detected_std = FUNC_9(VAR_17->std);
  }


  switch (VAR_18) {
  case 0x0008:
  case 0x000a:
  case 0x000b:
   if (VAR_18 == 0x000a)
    VAR_17->mode = VAR_4;
   else
    VAR_17->mode = VAR_3;

   VAR_17->nicam_on = 1;
   VAR_17->watch_stereo = 1;
   break;
  case 0x0009:
   VAR_17->mode = VAR_0;
   VAR_17->nicam_on = 1;
   VAR_17->watch_stereo = 1;
   break;
  case 0x0020:

   VAR_17->mode = VAR_1;
   break;
  case 0x0040:
   VAR_17->mode = VAR_5;
   VAR_17->rxsubchans = VAR_11;


   FUNC_6(VAR_16, VAR_5);
   FUNC_5(VAR_16, FUNC_0(10.7),
         FUNC_0(10.7));
   break;
  case 0x0002:
  case 0x0003:
  case 0x0004:
  case 0x0005:
   VAR_17->mode = VAR_6;
   VAR_17->watch_stereo = 1;
   break;
  }


  FUNC_13(VAR_16, 0x0d, 0x1900);
  FUNC_13(VAR_16, 0x0e, 0x3000);
  if (VAR_17->has_nicam)
   FUNC_13(VAR_16, 0x10, 0x5a00);

  if (VAR_17->has_i2s_conf)
   FUNC_12(VAR_16, 0x40, VAR_17->i2s_mode);


  FUNC_4(VAR_16);
  VAR_17->scan_in_progress = 0;
  FUNC_11(VAR_17);



  VAR_21 = 3;
  while (VAR_17->watch_stereo) {
   if (FUNC_8(VAR_17, VAR_21 ? 1000 : 5000))
    goto restart;
   if (VAR_21)
    VAR_21--;
   FUNC_16(VAR_16);
  }
 }
 FUNC_1(&VAR_16->dev, 1, VAR_13, "thread: exit\n");
 return 0;
}
