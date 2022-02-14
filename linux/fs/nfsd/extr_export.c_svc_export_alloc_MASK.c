
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int dummy; } ;
struct svc_export {struct cache_head h; } ;


 int VAR_0 ;
 struct svc_export* FUNC_0 (int,int ) ;

__attribute__((used)) static struct cache_head *FUNC_1(void)
{
 struct svc_export *VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (VAR_1)
  return &VAR_1->h;
 else
  return ((void*)0);
}
