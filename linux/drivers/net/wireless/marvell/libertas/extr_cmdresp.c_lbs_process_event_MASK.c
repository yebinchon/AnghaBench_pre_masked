
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lbs_private {int dev; int needtowakeup; int psstate; int ds_awake_q; int wakeup_dev_required; int is_deep_sleep; int (* reset_deep_sleep_wakeup ) (struct lbs_private*) ;int host_sleep_q; int is_host_sleep_activated; int cmdpendingq; } ;
struct cmd_header {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lbs_private*,int ,struct cmd_header*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct lbs_private*,int) ;
 int FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (struct lbs_private*,int) ;
 int FUNC_5 (struct lbs_private*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct lbs_private*) ;
 int FUNC_10 (struct lbs_private*) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct lbs_private *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;
 struct cmd_header VAR_8;

 switch (VAR_6) {
 case 139:
  FUNC_1("EVENT: link sensed\n");
  break;

 case 145:
  FUNC_1("EVENT: deauthenticated\n");
  FUNC_2(VAR_5, 0);
  break;

 case 143:
  FUNC_1("EVENT: disassociated\n");
  FUNC_2(VAR_5, 0);
  break;

 case 140:
  FUNC_1("EVENT: link lost\n");
  FUNC_2(VAR_5, 1);
  break;

 case 132:
  FUNC_1("EVENT: ps sleep\n");


  if (VAR_5->psstate == VAR_3) {
   FUNC_1(
          "EVENT: in FULL POWER mode, ignoring PS_SLEEP\n");
   break;
  }
  if (!FUNC_6(&VAR_5->cmdpendingq)) {
   FUNC_1("EVENT: commands in queue, do not sleep\n");
   break;
  }
  VAR_5->psstate = VAR_4;

  FUNC_3(VAR_5);

  break;

 case 142:
  FUNC_1("EVENT: host awake\n");
  if (VAR_5->reset_deep_sleep_wakeup)
   VAR_5->reset_deep_sleep_wakeup(VAR_5);
  VAR_5->is_deep_sleep = 0;
  FUNC_0(VAR_5, VAR_0, &VAR_8,
    sizeof(VAR_8));
  VAR_5->is_host_sleep_activated = 0;
  FUNC_11(&VAR_5->host_sleep_q);
  break;

 case 144:
  if (VAR_5->reset_deep_sleep_wakeup)
   VAR_5->reset_deep_sleep_wakeup(VAR_5);
  FUNC_1("EVENT: ds awake\n");
  VAR_5->is_deep_sleep = 0;
  VAR_5->wakeup_dev_required = 0;
  FUNC_11(&VAR_5->ds_awake_q);
  break;

 case 133:
  FUNC_1("EVENT: ps awake\n");

  if (VAR_5->psstate == VAR_3) {
   FUNC_1(
          "EVENT: In FULL POWER mode - ignore PS AWAKE\n");
   break;
  }

  VAR_5->psstate = VAR_2;

  if (VAR_5->needtowakeup) {






   FUNC_1("waking up ...\n");
   FUNC_5(VAR_5, VAR_1, 0);
  }
  break;

 case 134:
  FUNC_1("EVENT: UNICAST MIC ERROR\n");
  FUNC_4(VAR_5, VAR_6);
  break;

 case 135:
  FUNC_1("EVENT: MULTICAST MIC ERROR\n");
  FUNC_4(VAR_5, VAR_6);
  break;

 case 136:
  FUNC_1("EVENT: MIB CHANGED\n");
  break;
 case 141:
  FUNC_1("EVENT: INIT DONE\n");
  break;
 case 146:
  FUNC_1("EVENT: ADHOC beacon lost\n");
  break;
 case 130:
  FUNC_7(VAR_5->dev, "EVENT: rssi low\n");
  break;
 case 128:
  FUNC_7(VAR_5->dev, "EVENT: snr low\n");
  break;
 case 138:
  FUNC_7(VAR_5->dev, "EVENT: max fail\n");
  break;
 case 131:
  FUNC_7(VAR_5->dev, "EVENT: rssi high\n");
  break;
 case 129:
  FUNC_7(VAR_5->dev, "EVENT: snr high\n");
  break;

 case 137:

  FUNC_8(VAR_5->dev, "EVENT: MESH_AUTO_STARTED (ignoring)\n");
  break;

 default:
  FUNC_7(VAR_5->dev, "EVENT: unknown event id %d\n", VAR_6);
  break;
 }

 return VAR_7;
}
