
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;
struct spi_xcomm {unsigned int settings; unsigned int chipselect; int i2c; int * buf; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct spi_xcomm *VAR_2, unsigned int VAR_3)
{
 uint16_t VAR_4;
 uint8_t *VAR_5 = VAR_2->buf;

 VAR_4 = VAR_2->settings;
 VAR_4 |= VAR_3 << VAR_1;

 VAR_5[0] = VAR_0;
 FUNC_1(VAR_4, &VAR_5[1]);
 FUNC_1(VAR_2->chipselect, &VAR_5[3]);

 return FUNC_0(VAR_2->i2c, VAR_5, 5);
}
