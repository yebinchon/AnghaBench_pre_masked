
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ScsiReqBlk {int* msgin_buf; int state; int msg_count; int msgout_buf; struct DeviceCtlBlk* dcb; } ;
struct DeviceCtlBlk {int dev_mode; int sync_offset; int min_nego_period; int sync_period; int sync_mode; int target_id; } ;
struct AdapterCtlBlk {int dummy; } ;


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
 int FUNC_0 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int* VAR_13 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (struct AdapterCtlBlk*,struct DeviceCtlBlk*) ;

__attribute__((used)) static void FUNC_5(struct AdapterCtlBlk *VAR_14, struct ScsiReqBlk *VAR_15)
{
 struct DeviceCtlBlk *VAR_16 = VAR_15->dcb;
 u8 VAR_17;
 int VAR_18;
 FUNC_1(VAR_2, "msgin_set_sync: <%02i> Sync: %ins "
  "(%02i.%01i MHz) Offset %i\n",
  VAR_16->target_id, VAR_15->msgin_buf[3] << 2,
  (250 / VAR_15->msgin_buf[3]),
  ((250 % VAR_15->msgin_buf[3]) * 10) / VAR_15->msgin_buf[3],
  VAR_15->msgin_buf[4]);

 if (VAR_15->msgin_buf[4] > 15)
  VAR_15->msgin_buf[4] = 15;
 if (!(VAR_16->dev_mode & VAR_6))
  VAR_16->sync_offset = 0;
 else if (VAR_16->sync_offset == 0)
  VAR_16->sync_offset = VAR_15->msgin_buf[4];
 if (VAR_15->msgin_buf[4] > VAR_16->sync_offset)
  VAR_15->msgin_buf[4] = VAR_16->sync_offset;
 else
  VAR_16->sync_offset = VAR_15->msgin_buf[4];
 VAR_17 = 0;
 while (VAR_17 < 7 && (VAR_15->msgin_buf[3] > VAR_13[VAR_17]
       || VAR_16->min_nego_period >
       VAR_13[VAR_17]))
  VAR_17++;
 if (VAR_15->msgin_buf[3] < VAR_13[VAR_17])
  FUNC_2(VAR_5,
   "msgin_set_sync: Increase sync nego period to %ins\n",
   VAR_13[VAR_17] << 2);
 VAR_15->msgin_buf[3] = VAR_13[VAR_17];
 VAR_16->sync_period &= 0xf0;
 VAR_16->sync_period |= VAR_0 | VAR_17;
 VAR_16->min_nego_period = VAR_15->msgin_buf[3];

 if (VAR_16->sync_period & VAR_12)
  VAR_18 = 500;
 else
  VAR_18 = 250;

 FUNC_2(VAR_5,
  "Target %02i: %s Sync: %ins Offset %i (%02i.%01i MB/s)\n",
  VAR_16->target_id, (VAR_18 == 500) ? "Wide16" : "",
  VAR_16->min_nego_period << 2, VAR_16->sync_offset,
  (VAR_18 / VAR_16->min_nego_period),
  ((VAR_18 % VAR_16->min_nego_period) * 10 +
  VAR_16->min_nego_period / 2) / VAR_16->min_nego_period);

 if (!(VAR_15->state & VAR_7)) {

  FUNC_2(VAR_4, "msgin_set_sync: answer w/%ins %i\n",
   VAR_15->msgin_buf[3] << 2, VAR_15->msgin_buf[4]);

  FUNC_3(VAR_15->msgout_buf, VAR_15->msgin_buf, 5);
  VAR_15->msg_count = 5;
  VAR_3;
  VAR_16->sync_mode |= VAR_8;
 } else {
  if ((VAR_16->sync_mode & VAR_11)
      && !(VAR_16->sync_mode & VAR_10)) {
   FUNC_0(VAR_14, VAR_16, VAR_15);
   VAR_3;
   FUNC_1(VAR_1, "msgin_set_sync: Also try WDTR\n");
  }
 }
 VAR_15->state &= ~VAR_7;
 VAR_16->sync_mode |= VAR_8 | VAR_9;

 FUNC_4(VAR_14, VAR_16);
}
