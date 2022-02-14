
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct a3700_spi {int wait_mask; int done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct a3700_spi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct a3700_spi*,int ) ;
 int FUNC_3 (struct a3700_spi*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct spi_master *VAR_6 = VAR_5;
 struct a3700_spi *VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_1(VAR_6);


 VAR_8 = FUNC_2(VAR_7, VAR_1);

 if (!VAR_8 || !(VAR_7->wait_mask & VAR_8))
  return VAR_3;


 FUNC_3(VAR_7, VAR_0, 0);
 FUNC_3(VAR_7, VAR_1, VAR_8);


 FUNC_0(&VAR_7->done);

 return VAR_2;
}
