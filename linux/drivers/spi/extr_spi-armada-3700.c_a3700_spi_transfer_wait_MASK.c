
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int master; } ;
struct a3700_spi {unsigned int wait_mask; } ;


 int FUNC_0 (struct spi_device*) ;
 struct a3700_spi* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct spi_device *VAR_0,
        unsigned int VAR_1)
{
 struct a3700_spi *VAR_2;

 VAR_2 = FUNC_1(VAR_0->master);
 VAR_2->wait_mask = VAR_1;

 return FUNC_0(VAR_0);
}
