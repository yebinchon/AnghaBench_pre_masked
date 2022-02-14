
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_10__ {int nbytes; int buswidth; } ;
struct TYPE_9__ {int nbytes; int buswidth; } ;
struct TYPE_8__ {int buswidth; } ;
struct TYPE_7__ {int opcode; int buswidth; } ;
struct spi_mem_op {TYPE_5__ addr; TYPE_4__ dummy; TYPE_3__ data; TYPE_2__ cmd; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct npcm_fiu_spi {int regmap; } ;
struct TYPE_6__ {int chip_select; int master; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int ,scalar_t__,int*) ;
 int FUNC_5 (int ,int ,int,int,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int) ;
 struct npcm_fiu_spi* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct spi_mem *VAR_16,
        const struct spi_mem_op *VAR_17, u32 VAR_18,
         bool VAR_19, u8 *VAR_20, u32 VAR_21)
{
 struct npcm_fiu_spi *VAR_22 =
  FUNC_9(VAR_16->spi->master);
 u32 VAR_23 = FUNC_0(10);
 u32 VAR_24[4];
 int VAR_25;
 u32 VAR_26;
 u32 VAR_27;

 FUNC_6(VAR_22->regmap, VAR_10,
      VAR_11,
      (VAR_16->spi->chip_select <<
       VAR_12));
 FUNC_6(VAR_22->regmap, VAR_8,
      VAR_9, VAR_17->cmd.opcode);

 if (VAR_19) {
  VAR_23 |= FUNC_2(VAR_17->cmd.buswidth);
  VAR_23 |= FUNC_2(VAR_17->addr.buswidth)
   << VAR_2;
  VAR_23 |= FUNC_2(VAR_17->dummy.buswidth)
   << VAR_4;
  VAR_23 |= FUNC_2(VAR_17->data.buswidth)
   << VAR_7;
  VAR_23 |= VAR_17->dummy.nbytes << VAR_5;
  VAR_23 |= VAR_17->addr.nbytes << VAR_3;
  FUNC_7(VAR_22->regmap, VAR_0, VAR_18);
 } else {
  FUNC_7(VAR_22->regmap, VAR_0, 0x0);
 }

 VAR_23 |= VAR_21 << VAR_6;
 FUNC_7(VAR_22->regmap, VAR_1, VAR_23);
 FUNC_8(VAR_22->regmap, VAR_10,
     VAR_13,
     VAR_13);
 VAR_25 = FUNC_5(VAR_22->regmap, VAR_10, VAR_26,
           (!(VAR_26 & VAR_13)), 0,
           VAR_15);
 if (VAR_25)
  return VAR_25;

 if (VAR_21) {
  for (VAR_27 = 0; VAR_27 < FUNC_1(VAR_21, 4); VAR_27++)
   FUNC_4(VAR_22->regmap, VAR_14 + (VAR_27 * 4),
        &VAR_24[VAR_27]);
  FUNC_3(VAR_20, VAR_24, VAR_21);
 }

 return 0;
}
