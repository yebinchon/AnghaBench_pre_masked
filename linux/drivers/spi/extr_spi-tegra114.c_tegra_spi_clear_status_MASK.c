
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_spi_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_spi_data*,int ) ;
 int FUNC_1 (struct tegra_spi_data*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_spi_data *VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_5, VAR_3);


 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5 & VAR_0)
  FUNC_1(VAR_4, VAR_0 | VAR_1,
    VAR_2);
}
