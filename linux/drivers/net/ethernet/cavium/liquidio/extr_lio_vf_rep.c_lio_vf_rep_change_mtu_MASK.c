
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {TYPE_2__* pci_dev; } ;
struct net_device {int mtu; } ;
struct TYPE_3__ {int mtu; } ;
struct lio_vf_rep_req {TYPE_1__ rep_mtu; int ifidx; int req_type; } ;
struct lio_vf_rep_desc {int ifidx; struct octeon_device* oct; } ;
typedef int rep_cfg ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct octeon_device*,struct lio_vf_rep_req*,int,int *,int ) ;
 int FUNC_3 (struct lio_vf_rep_req*,int ,int) ;
 struct lio_vf_rep_desc* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_2, int VAR_3)
{
 struct lio_vf_rep_desc *VAR_4 = FUNC_4(VAR_2);
 struct lio_vf_rep_req VAR_5;
 struct octeon_device *VAR_6;
 int VAR_7;

 VAR_6 = VAR_4->oct;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.req_type = VAR_1;
 VAR_5.ifidx = VAR_4->ifidx;
 VAR_5.rep_mtu.mtu = FUNC_0(VAR_3);

 VAR_7 = FUNC_2(VAR_6, &VAR_5,
        sizeof(VAR_5), ((void*)0), 0);
 if (VAR_7) {
  FUNC_1(&VAR_6->pci_dev->dev,
   "Change MTU failed with err %d\n", VAR_7);
  return -VAR_0;
 }

 VAR_2->mtu = VAR_3;

 return 0;
}
