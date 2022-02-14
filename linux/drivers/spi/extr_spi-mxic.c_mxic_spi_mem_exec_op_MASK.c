
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
struct TYPE_11__ {int* out; int * in; } ;
struct TYPE_12__ {int nbytes; scalar_t__ dir; TYPE_5__ buf; int buswidth; } ;
struct TYPE_10__ {int nbytes; } ;
struct TYPE_9__ {int nbytes; int val; int buswidth; } ;
struct TYPE_8__ {int opcode; int buswidth; } ;
struct spi_mem_op {TYPE_6__ data; TYPE_4__ dummy; TYPE_3__ addr; TYPE_2__ cmd; } ;
struct spi_mem {TYPE_1__* spi; } ;
struct mxic_spi {scalar_t__ regs; } ;
struct TYPE_7__ {int mode; int chip_select; int max_speed_hz; int master; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct mxic_spi*,int*,int *,int) ;
 int FUNC_13 (struct mxic_spi*,int ) ;
 int FUNC_14 (scalar_t__) ;
 struct mxic_spi* FUNC_15 (int ) ;
 int FUNC_16 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct spi_mem *VAR_13,
    const struct spi_mem_op *VAR_14)
{
 struct mxic_spi *VAR_15 = FUNC_15(VAR_13->spi->master);
 int VAR_16 = 1, VAR_17, VAR_18;
 u32 VAR_19;
 u8 VAR_20[8];

 VAR_18 = FUNC_13(VAR_15, VAR_13->spi->max_speed_hz);
 if (VAR_18)
  return VAR_18;

 if (VAR_13->spi->mode & (VAR_12 | VAR_10))
  VAR_16 = 4;
 else if (VAR_13->spi->mode & (VAR_11 | VAR_9))
  VAR_16 = 2;

 FUNC_16(FUNC_1(VAR_16) |
        FUNC_3(VAR_13->spi->chip_select, VAR_3) |
        FUNC_2(VAR_13->spi->chip_select) | FUNC_0(1) |
        VAR_2,
        VAR_15->regs + VAR_0);
 FUNC_16(VAR_5, VAR_15->regs + VAR_4);

 VAR_19 = FUNC_7(1) | FUNC_6(FUNC_11(VAR_14->cmd.buswidth) - 1);

 if (VAR_14->addr.nbytes)
  VAR_19 |= FUNC_5(VAR_14->addr.nbytes) |
      FUNC_4(FUNC_11(VAR_14->addr.buswidth) - 1);

 if (VAR_14->dummy.nbytes)
  VAR_19 |= FUNC_9(VAR_14->dummy.nbytes);

 if (VAR_14->data.nbytes) {
  VAR_19 |= FUNC_8(FUNC_11(VAR_14->data.buswidth) - 1);
  if (VAR_14->data.dir == VAR_7)
   VAR_19 |= VAR_6;
 }

 FUNC_16(VAR_19, VAR_15->regs + FUNC_10(VAR_13->spi->chip_select));

 FUNC_16(FUNC_14(VAR_15->regs + VAR_0) | VAR_1,
        VAR_15->regs + VAR_0);

 VAR_18 = FUNC_12(VAR_15, &VAR_14->cmd.opcode, ((void*)0), 1);
 if (VAR_18)
  goto out;

 for (VAR_17 = 0; VAR_17 < VAR_14->addr.nbytes; VAR_17++)
  VAR_20[VAR_17] = VAR_14->addr.val >> (8 * (VAR_14->addr.nbytes - VAR_17 - 1));

 VAR_18 = FUNC_12(VAR_15, VAR_20, ((void*)0), VAR_14->addr.nbytes);
 if (VAR_18)
  goto out;

 VAR_18 = FUNC_12(VAR_15, ((void*)0), ((void*)0), VAR_14->dummy.nbytes);
 if (VAR_18)
  goto out;

 VAR_18 = FUNC_12(VAR_15,
     VAR_14->data.dir == VAR_8 ?
     VAR_14->data.buf.out : ((void*)0),
     VAR_14->data.dir == VAR_7 ?
     VAR_14->data.buf.in : ((void*)0),
     VAR_14->data.nbytes);

out:
 FUNC_16(FUNC_14(VAR_15->regs + VAR_0) & ~VAR_1,
        VAR_15->regs + VAR_0);
 FUNC_16(0, VAR_15->regs + VAR_4);

 return VAR_18;
}
