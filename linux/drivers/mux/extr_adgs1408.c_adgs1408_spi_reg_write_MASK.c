
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tx_buf ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_0,
      u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3[2];

 VAR_3[0] = VAR_1;
 VAR_3[1] = VAR_2;

 return FUNC_0(VAR_0, VAR_3, sizeof(VAR_3), ((void*)0), 0);
}
