
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ScsiReqBlk {int state; struct DeviceCtlBlk* dcb; } ;
struct DeviceCtlBlk {int sync_mode; int min_nego_period; scalar_t__ sync_offset; int target_lun; int target_id; } ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct AdapterCtlBlk*,struct DeviceCtlBlk*) ;

__attribute__((used)) static void FUNC_4(struct AdapterCtlBlk *VAR_8, struct ScsiReqBlk *VAR_9)
{
 struct DeviceCtlBlk *VAR_10 = VAR_9->dcb;
 FUNC_2(VAR_2, "msgin_set_async: No sync transfers <%02i-%i>\n",
  VAR_10->target_id, VAR_10->target_lun);

 VAR_10->sync_mode &= ~(VAR_5);
 VAR_10->sync_mode |= VAR_4;

 VAR_10->sync_offset = 0;
 VAR_10->min_nego_period = 200 >> 2;
 VAR_9->state &= ~VAR_3;
 FUNC_3(VAR_8, VAR_10);
 if ((VAR_10->sync_mode & VAR_7)
     && !(VAR_10->sync_mode & VAR_6)) {
  FUNC_0(VAR_8, VAR_10, VAR_9);
  VAR_1;
  FUNC_1(VAR_0, "msgin_set_async(rej): Try WDTR anyway\n");
 }
}
