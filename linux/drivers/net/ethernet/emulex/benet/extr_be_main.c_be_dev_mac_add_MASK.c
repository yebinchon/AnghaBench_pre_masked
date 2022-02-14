
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct be_adapter {int uc_macs; int * pmac_id; int if_handle; TYPE_1__* uc_list; } ;
struct TYPE_2__ {int mac; } ;


 int FUNC_0 (struct be_adapter*,int *,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct be_adapter *VAR_0, u8 *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->uc_macs; VAR_2++) {
  if (FUNC_1(VAR_0->uc_list[VAR_2].mac, VAR_1)) {

   VAR_0->pmac_id[0] = VAR_0->pmac_id[VAR_2 + 1];
   return 0;
  }
 }

 return FUNC_0(VAR_0, VAR_1, VAR_0->if_handle,
          &VAR_0->pmac_id[0], 0);
}
