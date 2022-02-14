
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_mmc_host {int dummy; } ;
struct mmc_data {int flags; } ;


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
 int FUNC_0 (struct sunxi_mmc_host*,int ) ;
 int FUNC_1 (struct sunxi_mmc_host*,int ,int) ;
 int FUNC_2 (struct sunxi_mmc_host*,struct mmc_data*) ;

__attribute__((used)) static void FUNC_3(struct sunxi_mmc_host *VAR_10,
    struct mmc_data *VAR_11)
{
 u32 VAR_12;

 FUNC_2(VAR_10, VAR_11);

 VAR_12 = FUNC_0(VAR_10, VAR_2);
 VAR_12 |= VAR_4;
 FUNC_1(VAR_10, VAR_2, VAR_12);
 VAR_12 |= VAR_5;
 FUNC_1(VAR_10, VAR_2, VAR_12);

 FUNC_1(VAR_10, VAR_1, VAR_9);

 if (!(VAR_11->flags & VAR_0))
  FUNC_1(VAR_10, VAR_3, VAR_8);

 FUNC_1(VAR_10, VAR_1,
     VAR_6 | VAR_7);
}
