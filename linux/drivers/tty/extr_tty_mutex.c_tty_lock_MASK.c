
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ magic; int legacy_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;

void FUNC_3(struct tty_struct *VAR_1)
{
 if (FUNC_0(VAR_1->magic != VAR_0, "L Bad %p\n", VAR_1))
  return;
 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->legacy_mutex);
}
