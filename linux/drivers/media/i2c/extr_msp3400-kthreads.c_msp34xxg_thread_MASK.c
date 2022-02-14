
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {scalar_t__ mode; int std; int acb; int watch_stereo; int detected_std; scalar_t__ force_btsc; scalar_t__ radio; scalar_t__ scan_in_progress; scalar_t__ restart; } ;
struct i2c_client {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,char*,...) ;
 int FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct i2c_client*) ;
 int VAR_2 ;
 int FUNC_4 (struct i2c_client*,int) ;
 scalar_t__ FUNC_5 (struct msp_state*,int) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct msp_state*) ;
 int FUNC_9 (struct i2c_client*,int,int) ;
 scalar_t__ FUNC_10 (struct i2c_client*,int,int) ;
 int FUNC_11 () ;
 struct msp_state* FUNC_12 (int ) ;
 int FUNC_13 (struct i2c_client*) ;

int FUNC_14(void *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4;
 struct msp_state *VAR_6 = FUNC_12(FUNC_1(VAR_5));
 int VAR_7, VAR_8;

 FUNC_0(&VAR_5->dev, 1, VAR_2, "msp34xxg daemon started\n");
 VAR_6->detected_std = VAR_1;
 FUNC_11();
 for (;;) {
  FUNC_0(&VAR_5->dev, 2, VAR_2, "msp34xxg thread: sleep\n");
  FUNC_5(VAR_6, -1);
  FUNC_0(&VAR_5->dev, 2, VAR_2, "msp34xxg thread: wakeup\n");

restart:
  FUNC_0(&VAR_5->dev, 1, VAR_2, "thread: restart scan\n");
  VAR_6->restart = 0;
  if (FUNC_2())
   break;

  if (VAR_6->mode == VAR_0) {

   FUNC_0(&VAR_5->dev, 1, VAR_2,
    "thread: no carrier scan\n");
   VAR_6->scan_in_progress = 0;
   FUNC_8(VAR_6);
   continue;
  }


  FUNC_3(VAR_5);
  VAR_6->std = VAR_6->radio ? 0x40 :
   (VAR_6->force_btsc && VAR_3 == 1) ? 32 : VAR_3;
  FUNC_9(VAR_5, 0x20, VAR_6->std);

  if (VAR_6->std != 1)
   goto unmute;


  FUNC_0(&VAR_5->dev, 1, VAR_2,
   "started autodetect, waiting for result\n");
  for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
   if (FUNC_5(VAR_6, 100))
    goto restart;


   VAR_7 = FUNC_4(VAR_5, 0x7e);
   if (VAR_7 < 0x07ff) {
    VAR_6->std = VAR_7;
    break;
   }
   FUNC_0(&VAR_5->dev, 2, VAR_2,
    "detection still in progress\n");
  }
  if (VAR_6->std == 1) {
   FUNC_0(&VAR_5->dev, 1, VAR_2,
    "detection still in progress after 10 tries. giving up.\n");
   continue;
  }

unmute:
  FUNC_0(&VAR_5->dev, 1, VAR_2,
   "detected standard: %s (0x%04x)\n",
   FUNC_7(VAR_6->std), VAR_6->std);
  VAR_6->detected_std = FUNC_6(VAR_6->std);

  if (VAR_6->std == 9) {

   FUNC_10(VAR_5, 0x0e, 0x7c00);
  }


  FUNC_8(VAR_6);


  if (FUNC_10(VAR_5, 0x13, VAR_6->acb))
   return -1;



  if (VAR_6->std != 0x20)
   continue;

  VAR_6->watch_stereo = 1;



  FUNC_13(VAR_5);
  while (VAR_6->watch_stereo) {
   FUNC_13(VAR_5);
   if (FUNC_5(VAR_6, 5000))
    goto restart;
  }
 }
 FUNC_0(&VAR_5->dev, 1, VAR_2, "thread: exit\n");
 return 0;
}
