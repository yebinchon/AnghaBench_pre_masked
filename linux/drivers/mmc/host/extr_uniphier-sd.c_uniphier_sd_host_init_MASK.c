
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_sd_priv {int caps; } ;
struct tmio_mmc_host {scalar_t__ ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct uniphier_sd_priv* FUNC_0 (struct tmio_mmc_host*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_4)
{
 struct uniphier_sd_priv *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;
 if (VAR_5->caps & VAR_1)
  VAR_6 = 0x00000101;
 else
  VAR_6 = 0x00000000;

 FUNC_1(VAR_6, VAR_4->ctl + VAR_3);

 VAR_6 = 0;




 if (VAR_5->caps & VAR_1)
  VAR_6 |= VAR_2;

 FUNC_1(VAR_6, VAR_4->ctl + (VAR_0 << 1));
}
