
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct enetc_vf_state {int flags; } ;
struct enetc_pf {TYPE_4__* si; struct enetc_msg_swbd* rxmsg; struct enetc_vf_state* vf_state; } ;
struct enetc_msg_swbd {scalar_t__ vaddr; } ;
struct TYPE_7__ {char* sa_data; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct enetc_msg_cmd_set_primary_mac {TYPE_3__ mac; TYPE_2__ header; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int hw; TYPE_1__* pdev; } ;
struct TYPE_5__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *,int,char*) ;

__attribute__((used)) static u16 FUNC_2(struct enetc_pf *VAR_4,
      int VAR_5)
{
 struct enetc_vf_state *VAR_6 = &VAR_4->vf_state[VAR_5];
 struct enetc_msg_swbd *VAR_7 = &VAR_4->rxmsg[VAR_5];
 struct enetc_msg_cmd_set_primary_mac *VAR_8;
 struct device *VAR_9 = &VAR_4->si->pdev->dev;
 u16 VAR_10;
 char *VAR_11;

 VAR_8 = (struct enetc_msg_cmd_set_primary_mac *)VAR_7->vaddr;
 VAR_10 = VAR_8->header.id;
 if (VAR_10 != VAR_0)
  return VAR_1;

 VAR_11 = VAR_8->mac.sa_data;
 if (VAR_6->flags & VAR_3)
  FUNC_0(VAR_9, "Attempt to override PF set mac addr for VF%d\n",
    VAR_5);
 else
  FUNC_1(&VAR_4->si->hw, VAR_5 + 1, VAR_11);

 return VAR_2;
}
