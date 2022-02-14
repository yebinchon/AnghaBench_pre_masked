
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (struct tty_struct*,int ) ;
 char* FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2, struct tty_ldisc *VAR_3)
{

 if (FUNC_2(VAR_2, VAR_3->ops->num) < 0) {
  const char *VAR_4 = FUNC_3(VAR_2);

  FUNC_1("Falling back ldisc for %s.\n", VAR_4);



  if (FUNC_2(VAR_2, VAR_1) < 0 &&
      FUNC_2(VAR_2, VAR_0) < 0)
   FUNC_0("Couldn't open N_NULL ldisc for %s.", VAR_4);
 }
}
