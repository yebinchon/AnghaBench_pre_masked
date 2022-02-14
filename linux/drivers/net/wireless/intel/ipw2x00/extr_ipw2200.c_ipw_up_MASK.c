
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_priv {int status; int cmdlog_len; int config; int request_scan; int rf_kill; int mac_addr; TYPE_1__* net_dev; int * cmdlog; scalar_t__ suspend_time; int ieee; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct ipw_priv*,int ) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (struct ipw_priv*) ;
 int FUNC_6 (struct ipw_priv*) ;
 int FUNC_7 (struct ipw_priv*) ;
 int FUNC_8 (struct ipw_priv*) ;
 int * FUNC_9 (int,int,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct ipw_priv*) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int FUNC_14(struct ipw_priv *VAR_10)
{
 int VAR_11, VAR_12;


 if (VAR_10->suspend_time) {
  FUNC_10(VAR_10->ieee, VAR_10->suspend_time);
  VAR_10->suspend_time = 0;
 }

 if (VAR_10->status & VAR_7)
  return -VAR_1;

 if (VAR_9 && !VAR_10->cmdlog) {
  VAR_10->cmdlog = FUNC_9(VAR_9, sizeof(*VAR_10->cmdlog),
           VAR_4);
  if (VAR_10->cmdlog == ((void*)0)) {
   FUNC_1("Error allocating %d command log entries.\n",
      VAR_9);
   return -VAR_2;
  } else {
   VAR_10->cmdlog_len = VAR_9;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {


  VAR_11 = FUNC_7(VAR_10);
  if (VAR_11) {
   FUNC_1("Unable to load firmware: %d\n", VAR_11);
   return VAR_11;
  }

  FUNC_6(VAR_10);
  if (!(VAR_10->config & VAR_0))
   FUNC_3(VAR_10, VAR_10->mac_addr);
  FUNC_11(VAR_10->net_dev->dev_addr, VAR_10->mac_addr, VAR_3);

  FUNC_8(VAR_10);

  if (VAR_10->status & VAR_8) {
   FUNC_2("Radio disabled by module parameter.\n");
   return 0;
  } else if (FUNC_12(VAR_10)) {
   FUNC_2("Radio Frequency Kill Switch is On:\n"
        "Kill switch must be turned off for "
        "wireless networking to work.\n");
   FUNC_13(&VAR_10->rf_kill, 2 * VAR_5);
   return 0;
  }

  VAR_11 = FUNC_4(VAR_10);
  if (!VAR_11) {
   FUNC_0("Configured device on count %i\n", VAR_12);



   FUNC_13(&VAR_10->request_scan, 0);

   return 0;
  }

  FUNC_0("Device configuration failed: 0x%08X\n", VAR_11);
  FUNC_0("Failed to config device on retry %d of %d\n",
          VAR_12, VAR_6);



  FUNC_5(VAR_10);
 }



 FUNC_1("Unable to initialize device after %d attempts.\n", VAR_12);

 return -VAR_1;
}
