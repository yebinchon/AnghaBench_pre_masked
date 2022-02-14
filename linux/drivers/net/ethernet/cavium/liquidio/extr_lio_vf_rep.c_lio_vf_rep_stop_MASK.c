
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {TYPE_2__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct lio_vf_rep_req {TYPE_1__ rep_state; int ifidx; int req_type; } ;
struct lio_vf_rep_desc {int ifstate; int ifidx; struct octeon_device* oct; } ;
typedef int rep_cfg ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct octeon_device*,struct lio_vf_rep_req*,int,int *,int ) ;
 int FUNC_4 (struct lio_vf_rep_req*,int ,int) ;
 struct lio_vf_rep_desc* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_4)
{
 struct lio_vf_rep_desc *VAR_5 = FUNC_5(VAR_4);
 struct lio_vf_rep_req VAR_6;
 struct octeon_device *VAR_7;
 int VAR_8;

 VAR_7 = VAR_5->oct;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.req_type = VAR_2;
 VAR_6.ifidx = VAR_5->ifidx;
 VAR_6.rep_state.state = VAR_3;

 VAR_8 = FUNC_3(VAR_7, &VAR_6,
        sizeof(VAR_6), ((void*)0), 0);

 if (VAR_8) {
  FUNC_2(&VAR_7->pci_dev->dev,
   "VF_REP dev stop failed with err %d\n", VAR_8);
  return -VAR_0;
 }

 FUNC_1(&VAR_5->ifstate, (FUNC_0(&VAR_5->ifstate) &
          ~VAR_1));

 FUNC_7(VAR_4);
 FUNC_6(VAR_4);

 return 0;
}
