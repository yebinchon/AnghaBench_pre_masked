
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int eaddr; int saddr; int sarea; int cfg; } ;
struct atmel_pmecc_user {TYPE_1__ cache; struct atmel_pmecc* pmecc; } ;
struct TYPE_4__ {scalar_t__ base; } ;
struct atmel_pmecc {TYPE_2__ regs; int lock; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct atmel_pmecc_user *VAR_12, int VAR_13)
{
 struct atmel_pmecc *VAR_14 = VAR_12->pmecc;
 u32 VAR_15;

 if (VAR_13 != VAR_6 && VAR_13 != VAR_7) {
  FUNC_0(VAR_14->dev, "Bad ECC operation!");
  return -VAR_5;
 }

 FUNC_1(&VAR_12->pmecc->lock);

 VAR_15 = VAR_12->cache.cfg;
 if (VAR_13 == VAR_7)
  VAR_15 |= VAR_9;
 else
  VAR_15 |= VAR_8;

 FUNC_2(VAR_15, VAR_14->regs.base + VAR_0);
 FUNC_2(VAR_12->cache.sarea, VAR_14->regs.base + VAR_4);
 FUNC_2(VAR_12->cache.saddr, VAR_14->regs.base + VAR_3);
 FUNC_2(VAR_12->cache.eaddr, VAR_14->regs.base + VAR_2);

 FUNC_2(VAR_11, VAR_14->regs.base + VAR_1);
 FUNC_2(VAR_10, VAR_14->regs.base + VAR_1);

 return 0;
}
