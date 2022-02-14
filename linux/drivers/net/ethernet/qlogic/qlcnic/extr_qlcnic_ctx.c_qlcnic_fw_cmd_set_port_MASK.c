
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_cmd_args*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int
FUNC_3(struct qlcnic_adapter *VAR_1, u32 VAR_2)
{
 int VAR_3;
 struct qlcnic_cmd_args VAR_4;

 VAR_3 = FUNC_0(&VAR_4, VAR_1, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_4.req.arg[1] = VAR_2;
 VAR_3 = FUNC_2(VAR_1, &VAR_4);
 FUNC_1(&VAR_4);
 return VAR_3;
}
