
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct spi_master {int num_chipselect; int mode_bits; } ;
struct a3700_spi {struct spi_master* master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct a3700_spi*) ;
 int FUNC_1 (struct a3700_spi*,int) ;
 int FUNC_2 (struct a3700_spi*,int) ;
 int FUNC_3 (struct a3700_spi*,int ) ;
 unsigned int FUNC_4 (struct a3700_spi*,int ) ;
 int FUNC_5 (struct a3700_spi*,int ,unsigned int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct a3700_spi *VAR_7)
{
 struct spi_master *VAR_8 = VAR_7->master;
 u32 VAR_9;
 int VAR_10, VAR_11 = 0;


 VAR_9 = FUNC_4(VAR_7, VAR_0);
 VAR_9 |= VAR_5;
 FUNC_5(VAR_7, VAR_0, VAR_9);

 FUNC_6(VAR_6);

 VAR_9 = FUNC_4(VAR_7, VAR_0);
 VAR_9 &= ~VAR_5;
 FUNC_5(VAR_7, VAR_0, VAR_9);


 FUNC_0(VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_8->num_chipselect; VAR_10++)
  FUNC_1(VAR_7, VAR_10);


 FUNC_2(VAR_7, 1);


 FUNC_3(VAR_7, VAR_8->mode_bits);


 FUNC_5(VAR_7, VAR_2, 0);
 FUNC_5(VAR_7, VAR_1, 0);


 FUNC_5(VAR_7, VAR_3, 0);
 FUNC_5(VAR_7, VAR_4, ~0U);

 return VAR_11;
}
