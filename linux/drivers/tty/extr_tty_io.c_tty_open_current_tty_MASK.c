
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct file {int f_flags; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 struct tty_struct* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct tty_struct* FUNC_2 () ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static struct tty_struct *FUNC_7(dev_t VAR_3, struct file *VAR_4)
{
 struct tty_struct *VAR_5;
 int VAR_6;

 if (VAR_3 != FUNC_1(VAR_2, 0))
  return ((void*)0);

 VAR_5 = FUNC_2();
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_4->f_flags |= VAR_1;

 FUNC_4(VAR_5);
 FUNC_3(VAR_5);

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 < 0) {
  FUNC_6(VAR_5);
  VAR_5 = FUNC_0(VAR_6);
 }
 return VAR_5;
}
