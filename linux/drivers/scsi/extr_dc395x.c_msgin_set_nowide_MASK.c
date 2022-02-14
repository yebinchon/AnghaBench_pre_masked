
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ScsiReqBlk {int state; struct DeviceCtlBlk* dcb; } ;
struct DeviceCtlBlk {int sync_mode; int sync_period; int target_id; } ;
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
 int FUNC_0 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct AdapterCtlBlk*,struct DeviceCtlBlk*) ;

__attribute__((used)) static inline void FUNC_3(struct AdapterCtlBlk *VAR_9,
  struct ScsiReqBlk *VAR_10)
{
 struct DeviceCtlBlk *VAR_11 = VAR_10->dcb;
 FUNC_1(VAR_1, "msgin_set_nowide: <%02i>\n", VAR_11->target_id);

 VAR_11->sync_period &= ~VAR_8;
 VAR_11->sync_mode &= ~(VAR_7);
 VAR_11->sync_mode |= VAR_6;
 VAR_10->state &= ~VAR_3;
 FUNC_2(VAR_9, VAR_11);
 if ((VAR_11->sync_mode & VAR_5)
     && !(VAR_11->sync_mode & VAR_4)) {
  FUNC_0(VAR_9, VAR_11, VAR_10);
  VAR_2;
  FUNC_1(VAR_0, "msgin_set_nowide: Rejected. Try SDTR anyway\n");
 }
}
