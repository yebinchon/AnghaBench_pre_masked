
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int rx_buf; int tx_buf; } ;
struct spi_device {int mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_0(struct spi_device *VAR_6,
       struct spi_transfer *VAR_7)
{
 unsigned int VAR_8 = VAR_3;

 if (VAR_6->mode & VAR_0) {






  if (!VAR_7->tx_buf)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_2;
 } else {
  if (!VAR_7->tx_buf)
   VAR_8 = VAR_4;
  else if (!VAR_7->rx_buf)
   VAR_8 = VAR_5;
 }

 return VAR_8;
}
