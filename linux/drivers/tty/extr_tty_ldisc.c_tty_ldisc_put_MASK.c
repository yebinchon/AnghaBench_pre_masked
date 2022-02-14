
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ldisc {int ops; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tty_ldisc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tty_ldisc *VAR_0)
{
 if (FUNC_0(!VAR_0))
  return;

 FUNC_2(VAR_0->ops);
 FUNC_1(VAR_0);
}
