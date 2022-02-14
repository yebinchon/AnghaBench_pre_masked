
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timerfd_ctx {scalar_t__ moffs; int might_cancel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct timerfd_ctx *VAR_1)
{
 if (!VAR_1->might_cancel || VAR_1->moffs != VAR_0)
  return 0;
 VAR_1->moffs = FUNC_0(0);
 return 1;
}
