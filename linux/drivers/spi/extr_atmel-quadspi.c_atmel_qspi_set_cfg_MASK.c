
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


typedef int u32 ;
struct TYPE_11__ {scalar_t__ dir; scalar_t__ nbytes; } ;
struct TYPE_10__ {int buswidth; int nbytes; int val; } ;
struct TYPE_8__ {int opcode; } ;
struct TYPE_7__ {int buswidth; int nbytes; } ;
struct spi_mem_op {TYPE_5__ data; TYPE_4__ addr; TYPE_2__ cmd; TYPE_1__ dummy; } ;
struct atmel_qspi {scalar_t__ mr; scalar_t__ regs; TYPE_3__* caps; } ;
struct TYPE_12__ {int config; } ;
struct TYPE_9__ {scalar_t__ has_ricr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (struct spi_mem_op const*) ;
 TYPE_6__* VAR_19 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct atmel_qspi *VAR_20,
         const struct spi_mem_op *VAR_21, u32 *VAR_22)
{
 u32 VAR_23, VAR_24, VAR_25;
 u32 VAR_26 = 0;
 int VAR_27;

 VAR_23 = 0;
 VAR_24 = FUNC_0(VAR_21->cmd.opcode);
 VAR_25 = VAR_8;

 VAR_27 = FUNC_3(VAR_21);
 if (VAR_27 < 0)
  return VAR_27;
 VAR_25 |= VAR_19[VAR_27].config;

 if (VAR_21->dummy.buswidth && VAR_21->dummy.nbytes)
  VAR_26 = VAR_21->dummy.nbytes * 8 / VAR_21->dummy.buswidth;
 if (VAR_21->addr.buswidth) {
  switch (VAR_21->addr.nbytes) {
  case 0:
   break;
  case 1:
   VAR_25 |= VAR_9 | VAR_10;
   VAR_24 |= FUNC_1(VAR_21->addr.val & 0xff);
   break;
  case 2:
   if (VAR_26 < 8 / VAR_21->addr.buswidth) {
    VAR_25 &= ~VAR_8;
    VAR_25 |= VAR_4;
    VAR_23 = (VAR_21->cmd.opcode << 16) |
     (VAR_21->addr.val & 0xffff);
   } else {
    VAR_25 |= VAR_4;
    VAR_23 = (VAR_21->addr.val << 8) & 0xffffff;
    VAR_26 -= 8 / VAR_21->addr.buswidth;
   }
   break;
  case 3:
   VAR_25 |= VAR_4;
   VAR_23 = VAR_21->addr.val & 0xffffff;
   break;
  case 4:
   VAR_25 |= VAR_4 | VAR_5;
   VAR_23 = VAR_21->addr.val & 0x7ffffff;
   break;
  default:
   return -VAR_0;
  }
 }


 *VAR_22 = VAR_23;


 if (VAR_26)
  VAR_25 |= FUNC_2(VAR_26);


 if (VAR_21->data.nbytes)
  VAR_25 |= VAR_7;





 if (VAR_20->mr != VAR_13) {
  FUNC_5(VAR_13, VAR_20->regs + VAR_12);
  VAR_20->mr = VAR_13;
 }


 (void)FUNC_4(VAR_20->regs + VAR_15);

 if (VAR_20->caps->has_ricr) {
  if (!VAR_21->addr.nbytes && VAR_21->data.dir == VAR_17)
   VAR_25 |= VAR_6;


  FUNC_5(VAR_23, VAR_20->regs + VAR_1);
  if (VAR_21->data.dir == VAR_17)
   FUNC_5(VAR_24, VAR_20->regs + VAR_14);
  else
   FUNC_5(VAR_24, VAR_20->regs + VAR_16);
  FUNC_5(VAR_25, VAR_20->regs + VAR_3);
 } else {
  if (VAR_21->data.dir == VAR_18)
   VAR_25 |= VAR_11;


  FUNC_5(VAR_23, VAR_20->regs + VAR_1);
  FUNC_5(VAR_24, VAR_20->regs + VAR_2);
  FUNC_5(VAR_25, VAR_20->regs + VAR_3);
 }

 return 0;
}
