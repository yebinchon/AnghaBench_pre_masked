
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8727_chg {int debounce_jiffies; int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct lp8727_chg *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->work, VAR_3->debounce_jiffies);
 return VAR_0;
}
