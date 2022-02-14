
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {int mode; int master; } ;
struct sirfsoc_spi {int fifo_size; int type; TYPE_1__* regs; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__ usp_mode1; scalar_t__ spi_ctrl; scalar_t__ rxfifo_level_chk; scalar_t__ txfifo_level_chk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sirfsoc_spi*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;



 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (scalar_t__) ;
 struct sirfsoc_spi* FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_20)
{
 struct sirfsoc_spi *VAR_21;
 u32 VAR_22, VAR_23;

 VAR_21 = FUNC_2(VAR_20->master);
 VAR_22 = FUNC_1(VAR_21->base + VAR_21->regs->spi_ctrl);
 VAR_23 = FUNC_1(VAR_21->base + VAR_21->regs->usp_mode1);
 if (!(VAR_20->mode & VAR_18)) {
  VAR_22 |= VAR_1;
  VAR_23 &= ~VAR_8;
 } else {
  VAR_22 &= ~VAR_1;
  VAR_23 |= VAR_8;
 }
 if (!(VAR_20->mode & VAR_19)) {
  VAR_22 |= VAR_7;
  VAR_23 &= ~VAR_9;
 } else {
  VAR_22 &= ~VAR_7;
  VAR_23 |= VAR_9;
 }
 if (VAR_20->mode & VAR_17) {
  VAR_22 |= VAR_0;
  VAR_23 |= VAR_11;
 } else {
  VAR_22 &= ~VAR_0;
  VAR_23 &= ~VAR_11;
 }




 if (((VAR_20->mode & VAR_17) && (VAR_20->mode & VAR_16)) ||
     (!(VAR_20->mode & VAR_17) && !(VAR_20->mode & VAR_16))) {
  VAR_22 &= ~VAR_3;
  VAR_23 |= (VAR_15 |
    VAR_10);
 } else {
  VAR_22 |= VAR_3;
  VAR_23 &= ~(VAR_10 |
    VAR_15);
 }
 FUNC_3((FUNC_0(VAR_21, VAR_21->fifo_size - 2) <<
  VAR_6) |
  (FUNC_0(VAR_21, VAR_21->fifo_size / 2) <<
  VAR_5) |
  (FUNC_0(VAR_21, 2) <<
  VAR_4),
  VAR_21->base + VAR_21->regs->txfifo_level_chk);
 FUNC_3((FUNC_0(VAR_21, 2) <<
  VAR_6) |
  (FUNC_0(VAR_21, VAR_21->fifo_size / 2) <<
  VAR_5) |
  (FUNC_0(VAR_21, VAR_21->fifo_size - 2) <<
  VAR_4),
  VAR_21->base + VAR_21->regs->rxfifo_level_chk);




 switch (VAR_21->type) {
 case 130:
  VAR_22 |= VAR_2;
  FUNC_3(VAR_22, VAR_21->base + VAR_21->regs->spi_ctrl);
  break;
 case 128:
 case 129:
  VAR_23 |= VAR_12;
  VAR_23 |= VAR_14;
  VAR_23 &= ~VAR_13;
  FUNC_3(VAR_23, VAR_21->base + VAR_21->regs->usp_mode1);
  break;
 }

 return 0;
}
