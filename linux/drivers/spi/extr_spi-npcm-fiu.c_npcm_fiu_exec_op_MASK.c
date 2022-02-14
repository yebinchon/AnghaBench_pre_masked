
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_10__ {int* in; scalar_t__ out; } ;
struct TYPE_12__ {int nbytes; scalar_t__ dir; TYPE_4__ buf; int buswidth; } ;
struct TYPE_11__ {int val; int nbytes; int buswidth; } ;
struct TYPE_9__ {int opcode; int buswidth; } ;
struct TYPE_8__ {int buswidth; } ;
struct spi_mem_op {TYPE_6__ data; TYPE_5__ addr; TYPE_3__ cmd; TYPE_2__ dummy; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct npcm_fiu_spi {scalar_t__ clkrate; int dev; int clk; scalar_t__ spix_mode; struct npcm_fiu_chip* chip; } ;
struct npcm_fiu_chip {scalar_t__ clkrate; } ;
struct TYPE_7__ {size_t chip_select; int master; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct spi_mem*,struct spi_mem_op const*) ;
 int FUNC_4 (struct spi_mem*,struct spi_mem_op const*) ;
 int FUNC_5 (struct spi_mem*,struct spi_mem_op const*,int,int,int*,int) ;
 int FUNC_6 (struct spi_mem*,struct spi_mem_op const*,int ,int,int*,int) ;
 struct npcm_fiu_spi* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct spi_mem *VAR_2, const struct spi_mem_op *VAR_3)
{
 struct npcm_fiu_spi *VAR_4 =
  FUNC_7(VAR_2->spi->master);
 struct npcm_fiu_chip *VAR_5 = &VAR_4->chip[VAR_2->spi->chip_select];
 int VAR_6 = 0;
 u8 *VAR_7;

 FUNC_1(VAR_4->dev, "cmd:%#x mode:%d.%d.%d.%d addr:%#llx len:%#x\n",
  VAR_3->cmd.opcode, VAR_3->cmd.buswidth, VAR_3->addr.buswidth,
  VAR_3->dummy.buswidth, VAR_3->data.buswidth, VAR_3->addr.val,
  VAR_3->data.nbytes);

 if (VAR_4->spix_mode || VAR_3->addr.nbytes > 4)
  return -VAR_0;

 if (VAR_4->clkrate != VAR_5->clkrate) {
  VAR_6 = FUNC_0(VAR_4->clk, VAR_5->clkrate);
  if (VAR_6 < 0)
   FUNC_2(VAR_4->dev, "Failed setting %lu frequency, stay at %lu frequency\n",
     VAR_5->clkrate, VAR_4->clkrate);
  else
   VAR_4->clkrate = VAR_5->clkrate;
 }

 if (VAR_3->data.dir == VAR_1) {
  if (!VAR_3->addr.nbytes) {
   VAR_7 = VAR_3->data.buf.in;
   VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_3->addr.val, 0,
      VAR_7, VAR_3->data.nbytes);
  } else {
   VAR_6 = FUNC_4(VAR_2, VAR_3);
  }
 } else {
  if (!VAR_3->addr.nbytes && !VAR_3->data.nbytes)
   VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_3->cmd.opcode, 0,
       ((void*)0), 0);
  if (VAR_3->addr.nbytes && !VAR_3->data.nbytes) {
   int VAR_8;
   u8 VAR_9[4];
   u32 VAR_10 = VAR_3->addr.val;

   for (VAR_8 = VAR_3->addr.nbytes - 1; VAR_8 >= 0; VAR_8--) {
    VAR_9[VAR_8] = VAR_10 & 0xff;
    VAR_10 >>= 8;
   }
   VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_3->cmd.opcode, 0,
       VAR_9, VAR_3->addr.nbytes);
  }
  if (!VAR_3->addr.nbytes && VAR_3->data.nbytes)
   VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_3->cmd.opcode, 0,
       (u8 *)VAR_3->data.buf.out,
       VAR_3->data.nbytes);
  if (VAR_3->addr.nbytes && VAR_3->data.nbytes)
   VAR_6 = FUNC_3(VAR_2, VAR_3);
 }

 return VAR_6;
}
