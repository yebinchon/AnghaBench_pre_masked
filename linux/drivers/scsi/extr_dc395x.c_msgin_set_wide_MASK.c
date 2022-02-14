
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ScsiReqBlk {scalar_t__* msgin_buf; int state; int msg_count; int msgout_buf; struct DeviceCtlBlk* dcb; } ;
struct DeviceCtlBlk {int dev_mode; int sync_mode; int target_id; int sync_period; } ;
struct AdapterCtlBlk {int config; } ;


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
 int FUNC_0 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int FUNC_4 (struct AdapterCtlBlk*,struct DeviceCtlBlk*) ;

__attribute__((used)) static void FUNC_5(struct AdapterCtlBlk *VAR_12, struct ScsiReqBlk *VAR_13)
{
 struct DeviceCtlBlk *VAR_14 = VAR_13->dcb;
 u8 VAR_15 = (VAR_14->dev_mode & VAR_5
     && VAR_12->config & VAR_3) ? 1 : 0;
 FUNC_1(VAR_1, "msgin_set_wide: <%02i>\n", VAR_14->target_id);

 if (VAR_13->msgin_buf[3] > VAR_15)
  VAR_13->msgin_buf[3] = VAR_15;

 if (!(VAR_13->state & VAR_6)) {
  FUNC_2(VAR_4,
   "msgin_set_wide: Wide nego initiated <%02i>\n",
   VAR_14->target_id);
  FUNC_3(VAR_13->msgout_buf, VAR_13->msgin_buf, 4);
  VAR_13->msg_count = 4;
  VAR_13->state |= VAR_6;
  VAR_2;
 }

 VAR_14->sync_mode |= (VAR_10 | VAR_9);
 if (VAR_13->msgin_buf[3] > 0)
  VAR_14->sync_period |= VAR_11;
 else
  VAR_14->sync_period &= ~VAR_11;
 VAR_13->state &= ~VAR_6;

 FUNC_1(VAR_1,
  "msgin_set_wide: Wide (%i bit) negotiated <%02i>\n",
  (8 << VAR_13->msgin_buf[3]), VAR_14->target_id);
 FUNC_4(VAR_12, VAR_14);
 if ((VAR_14->sync_mode & VAR_8)
     && !(VAR_14->sync_mode & VAR_7)) {
  FUNC_0(VAR_12, VAR_14, VAR_13);
  VAR_2;
  FUNC_1(VAR_0, "msgin_set_wide: Also try SDTR.\n");
 }
}
