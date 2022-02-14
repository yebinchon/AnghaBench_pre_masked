
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_adapter {int * pmac_id; int if_handle; TYPE_1__* uc_list; int dev_mac; } ;
struct TYPE_2__ {int mac; } ;


 int FUNC_0 (struct be_adapter*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct be_adapter *VAR_0, int VAR_1)
{
 if (FUNC_1(VAR_0->uc_list[VAR_1].mac, VAR_0->dev_mac)) {
  VAR_0->pmac_id[VAR_1 + 1] = VAR_0->pmac_id[0];
  return 0;
 }

 return FUNC_0(VAR_0, VAR_0->uc_list[VAR_1].mac,
          VAR_0->if_handle,
          &VAR_0->pmac_id[VAR_1 + 1], 0);
}
