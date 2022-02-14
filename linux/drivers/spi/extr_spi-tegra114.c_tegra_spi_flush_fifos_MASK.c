
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_spi_data {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_6 ;
 int FUNC_1 (struct tegra_spi_data*,int ) ;
 int FUNC_2 (struct tegra_spi_data*,int,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tegra_spi_data *VAR_7)
{
 unsigned long VAR_8 = VAR_6 + VAR_1;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_3);
 if ((VAR_9 & VAR_2) != VAR_2) {
  VAR_9 |= VAR_4 | VAR_5;
  FUNC_2(VAR_7, VAR_9, VAR_3);
  while ((VAR_9 & VAR_2) != VAR_2) {
   VAR_9 = FUNC_1(VAR_7, VAR_3);
   if (FUNC_3(VAR_6, VAR_8)) {
    FUNC_0(VAR_7->dev,
     "timeout waiting for fifo flush\n");
    return -VAR_0;
   }

   FUNC_4(1);
  }
 }

 return 0;
}
