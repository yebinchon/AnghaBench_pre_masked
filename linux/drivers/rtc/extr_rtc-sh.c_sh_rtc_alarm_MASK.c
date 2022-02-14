
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int lock; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sh_rtc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_0, void *VAR_1)
{
 struct sh_rtc *VAR_2 = VAR_1;
 int VAR_3;

 FUNC_2(&VAR_2->lock);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(&VAR_2->lock);

 return FUNC_0(VAR_3);
}
