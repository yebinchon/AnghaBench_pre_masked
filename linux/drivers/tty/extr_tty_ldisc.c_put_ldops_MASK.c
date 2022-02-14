
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ldisc_ops {int owner; int refcount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct tty_ldisc_ops *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0, VAR_2);
 VAR_1->refcount--;
 FUNC_0(VAR_1->owner);
 FUNC_2(&VAR_0, VAR_2);
}
