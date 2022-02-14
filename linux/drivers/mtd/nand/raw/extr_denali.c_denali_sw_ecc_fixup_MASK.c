
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {unsigned int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_ecc_stats {unsigned int corrected; } ;
struct denali_controller {unsigned int devs_per_cs; scalar_t__ reg; } ;
struct TYPE_4__ {struct mtd_ecc_stats ecc_stats; } ;


 unsigned long FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ,int) ;
 int VAR_9 ;
 int FUNC_2 (struct denali_controller*) ;
 int FUNC_3 (struct denali_controller*,int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 TYPE_2__* FUNC_7 (struct nand_chip*) ;
 struct denali_controller* FUNC_8 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_10,
          unsigned long *VAR_11, u8 *VAR_12)
{
 struct denali_controller *VAR_13 = FUNC_8(VAR_10);
 struct mtd_ecc_stats *VAR_14 = &FUNC_7(VAR_10)->ecc_stats;
 unsigned int VAR_15 = VAR_10->ecc.size;
 unsigned int VAR_16 = 0;
 unsigned int VAR_17 = 0;
 u32 VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;
 u8 VAR_23;
 unsigned int VAR_24 = 0;
 u32 VAR_25;

 FUNC_2(VAR_13);

 do {
  VAR_18 = FUNC_5(VAR_13->reg + VAR_0);
  VAR_21 = FUNC_1(VAR_2, VAR_18);
  VAR_20 = FUNC_1(VAR_1, VAR_18);

  VAR_19 = FUNC_5(VAR_13->reg + VAR_4);
  VAR_23 = FUNC_1(VAR_5,
       VAR_19);
  VAR_22 = FUNC_1(VAR_6,
           VAR_19);


  if (VAR_21 != VAR_24)
   VAR_16 = 0;

  if (VAR_19 & VAR_8) {




   *VAR_11 |= FUNC_0(VAR_21);
  } else if (VAR_20 < VAR_15) {







   int VAR_26;
   unsigned int VAR_27;

   VAR_26 = (VAR_21 * VAR_15 + VAR_20) *
     VAR_13->devs_per_cs + VAR_22;


   VAR_27 = FUNC_4(VAR_12[VAR_26] ^ VAR_23);
   VAR_12[VAR_26] ^= VAR_23;
   VAR_14->corrected += VAR_27;
   VAR_16 += VAR_27;

   VAR_17 = FUNC_6(VAR_17, VAR_16);
  }

  VAR_24 = VAR_21;
 } while (!(VAR_19 & VAR_7));





 VAR_25 = FUNC_3(VAR_13, VAR_9);
 if (!(VAR_25 & VAR_9))
  return -VAR_3;

 return VAR_17;
}
