
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct nozomi {int spin_mutex; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct nozomi* FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*,int) ;
 int FUNC_2 (struct tty_struct*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 struct nozomi *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6;

 FUNC_3(&VAR_5->spin_mutex, VAR_6);
 if (VAR_3 & VAR_1)
  FUNC_2(VAR_2, 1);
 else if (VAR_4 & VAR_1)
  FUNC_2(VAR_2, 0);

 if (VAR_3 & VAR_0)
  FUNC_1(VAR_2, 1);
 else if (VAR_4 & VAR_0)
  FUNC_1(VAR_2, 0);
 FUNC_4(&VAR_5->spin_mutex, VAR_6);

 return 0;
}
