
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_root {int dummy; } ;
struct TYPE_2__ {struct rb_root ci_tree; } ;
struct ocfs2_caching_info {int ci_flags; unsigned int ci_num_cached; TYPE_1__ ci_cache; int ci_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rb_root VAR_2 ;
 int FUNC_1 (int ,char*,unsigned long long,unsigned int,unsigned int) ;
 int FUNC_2 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_3 (struct ocfs2_caching_info*) ;
 int FUNC_4 (struct ocfs2_caching_info*,int ) ;
 int FUNC_5 (struct ocfs2_caching_info*) ;
 unsigned int FUNC_6 (struct rb_root*) ;
 int FUNC_7 (unsigned long long,unsigned int,unsigned int) ;

void FUNC_8(struct ocfs2_caching_info *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 struct rb_root VAR_7 = VAR_2;

 FUNC_0(!VAR_3 || !VAR_3->ci_ops);

 FUNC_2(VAR_3);
 VAR_4 = !(VAR_3->ci_flags & VAR_1);
 VAR_5 = VAR_3->ci_num_cached;

 FUNC_7(
  (unsigned long long)FUNC_3(VAR_3),
  VAR_5, VAR_4);




 if (VAR_4)
  VAR_7 = VAR_3->ci_cache.ci_tree;

 FUNC_4(VAR_3, 0);
 FUNC_5(VAR_3);

 VAR_6 = FUNC_6(&VAR_7);



 if (VAR_4 && VAR_6 != VAR_5)
  FUNC_1(VAR_0, "Owner %llu, count = %u, purged = %u\n",
       (unsigned long long)FUNC_3(VAR_3),
       VAR_5, VAR_6);
}
