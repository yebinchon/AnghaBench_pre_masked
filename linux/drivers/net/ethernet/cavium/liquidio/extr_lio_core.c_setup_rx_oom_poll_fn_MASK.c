
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct octeon_device {int num_oqs; TYPE_4__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {TYPE_2__* rxpciq; } ;
struct lio {struct cavium_wq* rxq_status_wq; TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_10__ {int ctxul; struct lio* ctxptr; int work; } ;
struct cavium_wq {TYPE_5__ wk; int wq; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_6__ {int q_no; } ;
struct TYPE_7__ {TYPE_1__ s; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_2 ;

int FUNC_4(struct net_device *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_3);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 struct cavium_wq *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_oqs; VAR_7++) {
  VAR_8 = VAR_4->linfo.rxpciq[VAR_7].s.q_no;
  VAR_6 = &VAR_4->rxq_status_wq[VAR_8];
  VAR_6->wq = FUNC_2("rxq-oom-status",
      VAR_1, 0);
  if (!VAR_6->wq) {
   FUNC_3(&VAR_5->pci_dev->dev, "unable to create cavium rxq oom status wq\n");
   return -VAR_0;
  }

  FUNC_1(&VAR_6->wk.work,
      VAR_2);
  VAR_6->wk.ctxptr = VAR_4;
  VAR_6->wk.ctxul = VAR_8;
 }

 return 0;
}
