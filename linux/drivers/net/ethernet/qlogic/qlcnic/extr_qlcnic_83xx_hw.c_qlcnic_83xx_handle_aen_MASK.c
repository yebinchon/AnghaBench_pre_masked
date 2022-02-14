
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_mailbox {int rsp_status; int aen_lock; } ;
struct TYPE_4__ {int mbx_spurious_intr; } ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__ stats; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int pci_base0; struct qlcnic_mailbox* mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_mailbox*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11 = VAR_5;
 struct qlcnic_adapter *VAR_12 = VAR_7;
 struct qlcnic_mailbox *VAR_13;
 unsigned long VAR_14;

 VAR_13 = VAR_12->ahw->mailbox;
 FUNC_5(&VAR_13->aen_lock, VAR_14);
 VAR_9 = FUNC_1(VAR_12->ahw, VAR_2);
 if (!(VAR_9 & VAR_4))
  goto out;

 VAR_10 = FUNC_4(FUNC_0(VAR_12->ahw, 0));
 if (VAR_10 & VAR_3) {
  FUNC_2(VAR_12);
 } else {
  if (VAR_13->rsp_status != VAR_11)
   FUNC_3(VAR_13);
  else
   VAR_12->stats.mbx_spurious_intr++;
 }

out:
 VAR_8 = FUNC_1(VAR_12->ahw, VAR_1);
 FUNC_7(0, VAR_12->ahw->pci_base0 + VAR_8);
 FUNC_6(&VAR_13->aen_lock, VAR_14);
 return VAR_0;
}
