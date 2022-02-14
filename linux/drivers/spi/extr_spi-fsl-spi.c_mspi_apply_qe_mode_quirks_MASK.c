
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_mpc8xxx_cs {int dummy; } ;
struct spi_device {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct spi_mpc8xxx_cs *VAR_2,
    struct spi_device *VAR_3,
    int VAR_4)
{






 if (VAR_3->mode & VAR_1 &&
     VAR_4 > 8)
  return -VAR_0;
 if (VAR_4 > 8)
  return 8;
 return VAR_4;
}
