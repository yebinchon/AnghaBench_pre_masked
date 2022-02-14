
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct spi_nor {int addr_width; int read_dummy; int program_opcode; int read_opcode; int write_proto; int read_proto; struct hifmc_priv* priv; } ;
struct hifmc_priv {int chipselect; struct hifmc_host* host; } ;
struct hifmc_host {scalar_t__ regbase; } ;
typedef int loff_t ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (size_t) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct hifmc_host*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct spi_nor *VAR_14, loff_t VAR_15,
  dma_addr_t VAR_16, size_t VAR_17, u8 VAR_18)
{
 struct hifmc_priv *VAR_19 = VAR_14->priv;
 struct hifmc_host *VAR_20 = VAR_19->host;
 u8 VAR_21 = 0;
 u32 VAR_22;

 VAR_22 = FUNC_9(VAR_20->regbase + VAR_1);
 VAR_22 &= ~(VAR_2 | VAR_13);
 VAR_22 |= VAR_3;
 VAR_22 |= (VAR_14->addr_width == 4) ? VAR_12
  : VAR_11;
 FUNC_10(VAR_22, VAR_20->regbase + VAR_1);

 FUNC_10(VAR_15, VAR_20->regbase + VAR_0);
 FUNC_10(VAR_16, VAR_20->regbase + VAR_5);
 FUNC_10(FUNC_0(VAR_17), VAR_20->regbase + VAR_4);

 VAR_22 = FUNC_2(VAR_19->chipselect);
 if (VAR_18 == VAR_9)
  VAR_21 = FUNC_7(VAR_14->read_proto);
 else
  VAR_21 = FUNC_7(VAR_14->write_proto);
 VAR_22 |= FUNC_3(VAR_21);
 if (VAR_18 == VAR_9)
  VAR_22 |= FUNC_1(VAR_14->read_dummy >> 3);
 FUNC_10(VAR_22, VAR_20->regbase + VAR_7);

 FUNC_10(0xff, VAR_20->regbase + VAR_6);
 VAR_22 = FUNC_5(VAR_18) | VAR_10;
 VAR_22 |= (VAR_18 == VAR_9)
  ? FUNC_4(VAR_14->read_opcode)
  : FUNC_6(VAR_14->program_opcode);
 FUNC_10(VAR_22, VAR_20->regbase + VAR_8);

 return FUNC_8(VAR_20);
}
