
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_gpio {int cec_gpio; int adap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct cec_gpio *VAR_3 = VAR_2;

 FUNC_0(VAR_3->adap, FUNC_1(VAR_3->cec_gpio));
 return VAR_0;
}
