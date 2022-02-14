
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_cmd_args {int dummy; } ;
struct qlcnic_back_channel {int vf_async_work; int bc_async_wq; } ;
struct qlcnic_async_cmd {int dummy; } ;


 int FUNC_0 (struct qlcnic_cmd_args*) ;
 int FUNC_1 (struct qlcnic_cmd_args*) ;
 struct qlcnic_async_cmd* FUNC_2 (struct qlcnic_back_channel*,struct qlcnic_cmd_args*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_back_channel *VAR_0,
         struct qlcnic_cmd_args *VAR_1)
{
 struct qlcnic_async_cmd *VAR_2 = ((void*)0);

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
  return;
 }

 FUNC_3(VAR_0->bc_async_wq, &VAR_0->vf_async_work);
}
