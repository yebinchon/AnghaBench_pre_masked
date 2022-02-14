
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct sdebug_defer {TYPE_1__ ew; int hrt; } ;
typedef enum sdeb_defer_type { ____Placeholder_sdeb_defer_type } sdeb_defer_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sdebug_defer *VAR_2,
      enum sdeb_defer_type VAR_3)
{
 if (!VAR_2)
  return;
 if (VAR_3 == VAR_0)
  FUNC_1(&VAR_2->hrt);
 else if (VAR_3 == VAR_1)
  FUNC_0(&VAR_2->ew.work);
}
