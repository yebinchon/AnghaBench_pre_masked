
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct doorbell_isr {int partition; int doorbell; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 unsigned int VAR_5;
 struct doorbell_isr *VAR_6 = VAR_4;
 int VAR_7;


 FUNC_1(VAR_6->doorbell);


 VAR_7 = FUNC_0(VAR_6->partition, &VAR_5);
 if (!VAR_7 && (VAR_5 == VAR_0))
  return VAR_2;

 return VAR_1;
}
