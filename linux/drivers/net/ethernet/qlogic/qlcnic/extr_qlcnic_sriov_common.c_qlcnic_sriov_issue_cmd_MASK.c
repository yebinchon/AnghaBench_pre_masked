
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_cmd_args {scalar_t__ type; } ;
struct qlcnic_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_1,
      struct qlcnic_cmd_args *VAR_2)
{
 if (VAR_2->type == VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 else
  return FUNC_0(VAR_1, VAR_2);
}
