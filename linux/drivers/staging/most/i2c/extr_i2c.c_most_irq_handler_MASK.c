
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_disabled; int dwork; } ;
struct hdm_i2c {TYPE_1__ rx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct hdm_i2c *VAR_3 = VAR_2;

 FUNC_0(VAR_1);
 VAR_3->rx.int_disabled = 1;
 FUNC_1(&VAR_3->rx.dwork, 0);

 return VAR_0;
}
