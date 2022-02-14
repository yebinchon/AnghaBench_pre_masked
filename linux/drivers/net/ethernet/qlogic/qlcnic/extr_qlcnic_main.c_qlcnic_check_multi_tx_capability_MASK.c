
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_hardware_context {int* extra_capability; } ;
struct qlcnic_adapter {int state; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_hardware_context *VAR_3 = VAR_2->ahw;

 if (FUNC_0(VAR_2) &&
     (VAR_3->extra_capability[0] & VAR_0)) {
  FUNC_1(VAR_1, &VAR_2->state);
  return 0;
 } else {
  return 1;
 }
}
