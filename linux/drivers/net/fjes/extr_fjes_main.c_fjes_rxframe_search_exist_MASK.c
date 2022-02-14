
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fjes_hw {int max_epid; int my_epid; TYPE_1__* ep_shm_info; } ;
struct fjes_adapter {struct fjes_hw hw; } ;
typedef enum ep_partner_status { ____Placeholder_ep_partner_status } ep_partner_status ;
struct TYPE_2__ {int rx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fjes_hw*,int) ;

__attribute__((used)) static int FUNC_2(struct fjes_adapter *VAR_1,
         int VAR_2)
{
 struct fjes_hw *VAR_3 = &VAR_1->hw;
 enum ep_partner_status VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = VAR_3->max_epid;
 VAR_2 = (VAR_2 + 1 + VAR_5) % VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = (VAR_2 + VAR_7) % VAR_5;
  if (VAR_6 == VAR_3->my_epid)
   continue;

  VAR_4 = FUNC_1(VAR_3, VAR_6);
  if (VAR_4 == VAR_0) {
   if (!FUNC_0(
    &VAR_3->ep_shm_info[VAR_6].rx))
    return VAR_6;
  }
 }
 return -1;
}
