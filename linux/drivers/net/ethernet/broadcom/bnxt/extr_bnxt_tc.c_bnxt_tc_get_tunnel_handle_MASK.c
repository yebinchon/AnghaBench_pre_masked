
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_tc_flow_node {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct bnxt_tc_flow {TYPE_1__ actions; } ;
struct bnxt {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct bnxt_tc_flow*,struct bnxt_tc_flow_node*,int *) ;
 int FUNC_1 (struct bnxt*,struct bnxt_tc_flow*,struct bnxt_tc_flow_node*,int *) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_2,
         struct bnxt_tc_flow *VAR_3,
         struct bnxt_tc_flow_node *VAR_4,
         __le32 *VAR_5)
{
 if (VAR_3->actions.flags & VAR_0)
  return FUNC_0(VAR_2, VAR_3, VAR_4,
      VAR_5);
 else if (VAR_3->actions.flags & VAR_1)
  return FUNC_1(VAR_2, VAR_3, VAR_4,
      VAR_5);
 else
  return 0;
}
