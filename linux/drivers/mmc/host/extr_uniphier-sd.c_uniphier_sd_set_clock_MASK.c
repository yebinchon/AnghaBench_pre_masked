
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_sd_priv {unsigned int clk_rate; int caps; } ;
struct tmio_mmc_host {scalar_t__ ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long) ;
 struct uniphier_sd_priv* FUNC_2 (struct tmio_mmc_host*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tmio_mmc_host *VAR_6,
      unsigned int VAR_7)
{
 struct uniphier_sd_priv *VAR_8 = FUNC_2(VAR_6);
 unsigned long VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_6->ctl + (VAR_2 << 1));


 VAR_10 &= ~VAR_1;
 FUNC_3(VAR_10, VAR_6->ctl + (VAR_2 << 1));

 if (VAR_7 == 0)
  return;

 VAR_10 &= ~VAR_5;
 VAR_10 &= ~VAR_4;
 VAR_10 &= ~VAR_0;

 VAR_9 = VAR_8->clk_rate / VAR_7;
 if (VAR_9 <= 1)
  VAR_10 |= VAR_4;
 else if (VAR_8->caps & VAR_3 && VAR_9 > 512)
  VAR_10 |= VAR_5;
 else
  VAR_10 |= FUNC_1(VAR_9) >> 2;

 FUNC_3(VAR_10, VAR_6->ctl + (VAR_2 << 1));

 VAR_10 |= VAR_1;
 FUNC_3(VAR_10, VAR_6->ctl + (VAR_2 << 1));
}
