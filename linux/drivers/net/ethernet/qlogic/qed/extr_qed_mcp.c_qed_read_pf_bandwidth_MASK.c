
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_mcp_function_info {int bandwidth_min; int bandwidth_max; } ;
struct qed_hwfn {TYPE_1__* mcp_info; } ;
struct public_func {int config; } ;
struct TYPE_2__ {struct qed_mcp_function_info func_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_2,
      struct public_func *VAR_3)
{
 struct qed_mcp_function_info *VAR_4;

 VAR_4 = &VAR_2->mcp_info->func_info;

 VAR_4->bandwidth_min = FUNC_1(VAR_3->config,
        VAR_1);
 if (VAR_4->bandwidth_min < 1 || VAR_4->bandwidth_min > 100) {
  FUNC_0(VAR_2,
   "bandwidth minimum out of bounds [%02x]. Set to 1\n",
   VAR_4->bandwidth_min);
  VAR_4->bandwidth_min = 1;
 }

 VAR_4->bandwidth_max = FUNC_1(VAR_3->config,
        VAR_0);
 if (VAR_4->bandwidth_max < 1 || VAR_4->bandwidth_max > 100) {
  FUNC_0(VAR_2,
   "bandwidth maximum out of bounds [%02x]. Set to 100\n",
   VAR_4->bandwidth_max);
  VAR_4->bandwidth_max = 100;
 }
}
