
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_fcf_device {struct fcoe_fcf* priv; scalar_t__ selected; int fka_period; int priority; int mac; int vfid; int fc_map; int switch_name; int fabric_name; } ;
struct fcoe_fcf {int list; struct fcoe_fcf_device* fcf_dev; int fka_period; int pri; int fcf_mac; int vfid; int fc_map; int switch_name; int fabric_name; struct fcoe_ctlr* fip; } ;
struct fcoe_ctlr_device {int lock; } ;
struct fcoe_ctlr {int fcf_count; int fcfs; } ;


 int FUNC_0 (struct fcoe_fcf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fcoe_ctlr*,char*,int ,int ) ;
 struct fcoe_ctlr_device* FUNC_2 (struct fcoe_ctlr*) ;
 struct fcoe_fcf_device* FUNC_3 (struct fcoe_ctlr_device*,struct fcoe_fcf_device*) ;
 int FUNC_4 (struct fcoe_fcf_device*) ;
 struct fcoe_fcf_device* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct fcoe_fcf *VAR_3)
{
 struct fcoe_ctlr *VAR_4 = VAR_3->fip;
 struct fcoe_ctlr_device *VAR_5;
 struct fcoe_fcf_device *VAR_6, *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_1(VAR_4, "New FCF fab %16.16llx mac %pM\n",
   VAR_3->fabric_name, VAR_3->fcf_mac);

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  goto out;

 VAR_6->fabric_name = VAR_3->fabric_name;
 VAR_6->switch_name = VAR_3->switch_name;
 VAR_6->fc_map = VAR_3->fc_map;
 VAR_6->vfid = VAR_3->vfid;
 FUNC_7(VAR_6->mac, VAR_3->fcf_mac, VAR_1);
 VAR_6->priority = VAR_3->pri;
 VAR_6->fka_period = VAR_3->fka_period;
 VAR_6->selected = 0;
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_8(&VAR_5->lock);
  VAR_7 = FUNC_3(VAR_5, VAR_6);
  if (FUNC_10(!VAR_7)) {
   VAR_8 = -VAR_0;
   FUNC_9(&VAR_5->lock);
   goto out;
  }
  FUNC_0(VAR_7->priv);

  VAR_7->priv = VAR_3;
  VAR_3->fcf_dev = VAR_7;
  FUNC_9(&VAR_5->lock);
 }

 FUNC_6(&VAR_3->list, &VAR_4->fcfs);
 VAR_4->fcf_count++;
 VAR_8 = 0;

out:
 FUNC_4(VAR_6);
 return VAR_8;
}
