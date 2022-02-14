
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark_connector {int type; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (struct fsnotify_mark_connector*) ;
 int FUNC_2 (int ) ;

__u32 FUNC_3(struct fsnotify_mark_connector *VAR_0)
{
 if (FUNC_0(!FUNC_2(VAR_0->type)))
  return 0;

 return *FUNC_1(VAR_0);
}
