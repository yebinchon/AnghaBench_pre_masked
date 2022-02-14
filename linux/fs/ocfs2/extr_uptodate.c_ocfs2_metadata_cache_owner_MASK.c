
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_caching_info {TYPE_1__* ci_ops; } ;
struct TYPE_2__ {int (* co_owner ) (struct ocfs2_caching_info*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_caching_info*) ;

u64 FUNC_2(struct ocfs2_caching_info *VAR_0)
{
 FUNC_0(!VAR_0 || !VAR_0->ci_ops);

 return VAR_0->ci_ops->co_owner(VAR_0);
}
