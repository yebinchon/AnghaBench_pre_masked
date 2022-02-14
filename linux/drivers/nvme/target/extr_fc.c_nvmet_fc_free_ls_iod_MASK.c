
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgtport {int lock; int ls_list; } ;
struct nvmet_fc_ls_iod {int ls_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_tgtport *VAR_0,
   struct nvmet_fc_ls_iod *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(&VAR_1->ls_list, &VAR_0->ls_list);
 FUNC_2(&VAR_0->lock, VAR_2);
}
