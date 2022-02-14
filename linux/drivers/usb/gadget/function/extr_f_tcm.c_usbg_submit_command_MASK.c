
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct usbg_tpg {int workqueue; struct tcm_usbg_nexus* tpg_nexus; } ;
struct usbg_cmd {int tag; int se_cmd; int work; int unpacked_lun; int prio_attr; int * stream; int cmd_buf; } ;
struct tcm_usbg_nexus {int dummy; } ;
struct f_uas {int flags; int * stream; struct usbg_tpg* tpg; } ;
struct command_iu {scalar_t__ iu_id; int len; int prio_attr; int lun; int cdb; int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct usbg_cmd*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int VAR_10 ;
 struct usbg_cmd* FUNC_8 (struct f_uas*,struct tcm_usbg_nexus*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct f_uas *VAR_11,
  void *VAR_12, unsigned int VAR_13)
{
 struct command_iu *VAR_14 = VAR_12;
 struct usbg_cmd *VAR_15;
 struct usbg_tpg *VAR_16 = VAR_11->tpg;
 struct tcm_usbg_nexus *VAR_17;
 u32 VAR_18;
 u16 VAR_19;

 if (VAR_14->iu_id != VAR_2) {
  FUNC_5("Unsupported type %d\n", VAR_14->iu_id);
  return -VAR_0;
 }

 VAR_17 = VAR_16->tpg_nexus;
 if (!VAR_17) {
  FUNC_5("Missing nexus, ignoring command\n");
  return -VAR_0;
 }

 VAR_18 = (VAR_14->len & ~0x3) + 16;
 if (VAR_18 > VAR_8)
  return -VAR_0;

 VAR_19 = FUNC_2(&VAR_14->tag);
 VAR_15 = FUNC_8(VAR_11, VAR_17, VAR_19);
 if (FUNC_1(VAR_15)) {
  FUNC_5("usbg_get_cmd failed\n");
  return -VAR_1;
 }
 FUNC_3(VAR_15->cmd_buf, VAR_14->cdb, VAR_18);

 if (VAR_11->flags & VAR_9) {
  if (VAR_15->tag > VAR_7)
   goto err;
  if (!VAR_15->tag)
   VAR_15->stream = &VAR_11->stream[0];
  else
   VAR_15->stream = &VAR_11->stream[VAR_15->tag - 1];
 } else {
  VAR_15->stream = &VAR_11->stream[0];
 }

 switch (VAR_14->prio_attr & 0x7) {
 case 130:
  VAR_15->prio_attr = VAR_4;
  break;
 case 129:
  VAR_15->prio_attr = VAR_5;
  break;
 case 131:
  VAR_15->prio_attr = VAR_3;
  break;
 default:
  FUNC_4("Unsupported prio_attr: %02x.\n",
    VAR_14->prio_attr);

 case 128:
  VAR_15->prio_attr = VAR_6;
  break;
 }

 VAR_15->unpacked_lun = FUNC_7(&VAR_14->lun);

 FUNC_0(&VAR_15->work, VAR_10);
 FUNC_6(VAR_16->workqueue, &VAR_15->work);

 return 0;
err:
 FUNC_9(&VAR_15->se_cmd);
 return -VAR_0;
}
