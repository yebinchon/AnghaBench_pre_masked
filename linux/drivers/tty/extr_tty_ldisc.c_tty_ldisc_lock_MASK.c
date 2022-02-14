
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; int write_wait; int read_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty_struct*,unsigned long) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct tty_struct *VAR_3, unsigned long VAR_4)
{
 int VAR_5;


 FUNC_1(VAR_1, &VAR_3->flags);
 FUNC_2(&VAR_3->read_wait);
 FUNC_2(&VAR_3->write_wait);

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;
 FUNC_1(VAR_2, &VAR_3->flags);
 return 0;
}
