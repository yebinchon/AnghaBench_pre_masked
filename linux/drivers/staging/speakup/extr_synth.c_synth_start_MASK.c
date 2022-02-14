
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_5__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;
struct TYPE_6__ {int alive; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct var_t* FUNC_2 (int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 struct var_t *VAR_4;

 if (!VAR_2->alive) {
  FUNC_3();
  return;
 }
 VAR_4 = FUNC_2(VAR_0);
 if (!FUNC_4(&VAR_3))
  FUNC_0(&VAR_3, VAR_1 +
   FUNC_1(VAR_4->u.n.value));
}
