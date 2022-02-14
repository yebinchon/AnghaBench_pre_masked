
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {TYPE_2__* pci_dev; } ;
struct notifier_block {int dummy; } ;
struct net_device {int name; int * netdev_ops; } ;
struct TYPE_3__ {int name; } ;
struct lio_vf_rep_req {TYPE_1__ rep_name; int ifidx; int req_type; } ;
struct lio_vf_rep_desc {int ifidx; struct octeon_device* oct; } ;
typedef int rep_cfg ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct octeon_device*,struct lio_vf_rep_req*,int,int *,int ) ;
 int FUNC_2 (struct lio_vf_rep_req*,int ,int) ;
 struct net_device* FUNC_3 (void*) ;
 struct lio_vf_rep_desc* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct notifier_block *VAR_4,
   unsigned long VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = FUNC_3(VAR_6);
 struct lio_vf_rep_desc *VAR_8;
 struct lio_vf_rep_req VAR_9;
 struct octeon_device *VAR_10;
 int VAR_11;

 switch (VAR_5) {
 case 128:
 case 129:
  break;

 default:
  return VAR_2;
 }

 if (VAR_7->netdev_ops != &VAR_3)
  return VAR_2;

 VAR_8 = FUNC_4(VAR_7);
 VAR_10 = VAR_8->oct;

 if (FUNC_5(VAR_7->name) > VAR_0) {
  FUNC_0(&VAR_10->pci_dev->dev,
   "Device name change sync failed as the size is > %d\n",
   VAR_0);
  return VAR_2;
 }

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.req_type = VAR_1;
 VAR_9.ifidx = VAR_8->ifidx;
 FUNC_6(VAR_9.rep_name.name, VAR_7->name, VAR_0);

 VAR_11 = FUNC_1(VAR_10, &VAR_9,
        sizeof(VAR_9), ((void*)0), 0);
 if (VAR_11)
  FUNC_0(&VAR_10->pci_dev->dev,
   "vf_rep netdev name change failed with err %d\n", VAR_11);

 return VAR_2;
}
