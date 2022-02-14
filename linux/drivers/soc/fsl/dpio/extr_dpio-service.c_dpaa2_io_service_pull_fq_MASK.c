
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qbman_pull_desc {int dummy; } ;
struct dpaa2_io_store {int * swp; scalar_t__ max; int paddr; int vaddr; } ;
struct dpaa2_io {int * swp; } ;


 int VAR_0 ;
 int FUNC_0 (struct qbman_pull_desc*) ;
 int FUNC_1 (struct qbman_pull_desc*,int ) ;
 int FUNC_2 (struct qbman_pull_desc*,int ) ;
 int FUNC_3 (struct qbman_pull_desc*,int ,int ,int) ;
 int FUNC_4 (int *,struct qbman_pull_desc*) ;
 struct dpaa2_io* FUNC_5 (struct dpaa2_io*) ;

int FUNC_6(struct dpaa2_io *VAR_1, u32 VAR_2,
        struct dpaa2_io_store *VAR_3)
{
 struct qbman_pull_desc VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4);
 FUNC_3(&VAR_4, VAR_3->vaddr, VAR_3->paddr, 1);
 FUNC_2(&VAR_4, (u8)VAR_3->max);
 FUNC_1(&VAR_4, VAR_2);

 VAR_1 = FUNC_5(VAR_1);
 if (!VAR_1)
  return -VAR_0;
 VAR_3->swp = VAR_1->swp;
 VAR_5 = FUNC_4(VAR_1->swp, &VAR_4);
 if (VAR_5)
  VAR_3->swp = ((void*)0);

 return VAR_5;
}
