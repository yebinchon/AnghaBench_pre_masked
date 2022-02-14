
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sixpack* disc_data; } ;
struct sixpack {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct sixpack *FUNC_3(struct tty_struct *VAR_1)
{
 struct sixpack *VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = VAR_1->disc_data;
 if (VAR_2)
  FUNC_2(&VAR_2->refcnt);
 FUNC_1(&VAR_0);

 return VAR_2;
}
