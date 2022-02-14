
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int nbytes; int buswidth; } ;
struct TYPE_11__ {int opcode; } ;
struct TYPE_9__ {int nbytes; } ;
struct spi_mem_op {TYPE_7__ addr; TYPE_4__ cmd; TYPE_2__ dummy; } ;
struct TYPE_12__ {int nbytes; int buswidth; } ;
struct TYPE_10__ {int opcode; } ;
struct TYPE_8__ {int nbytes; } ;
struct TYPE_13__ {TYPE_5__ addr; TYPE_3__ cmd; TYPE_1__ dummy; } ;
struct npcm_fiu_spi {TYPE_6__ drd_op; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct npcm_fiu_spi *VAR_9,
        const struct spi_mem_op *VAR_10)
{
 FUNC_1(VAR_9->regmap, VAR_2,
      VAR_3,
      FUNC_0(VAR_10->addr.buswidth) <<
      VAR_0);
 VAR_9->drd_op.addr.buswidth = VAR_10->addr.buswidth;
 FUNC_1(VAR_9->regmap, VAR_2,
      VAR_5,
      ((VAR_10->dummy.nbytes * FUNC_0(VAR_10->addr.buswidth))
       / VAR_8) << VAR_7);
 VAR_9->drd_op.dummy.nbytes = VAR_10->dummy.nbytes;
 FUNC_1(VAR_9->regmap, VAR_2,
      VAR_6, VAR_10->cmd.opcode);
 VAR_9->drd_op.cmd.opcode = VAR_10->cmd.opcode;
 FUNC_1(VAR_9->regmap, VAR_2,
      VAR_4,
      (VAR_10->addr.nbytes - 3) << VAR_1);
 VAR_9->drd_op.addr.nbytes = VAR_10->addr.nbytes;
}
