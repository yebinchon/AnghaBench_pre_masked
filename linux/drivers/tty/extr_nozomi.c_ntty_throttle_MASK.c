
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct nozomi {int spin_mutex; } ;


 int FUNC_0 (char*) ;
 struct nozomi* FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct nozomi *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_0("THROTTLE");
 FUNC_3(&VAR_1->spin_mutex, VAR_2);
 FUNC_2(VAR_0, 0);
 FUNC_4(&VAR_1->spin_mutex, VAR_2);
}
