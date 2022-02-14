
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mtk_ecc_config {int strength; scalar_t__ op; int len; size_t mode; int sectors; int addr; } ;
struct mtk_ecc {int sectors; scalar_t__ regs; TYPE_1__* caps; int dev; } ;
struct TYPE_2__ {size_t num_ecc_strength; int* ecc_strength; size_t ecc_mode_shift; int parity_bits; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mtk_ecc *VAR_9, struct mtk_ecc_config *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_9->caps->num_ecc_strength; VAR_15++) {
  if (VAR_9->caps->ecc_strength[VAR_15] == VAR_10->strength)
   break;
 }

 if (VAR_15 == VAR_9->caps->num_ecc_strength) {
  FUNC_0(VAR_9->dev, "invalid ecc strength %d\n",
   VAR_10->strength);
  return -VAR_8;
 }

 VAR_11 = VAR_15;

 if (VAR_10->op == VAR_5) {

  VAR_13 = VAR_10->len << 3;

  VAR_14 = VAR_11 | (VAR_10->mode << VAR_9->caps->ecc_mode_shift);
  VAR_14 |= (VAR_13 << VAR_6);
  FUNC_2(VAR_14, VAR_9->regs + VAR_3);

  if (VAR_10->mode != VAR_7)
   FUNC_2(FUNC_1(VAR_10->addr),
          VAR_9->regs + VAR_4);

 } else {

  VAR_12 = (VAR_10->len << 3) +
    VAR_10->strength * VAR_9->caps->parity_bits;

  VAR_14 = VAR_11 | (VAR_10->mode << VAR_9->caps->ecc_mode_shift);
  VAR_14 |= (VAR_12 << VAR_6) | VAR_0;
  VAR_14 |= VAR_1;
  FUNC_2(VAR_14, VAR_9->regs + VAR_2);

  if (VAR_10->sectors)
   VAR_9->sectors = 1 << (VAR_10->sectors - 1);
 }

 return 0;
}
