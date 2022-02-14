
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm1105_dev {size_t boardnr; } ;
struct TYPE_2__ {int gpio_scl; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct dm1105_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 struct dm1105_dev *VAR_3 = VAR_1;

 FUNC_0(VAR_3, VAR_0[VAR_3->boardnr].gpio_scl, VAR_2);
}
