
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ magic; int legacy_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;

int FUNC_4(struct tty_struct *VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_2->magic != VAR_1, "L Bad %p\n", VAR_2))
  return -VAR_0;
 FUNC_2(VAR_2);
 VAR_3 = FUNC_1(&VAR_2->legacy_mutex);
 if (VAR_3)
  FUNC_3(VAR_2);
 return VAR_3;
}
