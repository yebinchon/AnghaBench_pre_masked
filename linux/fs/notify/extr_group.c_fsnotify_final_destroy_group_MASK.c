
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_group {int memcg; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free_group_priv ) (struct fsnotify_group*) ;} ;


 int FUNC_0 (struct fsnotify_group*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fsnotify_group*) ;

__attribute__((used)) static void FUNC_3(struct fsnotify_group *VAR_0)
{
 if (VAR_0->ops->free_group_priv)
  VAR_0->ops->free_group_priv(VAR_0);

 FUNC_1(VAR_0->memcg);

 FUNC_0(VAR_0);
}
