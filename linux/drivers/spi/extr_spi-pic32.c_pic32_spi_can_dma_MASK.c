
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct pic32_spi {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pic32_spi* FUNC_0 (struct spi_master*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct spi_master *VAR_2,
         struct spi_device *VAR_3,
         struct spi_transfer *VAR_4)
{
 struct pic32_spi *VAR_5 = FUNC_0(VAR_2);


 return (VAR_4->len >= VAR_1) &&
        FUNC_1(VAR_0, &VAR_5->flags);
}
