
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_0(struct spi_device *VAR_6)
{
 unsigned int VAR_7 = 0;

 if (VAR_6->mode & VAR_2)
  VAR_7 |= VAR_5;
 if (VAR_6->mode & VAR_1)
  VAR_7 |= VAR_4;
 if (VAR_6->mode & VAR_0)
  VAR_7 |= VAR_3;

 return VAR_7;
}
