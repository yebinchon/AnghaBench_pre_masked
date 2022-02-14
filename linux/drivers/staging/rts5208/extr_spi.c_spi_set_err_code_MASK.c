
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_info {int err_code; } ;
struct rtsx_chip {struct spi_info spi; } ;



__attribute__((used)) static inline void FUNC_0(struct rtsx_chip *VAR_0, u8 VAR_1)
{
 struct spi_info *VAR_2 = &VAR_0->spi;

 VAR_2->err_code = VAR_1;
}
