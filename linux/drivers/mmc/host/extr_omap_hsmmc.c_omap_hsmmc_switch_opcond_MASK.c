
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_hsmmc_host {int mmc; int base; scalar_t__ dbclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct omap_hsmmc_host*,int) ;
 int FUNC_7 (struct omap_hsmmc_host*) ;

__attribute__((used)) static int FUNC_8(struct omap_hsmmc_host *VAR_5, int VAR_6)
{
 u32 VAR_7 = 0;
 int VAR_8;


 if (VAR_5->dbclk)
  FUNC_2(VAR_5->dbclk);


 VAR_8 = FUNC_6(VAR_5, 0);


 if (!VAR_8)
  VAR_8 = FUNC_6(VAR_5, 1);
 if (VAR_5->dbclk)
  FUNC_3(VAR_5->dbclk);

 if (VAR_8 != 0)
  goto err;

 FUNC_1(VAR_5->base, VAR_0,
  FUNC_0(VAR_5->base, VAR_0) & VAR_4);
 VAR_7 = FUNC_0(VAR_5->base, VAR_0);
 if ((1 << VAR_6) <= VAR_1)
  VAR_7 |= VAR_2;
 else
  VAR_7 |= VAR_3;

 FUNC_1(VAR_5->base, VAR_0, VAR_7);
 FUNC_7(VAR_5);

 return 0;
err:
 FUNC_4(FUNC_5(VAR_5->mmc), "Unable to switch operating voltage\n");
 return VAR_8;
}
