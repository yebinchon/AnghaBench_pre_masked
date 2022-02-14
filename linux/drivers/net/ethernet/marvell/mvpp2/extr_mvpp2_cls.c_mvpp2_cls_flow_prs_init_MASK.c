
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ri_mask; int ri; } ;
struct mvpp2_cls_flow {TYPE_1__ prs_ri; int flow_id; } ;
struct mvpp2 {int dummy; } ;


 int FUNC_0 (struct mvpp2*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mvpp2 *VAR_0,
        const struct mvpp2_cls_flow *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->flow_id, VAR_1->prs_ri.ri,
      VAR_1->prs_ri.ri_mask);
}
