
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int * uc_list; int * mc_list; int * pmac_id; int if_handle; } ;


 int FUNC_0 (struct be_adapter*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->if_handle, 0);

 FUNC_1(VAR_0->pmac_id);
 VAR_0->pmac_id = ((void*)0);

 FUNC_1(VAR_0->mc_list);
 VAR_0->mc_list = ((void*)0);

 FUNC_1(VAR_0->uc_list);
 VAR_0->uc_list = ((void*)0);
}
