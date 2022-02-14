
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {struct hifmc_priv* priv; } ;
struct hifmc_priv {struct hifmc_host* host; } ;
struct hifmc_host {int iobase; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_nor*,int ,int,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct spi_nor *VAR_1, u8 VAR_2, u8 *VAR_3,
  int VAR_4)
{
 struct hifmc_priv *VAR_5 = VAR_1->priv;
 struct hifmc_host *VAR_6 = VAR_5->host;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_0);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_3, VAR_6->iobase, VAR_4);
 return 0;
}
