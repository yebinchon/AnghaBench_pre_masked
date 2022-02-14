
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct octeon_device {int ifcount; int num_oqs; TYPE_5__* pci_dev; TYPE_1__* props; int cmd_resp_wqlock; int cmd_resp_state; } ;
struct TYPE_9__ {TYPE_3__* rxpciq; } ;
struct lio {TYPE_4__ linfo; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_7__ {int q_no; } ;
struct TYPE_8__ {TYPE_2__ s; } ;
struct TYPE_6__ {int netdev; } ;


 struct lio* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct octeon_device*,int) ;
 int FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct octeon_device *VAR_1)
{
 struct lio *VAR_2;
 int VAR_3, VAR_4;

 FUNC_1(&VAR_1->pci_dev->dev, "Stopping network interfaces\n");
 if (!VAR_1->ifcount) {
  FUNC_2(&VAR_1->pci_dev->dev, "Init for Octeon was not completed\n");
  return 1;
 }

 FUNC_5(&VAR_1->cmd_resp_wqlock);
 VAR_1->cmd_resp_state = VAR_0;
 FUNC_6(&VAR_1->cmd_resp_wqlock);

 for (VAR_3 = 0; VAR_3 < VAR_1->ifcount; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1->props[VAR_3].netdev);
  for (VAR_4 = 0; VAR_4 < VAR_1->num_oqs; VAR_4++)
   FUNC_4(VAR_1,
         VAR_2->linfo.rxpciq[VAR_4].s.q_no);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->ifcount; VAR_3++)
  FUNC_3(VAR_1, VAR_3);

 FUNC_1(&VAR_1->pci_dev->dev, "Network interfaces stopped\n");
 return 0;
}
