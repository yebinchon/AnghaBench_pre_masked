
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct asic3 {scalar_t__ bus_shift; int tmio_cnf; } ;


 struct asic3* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0, int VAR_1)
{
 struct asic3 *VAR_2 = FUNC_0(VAR_0->dev.parent);

 FUNC_1(VAR_2->tmio_cnf, 1 - VAR_2->bus_shift, VAR_1);
}
