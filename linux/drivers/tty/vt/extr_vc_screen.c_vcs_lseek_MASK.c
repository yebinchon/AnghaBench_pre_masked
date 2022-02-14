
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,int,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static loff_t FUNC_5(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0();
 VAR_3 = FUNC_4(FUNC_2(VAR_0));
 FUNC_1();
 if (VAR_3 < 0)
  return VAR_3;
 return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
}
