
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_se {int clk; } ;
struct spi_geni_master {unsigned int oversampling; int dev; struct geni_se se; } ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int,unsigned long,unsigned int,unsigned int) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (struct geni_se*,unsigned int,unsigned int*,unsigned long*,int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_0,
   struct spi_geni_master *VAR_1,
   unsigned int *VAR_2,
   unsigned int *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 struct geni_se *VAR_6 = &VAR_1->se;
 int VAR_7;

 VAR_7 = FUNC_4(&VAR_1->se,
    VAR_0 * VAR_1->oversampling,
    VAR_2, &VAR_4, 0);
 if (VAR_7) {
  FUNC_3(VAR_1->dev, "Failed(%d) to find src clk for %dHz\n",
       VAR_7, VAR_0);
  return VAR_7;
 }

 *VAR_3 = FUNC_0(VAR_4, VAR_1->oversampling * VAR_0);
 VAR_5 = VAR_4 / (VAR_1->oversampling * *VAR_3);

 FUNC_2(VAR_1->dev, "req %u=>%u sclk %lu, idx %d, div %d\n", VAR_0,
    VAR_5, VAR_4, *VAR_2, *VAR_3);
 VAR_7 = FUNC_1(VAR_6->clk, VAR_4);
 if (VAR_7)
  FUNC_3(VAR_1->dev, "clk_set_rate failed %d\n", VAR_7);
 return VAR_7;
}
