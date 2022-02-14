
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_device {TYPE_1__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int work; struct lio* ctxptr; } ;
struct TYPE_6__ {TYPE_2__ wk; int wq; } ;
struct lio {TYPE_3__ sync_octeon_time_wq; struct octeon_device* oct_dev; } ;
struct TYPE_4__ {int dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static inline int FUNC_6(struct net_device *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_3);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;

 VAR_4->sync_octeon_time_wq.wq =
  FUNC_2("update-octeon-time", VAR_1, 0);
 if (!VAR_4->sync_octeon_time_wq.wq) {
  FUNC_3(&VAR_5->pci_dev->dev, "Unable to create wq to update octeon time\n");
  return -1;
 }
 FUNC_1(&VAR_4->sync_octeon_time_wq.wk.work,
     VAR_2);
 VAR_4->sync_octeon_time_wq.wk.ctxptr = VAR_4;
 FUNC_5(VAR_4->sync_octeon_time_wq.wq,
      &VAR_4->sync_octeon_time_wq.wk.work,
      FUNC_4(VAR_0));

 return 0;
}
