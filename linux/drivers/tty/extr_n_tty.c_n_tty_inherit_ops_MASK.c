
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ldisc_ops {scalar_t__ flags; scalar_t__ refcount; int * owner; } ;


 struct tty_ldisc_ops VAR_0 ;

void FUNC_0(struct tty_ldisc_ops *VAR_1)
{
 *VAR_1 = VAR_0;
 VAR_1->owner = ((void*)0);
 VAR_1->refcount = VAR_1->flags = 0;
}
