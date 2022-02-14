
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_cmd_args {scalar_t__ type; int completion; int rsp_status; } ;
struct qlcnic_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;

__attribute__((used)) static inline void
FUNC_4(struct qlcnic_adapter *VAR_2,
      struct qlcnic_cmd_args *VAR_3)
{
 FUNC_0(&VAR_3->rsp_status, VAR_1);

 if (VAR_3->type == VAR_0) {
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
  return;
 }
 FUNC_1(&VAR_3->completion);
}
