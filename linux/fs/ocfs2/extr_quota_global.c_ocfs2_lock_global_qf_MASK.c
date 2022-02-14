
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_mem_dqinfo {int dqi_gqinode; struct buffer_head* dqi_gqi_bh; int dqi_gqi_count; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_alloc_sem; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct buffer_head**,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ocfs2_mem_dqinfo *VAR_1, int VAR_2)
{
 int VAR_3;
 struct buffer_head *VAR_4 = ((void*)0);

 VAR_3 = FUNC_5(VAR_1->dqi_gqinode, &VAR_4, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_6(&VAR_0);
 if (!VAR_1->dqi_gqi_count++)
  VAR_1->dqi_gqi_bh = VAR_4;
 else
  FUNC_1(VAR_4 != VAR_1->dqi_gqi_bh);
 FUNC_7(&VAR_0);
 if (VAR_2) {
  FUNC_4(VAR_1->dqi_gqinode);
  FUNC_3(&FUNC_0(VAR_1->dqi_gqinode)->ip_alloc_sem);
 } else {
  FUNC_2(&FUNC_0(VAR_1->dqi_gqinode)->ip_alloc_sem);
 }
 return 0;
}
