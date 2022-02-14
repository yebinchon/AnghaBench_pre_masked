
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_truncate_log {TYPE_1__* tl_recs; int tl_used; } ;
struct TYPE_2__ {int t_clusters; int t_start; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_truncate_log *VAR_0,
        unsigned int VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;


 if (!FUNC_0(VAR_0->tl_used))
  return 0;

 VAR_2 = FUNC_0(VAR_0->tl_used) - 1;
 VAR_3 = FUNC_1(VAR_0->tl_recs[VAR_2].t_start);
 VAR_3 += FUNC_1(VAR_0->tl_recs[VAR_2].t_clusters);

 return VAR_3 == VAR_1;
}
