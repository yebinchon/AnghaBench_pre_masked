
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ssb_mipscore {TYPE_1__* dev; } ;
struct TYPE_6__ {int capabilities; } ;
struct ssb_bus {int chip_id; TYPE_2__ chipco; int extif; } ;
struct TYPE_5__ {struct ssb_bus* bus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

u32 FUNC_6(struct ssb_mipscore *VAR_3)
{
 struct ssb_bus *VAR_4 = VAR_3->dev->bus;
 u32 VAR_5, VAR_6, VAR_7, VAR_8 = 0;

 if (VAR_4->chipco.capabilities & VAR_0)
  return FUNC_5(&VAR_4->chipco);

 if (FUNC_3(&VAR_4->extif)) {
  FUNC_4(&VAR_4->extif, &VAR_5, &VAR_6, &VAR_7);
 } else if (FUNC_1(&VAR_4->chipco)) {
  FUNC_2(&VAR_4->chipco, &VAR_5, &VAR_6, &VAR_7);
 } else
  return 0;

 if ((VAR_5 == VAR_1) || (VAR_4->chip_id == 0x5365)) {
  VAR_8 = 200000000;
 } else {
  VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);
 }

 if (VAR_5 == VAR_2) {
  VAR_8 *= 2;
 }

 return VAR_8;
}
