
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
struct TYPE_8__ {int opcode; } ;
struct TYPE_5__ {scalar_t__ out; } ;
struct TYPE_6__ {int nbytes; TYPE_1__ buf; } ;
struct spi_mem_op {TYPE_4__ cmd; TYPE_2__ data; } ;
struct spi_mem {TYPE_3__* spi; } ;
struct npcm_fiu_spi {int regmap; } ;
struct TYPE_7__ {int chip_select; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct spi_mem*,struct spi_mem_op const*,int ,int,int *,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct npcm_fiu_spi* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct spi_mem *VAR_5,
    const struct spi_mem_op *VAR_6)
{
 struct npcm_fiu_spi *VAR_7 =
  FUNC_2(VAR_5->spi->master);
 u8 *VAR_8 = (u8 *)VAR_6->data.buf.out;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;

 VAR_9 = VAR_6->data.nbytes / VAR_0;
 VAR_10 = VAR_6->data.nbytes % VAR_0;

 FUNC_1(VAR_7->regmap, VAR_1,
      VAR_2,
      (VAR_5->spi->chip_select <<
       VAR_3));
 FUNC_1(VAR_7->regmap, VAR_1,
      VAR_4, 0);

 VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_6->cmd.opcode, 1, ((void*)0), 0);
 if (VAR_12)
  return VAR_12;


 for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11) {
  VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_8[0], 0,
      &VAR_8[1], VAR_0 - 1);
  if (VAR_12)
   return VAR_12;

  VAR_8 += VAR_0;
 }


 if (VAR_10 > 0) {
  VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_8[0], 0,
      &VAR_8[1], VAR_10 - 1);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_1(VAR_7->regmap, VAR_1,
      VAR_4, VAR_4);

 return 0;
}
