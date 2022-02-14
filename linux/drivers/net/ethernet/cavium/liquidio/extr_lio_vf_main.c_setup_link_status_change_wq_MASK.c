
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_device {TYPE_1__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {struct lio* ctxptr; int work; } ;
struct TYPE_6__ {TYPE_2__ wk; int wq; } ;
struct lio {TYPE_3__ link_status_wq; struct octeon_device* oct_dev; } ;
struct TYPE_4__ {int dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct lio *VAR_3 = FUNC_0(VAR_2);
 struct octeon_device *VAR_4 = VAR_3->oct_dev;

 VAR_3->link_status_wq.wq = FUNC_2("link-status",
       VAR_0, 0);
 if (!VAR_3->link_status_wq.wq) {
  FUNC_3(&VAR_4->pci_dev->dev, "unable to create cavium link status wq\n");
  return -1;
 }
 FUNC_1(&VAR_3->link_status_wq.wk.work,
     VAR_1);
 VAR_3->link_status_wq.wk.ctxptr = VAR_3;

 return 0;
}
