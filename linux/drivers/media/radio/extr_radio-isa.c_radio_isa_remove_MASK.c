
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radio_isa_card {TYPE_1__* drv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int region_size; } ;


 struct radio_isa_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct radio_isa_card*,int ) ;

int FUNC_2(struct device *VAR_0, unsigned int VAR_1)
{
 struct radio_isa_card *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_2->drv->region_size);
}
