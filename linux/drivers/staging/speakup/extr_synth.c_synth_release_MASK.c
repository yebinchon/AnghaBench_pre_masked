
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct var_t {scalar_t__ var_id; } ;
struct TYPE_6__ {int spinlock; } ;
struct TYPE_4__ {scalar_t__ name; } ;
struct TYPE_5__ {int (* release ) () ;struct var_t* vars; TYPE_1__ attributes; scalar_t__ alive; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int VAR_4 ;

void FUNC_7(void)
{
 struct var_t *VAR_5;
 unsigned long VAR_6;

 if (!VAR_3)
  return;
 FUNC_3(&VAR_1.spinlock, VAR_6);
 FUNC_1("releasing synth %s\n", VAR_3->name);
 VAR_3->alive = 0;
 FUNC_0(&VAR_4);
 FUNC_4(&VAR_1.spinlock, VAR_6);
 if (VAR_3->attributes.name)
  FUNC_6(VAR_2, &VAR_3->attributes);
 for (VAR_5 = VAR_3->vars; VAR_5->var_id != VAR_0; VAR_5++)
  FUNC_2(VAR_5->var_id);
 VAR_3->release();
 VAR_3 = ((void*)0);
}
