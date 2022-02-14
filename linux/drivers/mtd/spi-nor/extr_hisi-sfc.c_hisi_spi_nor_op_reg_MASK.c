
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_nor {struct hifmc_priv* priv; } ;
struct hifmc_priv {int chipselect; struct hifmc_host* host; } ;
struct hifmc_host {scalar_t__ regbase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hifmc_host*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_7,
    u8 VAR_8, int VAR_9, u8 VAR_10)
{
 struct hifmc_priv *VAR_11 = VAR_7->priv;
 struct hifmc_host *VAR_12 = VAR_11->host;
 u32 VAR_13;

 VAR_13 = FUNC_0(VAR_8);
 FUNC_4(VAR_13, VAR_12->regbase + VAR_0);

 VAR_13 = FUNC_1(VAR_9);
 FUNC_4(VAR_13, VAR_12->regbase + VAR_1);

 VAR_13 = FUNC_2(VAR_11->chipselect);
 FUNC_4(VAR_13, VAR_12->regbase + VAR_4);

 FUNC_4(0xff, VAR_12->regbase + VAR_2);
 VAR_13 = VAR_5 | VAR_6 | VAR_10;
 FUNC_4(VAR_13, VAR_12->regbase + VAR_3);

 return FUNC_3(VAR_12);
}
