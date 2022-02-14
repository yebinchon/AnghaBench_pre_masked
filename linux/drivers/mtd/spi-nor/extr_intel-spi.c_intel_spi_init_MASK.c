
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_spi {int swseq_reg; int writeable; int erase_64k; int swseq_erase; int locked; int* opcodes; scalar_t__ sregs; scalar_t__ base; TYPE_1__* info; int pr_num; int nregions; scalar_t__ pregs; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;



 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_1 (struct intel_spi*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_26 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct intel_spi *VAR_27)
{
 u32 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 int VAR_33;

 switch (VAR_27->info->type) {
 case 129:
  VAR_27->sregs = VAR_27->base + VAR_9;
  VAR_27->pregs = VAR_27->base + VAR_7;
  VAR_27->nregions = VAR_6;
  VAR_27->pr_num = VAR_8;
  VAR_27->swseq_reg = 1;

  if (VAR_26) {

   VAR_32 = FUNC_2(VAR_27->base + VAR_4);
   if (!(VAR_32 & VAR_5)) {
    VAR_32 |= VAR_5;
    FUNC_3(VAR_32, VAR_27->base + VAR_4);
    VAR_32 = FUNC_2(VAR_27->base + VAR_4);
   }

   VAR_27->writeable = !!(VAR_32 & VAR_5);
  }

  break;

 case 128:
  VAR_27->sregs = VAR_27->base + VAR_19;
  VAR_27->pregs = VAR_27->base + VAR_17;
  VAR_27->nregions = VAR_16;
  VAR_27->pr_num = VAR_18;
  VAR_27->swseq_reg = 1;
  break;

 case 130:
  VAR_27->sregs = VAR_27->base + VAR_3;
  VAR_27->pregs = VAR_27->base + VAR_1;
  VAR_27->nregions = VAR_0;
  VAR_27->pr_num = VAR_2;
  VAR_27->erase_64k = 1;
  break;

 default:
  return -VAR_10;
 }


 VAR_32 = FUNC_2(VAR_27->base + VAR_13);
 VAR_32 &= ~VAR_15;
 FUNC_3(VAR_32, VAR_27->base + VAR_13);
 VAR_30 = FUNC_2(VAR_27->base + VAR_20);
 VAR_31 = FUNC_2(VAR_27->base + VAR_25);
 if (!(VAR_30 & VAR_12) || !(VAR_31 & VAR_12))
  VAR_27->swseq_erase = 1;

 if (VAR_27->info->type == 130 && !VAR_27->swseq_erase)
  if (!(VAR_30 & VAR_11) ||
      !(VAR_31 & VAR_11))
   VAR_27->erase_64k = 0;






 if (VAR_27->swseq_reg) {

  VAR_32 = FUNC_2(VAR_27->sregs + VAR_23);
  VAR_32 &= ~VAR_24;
  FUNC_3(VAR_32, VAR_27->sregs + VAR_23);
 }


 VAR_32 = FUNC_2(VAR_27->base + VAR_13);
 VAR_27->locked = !!(VAR_32 & VAR_14);

 if (VAR_27->locked) {





  VAR_28 = FUNC_2(VAR_27->sregs + VAR_21);
  VAR_29 = FUNC_2(VAR_27->sregs + VAR_22);

  if (VAR_28 && VAR_29) {
   for (VAR_33 = 0; VAR_33 < FUNC_0(VAR_27->opcodes) / 2; VAR_33++) {
    VAR_27->opcodes[VAR_33] = VAR_28 >> VAR_33 * 8;
    VAR_27->opcodes[VAR_33 + 4] = VAR_29 >> VAR_33 * 8;
   }
  }
 }

 FUNC_1(VAR_27);

 return 0;
}
