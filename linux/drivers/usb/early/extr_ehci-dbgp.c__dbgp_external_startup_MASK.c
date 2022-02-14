
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_debug_descriptor {int bDebugInEndpoint; int bDebugOutEndpoint; } ;
typedef int dbgp_desc ;
struct TYPE_4__ {int control; } ;
struct TYPE_3__ {int * port_status; int command; } ;


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
 int FUNC_0 (int,int ,char*,int) ;
 int FUNC_1 (int,int,int ,int,int ,struct usb_debug_descriptor*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (char*,...) ;
 TYPE_2__* VAR_21 ;
 TYPE_1__* VAR_22 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static int FUNC_11(void)
{
 int VAR_23;
 struct usb_debug_descriptor VAR_24;
 int VAR_25;
 u32 VAR_26, VAR_27, VAR_28;
 int VAR_29 = VAR_20;
 int VAR_30 = 3;
 int VAR_31 = 1;
 int VAR_32 = 1;

try_port_reset_again:
 VAR_25 = FUNC_3();
 if (VAR_25)
  return VAR_25;


 VAR_25 = FUNC_7(VAR_29);
 if (VAR_25 < 0) {
  VAR_27 = FUNC_9(&VAR_22->port_status[VAR_29 - 1]);
  if (!(VAR_27 & VAR_4) && VAR_32) {



   VAR_32 = 0;
   VAR_28 = FUNC_9(&VAR_22->command);
   VAR_28 &= ~VAR_0;
   FUNC_10(VAR_28, &VAR_22->command);
   VAR_27 = FUNC_9(&VAR_22->port_status[VAR_29 - 1]);
   VAR_27 |= VAR_6;
   FUNC_10(VAR_27, &VAR_22->port_status[VAR_29 - 1]);
   FUNC_4("Trying to force debug port online");
   FUNC_8(50);
   FUNC_2();
   goto try_port_reset_again;
  } else if (VAR_31--) {
   goto try_port_reset_again;
  }
  FUNC_6("No device found in debug port\n");
  return -VAR_2;
 }
 FUNC_4("wait for port done");


 VAR_26 = FUNC_9(&VAR_21->control);
 VAR_26 |= VAR_1;
 FUNC_10(VAR_26, &VAR_21->control);
 VAR_26 = FUNC_9(&VAR_21->control);
 if ((VAR_26 & VAR_1) != VAR_1) {
  FUNC_6("No device in debug port\n");
  FUNC_10(VAR_26 & ~VAR_1, &VAR_21->control);
  return -VAR_3;
 }
 FUNC_4("debug ported enabled");


 VAR_27 = FUNC_9(&VAR_22->port_status[VAR_29 - 1]);
 VAR_27 &= ~VAR_5;
 FUNC_10(VAR_27, &VAR_22->port_status[VAR_29 - 1]);

 FUNC_5(100);

try_again:

 for (VAR_23 = 0; VAR_23 <= 127; VAR_23++) {
  VAR_25 = FUNC_1(VAR_23,
   VAR_9 | VAR_16 | VAR_12,
   VAR_13, (VAR_11 << 8), 0,
   &VAR_24, sizeof(VAR_24));
  if (VAR_25 > 0)
   break;
 }
 if (VAR_23 > 127) {
  FUNC_6("Could not find attached debug device\n");
  goto err;
 }
 VAR_18 = VAR_24.bDebugOutEndpoint;
 VAR_17 = VAR_24.bDebugInEndpoint;


 if (VAR_23 != VAR_7) {
  VAR_25 = FUNC_1(VAR_23,
   VAR_10 | VAR_16 | VAR_12,
   VAR_14, VAR_7, 0, ((void*)0), 0);
  if (VAR_25 < 0) {
   FUNC_6("Could not move attached device to %d\n",
    VAR_7);
   goto err;
  }
  FUNC_6("debug device renamed to 127\n");
 }


 VAR_25 = FUNC_1(VAR_7,
  VAR_10 | VAR_16 | VAR_12,
  VAR_15, VAR_8, 0, ((void*)0), 0);
 if (VAR_25 < 0) {
  FUNC_6(" Could not enable the debug device\n");
  goto err;
 }
 FUNC_6("debug interface enabled\n");


 VAR_25 = FUNC_0(VAR_7, VAR_18, " ", 1);
 if (VAR_25 < 0) {
  FUNC_6("dbgp_bulk_write failed: %d\n", VAR_25);
  goto err;
 }
 FUNC_6("small write done\n");
 VAR_19 = 0;

 return 0;
err:
 if (VAR_30--)
  goto try_again;
 return -VAR_3;
}
