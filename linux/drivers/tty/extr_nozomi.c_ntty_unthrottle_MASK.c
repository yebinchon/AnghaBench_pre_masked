
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; } ;
struct nozomi {int spin_mutex; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct nozomi*) ;
 struct nozomi* FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1)
{
 struct nozomi *VAR_2 = FUNC_2(VAR_1);
 unsigned long VAR_3;

 FUNC_0("UNTHROTTLE");
 FUNC_4(&VAR_2->spin_mutex, VAR_3);
 FUNC_1(VAR_1->index % VAR_0, VAR_2);
 FUNC_3(VAR_1, 1);

 FUNC_5(&VAR_2->spin_mutex, VAR_3);
}
