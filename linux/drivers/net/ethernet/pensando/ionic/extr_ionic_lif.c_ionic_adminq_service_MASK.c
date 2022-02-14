
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_cq_info {struct ionic_admin_comp* cq_desc; } ;
struct ionic_cq {int bound_q; int done_color; } ;
struct ionic_admin_comp {int comp_index; int color; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct ionic_cq_info*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct ionic_cq *VAR_0,
     struct ionic_cq_info *VAR_1)
{
 struct ionic_admin_comp *VAR_2 = VAR_1->cq_desc;

 if (!FUNC_0(VAR_2->color, VAR_0->done_color))
  return 0;

 FUNC_1(VAR_0->bound_q, VAR_1, FUNC_2(VAR_2->comp_index));

 return 1;
}
