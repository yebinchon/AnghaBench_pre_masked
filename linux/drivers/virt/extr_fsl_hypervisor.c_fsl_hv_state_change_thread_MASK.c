
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct doorbell_isr {int partition; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct doorbell_isr *VAR_4 = VAR_3;

 FUNC_0(&VAR_1, VAR_4->partition,
         ((void*)0));

 return VAR_0;
}
