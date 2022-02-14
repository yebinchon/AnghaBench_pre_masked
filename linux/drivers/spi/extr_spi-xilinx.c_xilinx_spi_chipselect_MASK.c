
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct xilinx_spi {int cs_inactive; int (* read_fn ) (scalar_t__) ;scalar_t__ regs; int (* write_fn ) (int,scalar_t__) ;} ;
struct spi_device {int mode; int chip_select; int master; } ;


 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct xilinx_spi* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_12, int VAR_13)
{
 struct xilinx_spi *VAR_14 = FUNC_1(VAR_12->master);
 u16 VAR_15;
 u32 VAR_16;

 if (VAR_13 == VAR_0) {

  VAR_14->write_fn(VAR_14->cs_inactive, VAR_14->regs + VAR_11);
  return;
 }


 VAR_15 = VAR_14->read_fn(VAR_14->regs + VAR_10) & ~VAR_9;
 if (VAR_12->mode & VAR_1)
  VAR_15 |= VAR_5;
 if (VAR_12->mode & VAR_2)
  VAR_15 |= VAR_6;
 if (VAR_12->mode & VAR_4)
  VAR_15 |= VAR_8;
 if (VAR_12->mode & VAR_3)
  VAR_15 |= VAR_7;
 VAR_14->write_fn(VAR_15, VAR_14->regs + VAR_10);






 VAR_16 = VAR_14->cs_inactive;
 VAR_16 ^= FUNC_0(VAR_12->chip_select);


 VAR_14->write_fn(VAR_16, VAR_14->regs + VAR_11);
}
