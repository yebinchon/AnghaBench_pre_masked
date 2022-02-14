
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct file*,int) ;
 struct tty_struct* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_5(int VAR_1, struct file *VAR_2, int VAR_3)
{
 struct tty_struct *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = -VAR_0;

 FUNC_3(VAR_4);
 if (!FUNC_2(VAR_2))
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_4);

 return VAR_5;
}
