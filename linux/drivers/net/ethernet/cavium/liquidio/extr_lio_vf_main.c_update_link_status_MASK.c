
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union oct_link_status {scalar_t__ u64; } ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct net_device {int max_mtu; scalar_t__ mtu; } ;
struct TYPE_11__ {int work; } ;
struct TYPE_12__ {TYPE_5__ wk; int wq; } ;
struct TYPE_8__ {int mtu; scalar_t__ link_up; } ;
struct TYPE_9__ {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_10__ {TYPE_3__ link; } ;
struct lio {TYPE_6__ link_status_wq; TYPE_4__ linfo; int link_changes; scalar_t__ intf_open; struct octeon_device* oct_dev; } ;
struct TYPE_7__ {int dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_0,
          union oct_link_status *VAR_1)
{
 struct lio *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_2->linfo.link.s.mtu;
 struct octeon_device *VAR_4 = VAR_2->oct_dev;

 if ((VAR_2->intf_open) && (VAR_2->linfo.link.u64 != VAR_1->u64)) {
  VAR_2->linfo.link.u64 = VAR_1->u64;

  FUNC_5(VAR_0);
  VAR_2->link_changes++;

  if (VAR_2->linfo.link.s.link_up) {
   FUNC_4(VAR_0);
   FUNC_8(VAR_0);
  } else {
   FUNC_3(VAR_0);
   FUNC_7(VAR_0);
  }

  if (VAR_2->linfo.link.s.mtu != VAR_3) {
   FUNC_1(&VAR_4->pci_dev->dev,
     "Max MTU Changed from %d to %d\n",
     VAR_3, VAR_2->linfo.link.s.mtu);
   VAR_0->max_mtu = VAR_2->linfo.link.s.mtu;
  }

  if (VAR_2->linfo.link.s.mtu < VAR_0->mtu) {
   FUNC_2(&VAR_4->pci_dev->dev,
     "Current MTU is higher than new max MTU; Reducing the current mtu from %d to %d\n",
     VAR_0->mtu, VAR_2->linfo.link.s.mtu);
   FUNC_6(VAR_2->link_status_wq.wq,
        &VAR_2->link_status_wq.wk.work, 0);
  }
 }
}
