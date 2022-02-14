
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_imx_data {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct spi_imx_data *VAR_7, int VAR_8)
{
 unsigned VAR_9 = 0;

 if (VAR_8 & VAR_6)
  VAR_9 |= VAR_3;

 if (VAR_8 & VAR_5)
  VAR_9 |= VAR_2;

 if (VAR_8 & VAR_4)
  VAR_9 |= VAR_1;

 FUNC_0(VAR_9, VAR_7->base + VAR_0);
}
