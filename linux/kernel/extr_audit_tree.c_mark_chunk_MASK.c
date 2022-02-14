
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_mark {int dummy; } ;
struct audit_chunk {int dummy; } ;
struct TYPE_2__ {struct audit_chunk* chunk; } ;


 TYPE_1__* FUNC_0 (struct fsnotify_mark*) ;

__attribute__((used)) static struct audit_chunk *FUNC_1(struct fsnotify_mark *VAR_0)
{
 return FUNC_0(VAR_0)->chunk;
}
