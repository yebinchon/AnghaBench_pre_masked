
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_mem_dqinfo {int * dqi_gqi_bh; int dqi_gqi_count; int dqi_gqinode; } ;
struct TYPE_2__ {int ip_alloc_sem; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ocfs2_mem_dqinfo *VAR_1, int VAR_2)
{
 if (VAR_2) {
  FUNC_7(&FUNC_0(VAR_1->dqi_gqinode)->ip_alloc_sem);
  FUNC_2(VAR_1->dqi_gqinode);
 } else {
  FUNC_6(&FUNC_0(VAR_1->dqi_gqinode)->ip_alloc_sem);
 }
 FUNC_3(VAR_1->dqi_gqinode, VAR_2);
 FUNC_1(VAR_1->dqi_gqi_bh);
 FUNC_4(&VAR_0);
 if (!--VAR_1->dqi_gqi_count)
  VAR_1->dqi_gqi_bh = ((void*)0);
 FUNC_5(&VAR_0);
}
