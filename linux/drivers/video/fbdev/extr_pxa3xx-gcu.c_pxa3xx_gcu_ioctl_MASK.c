
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_gcu_priv {int spinlock; } ;
struct file {int dummy; } ;


 long VAR_0 ;


 int FUNC_0 (struct pxa3xx_gcu_priv*) ;
 long FUNC_1 (struct pxa3xx_gcu_priv*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct pxa3xx_gcu_priv* FUNC_4 (struct file*) ;

__attribute__((used)) static long
FUNC_5(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 struct pxa3xx_gcu_priv *VAR_5 = FUNC_4(VAR_1);

 switch (VAR_2) {
 case 129:
  FUNC_2(&VAR_5->spinlock, VAR_4);
  FUNC_0(VAR_5);
  FUNC_3(&VAR_5->spinlock, VAR_4);
  return 0;

 case 128:
  return FUNC_1(VAR_5);
 }

 return -VAR_0;
}
