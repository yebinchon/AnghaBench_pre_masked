
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {size_t erasesize; } ;
struct spi_nor {int erase_opcode; struct intel_spi* priv; TYPE_1__ mtd; } ;
struct intel_spi {scalar_t__ base; scalar_t__ atomic_preopcode; scalar_t__ swseq_erase; scalar_t__ erase_64k; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (struct intel_spi*,int ,int ,int ) ;
 int FUNC_1 (struct intel_spi*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_15, loff_t VAR_16)
{
 size_t VAR_17, VAR_18 = VAR_15->mtd.erasesize;
 struct intel_spi *VAR_19 = VAR_15->priv;
 u32 VAR_20, VAR_21, VAR_22;
 int VAR_23;


 if (VAR_18 >= VAR_14 && VAR_19->erase_64k) {
  VAR_22 = VAR_7;
  VAR_17 = VAR_14;
 } else {
  VAR_22 = VAR_6;
  VAR_17 = VAR_13;
 }

 if (VAR_19->swseq_erase) {
  while (VAR_18 > 0) {
   FUNC_3(VAR_16, VAR_19->base + VAR_2);

   VAR_23 = FUNC_0(VAR_19, VAR_15->erase_opcode,
       0, VAR_12);
   if (VAR_23)
    return VAR_23;

   VAR_16 += VAR_17;
   VAR_18 -= VAR_17;
  }

  return 0;
 }


 VAR_19->atomic_preopcode = 0;

 while (VAR_18 > 0) {
  FUNC_3(VAR_16, VAR_19->base + VAR_2);

  VAR_20 = FUNC_2(VAR_19->base + VAR_3);
  VAR_20 &= ~(VAR_9 | VAR_8);
  VAR_20 |= VAR_4 | VAR_5 | VAR_10;
  VAR_20 |= VAR_22;
  VAR_20 |= VAR_11;
  FUNC_3(VAR_20, VAR_19->base + VAR_3);

  VAR_23 = FUNC_1(VAR_19);
  if (VAR_23)
   return VAR_23;

  VAR_21 = FUNC_2(VAR_19->base + VAR_3);
  if (VAR_21 & VAR_5)
   return -VAR_1;
  else if (VAR_21 & VAR_4)
   return -VAR_0;

  VAR_16 += VAR_17;
  VAR_18 -= VAR_17;
 }

 return 0;
}
