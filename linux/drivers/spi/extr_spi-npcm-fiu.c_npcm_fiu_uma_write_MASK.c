
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int nbytes; int val; int buswidth; } ;
struct TYPE_7__ {int buswidth; } ;
struct TYPE_6__ {int buswidth; } ;
struct spi_mem_op {TYPE_4__ addr; TYPE_3__ data; TYPE_2__ cmd; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct npcm_fiu_spi {int regmap; } ;
struct TYPE_5__ {int chip_select; int master; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int ,int ,int,int,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,int ,int,int) ;
 struct npcm_fiu_spi* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct spi_mem *VAR_14,
         const struct spi_mem_op *VAR_15, u8 VAR_16,
         bool VAR_17, u8 *VAR_18, u32 VAR_19)
{
 struct npcm_fiu_spi *VAR_20 =
  FUNC_8(VAR_14->spi->master);
 u32 VAR_21 = FUNC_0(10);
 u32 VAR_22[4] = {0};
 u32 VAR_23;
 u32 VAR_24;

 FUNC_5(VAR_20->regmap, VAR_8,
      VAR_9,
      (VAR_14->spi->chip_select <<
       VAR_10));

 FUNC_5(VAR_20->regmap, VAR_6,
      VAR_7, VAR_16);

 if (VAR_19) {
  FUNC_3(VAR_22, VAR_18, VAR_19);
  for (VAR_24 = 0; VAR_24 < FUNC_1(VAR_19, 4); VAR_24++)
   FUNC_6(VAR_20->regmap, VAR_12 + (VAR_24 * 4),
         VAR_22[VAR_24]);
 }

 if (VAR_17) {
  VAR_21 |= FUNC_2(VAR_15->cmd.buswidth);
  VAR_21 |= FUNC_2(VAR_15->addr.buswidth) <<
   VAR_2;
  VAR_21 |= FUNC_2(VAR_15->data.buswidth) <<
   VAR_5;
  VAR_21 |= VAR_15->addr.nbytes << VAR_3;
  FUNC_6(VAR_20->regmap, VAR_0, VAR_15->addr.val);
 } else {
  FUNC_6(VAR_20->regmap, VAR_0, 0x0);
 }

 VAR_21 |= (VAR_19 << VAR_4);
 FUNC_6(VAR_20->regmap, VAR_1, VAR_21);

 FUNC_7(VAR_20->regmap, VAR_8,
     VAR_11,
     VAR_11);

 return FUNC_4(VAR_20->regmap, VAR_8, VAR_23,
           (!(VAR_23 & VAR_11)), 0,
     VAR_13);
}
