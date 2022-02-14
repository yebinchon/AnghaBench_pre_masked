
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_spi {unsigned int* tx; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct s3c24xx_spi *VAR_0, int VAR_1)
{
 return VAR_0->tx ? VAR_0->tx[VAR_1] : 0;
}
