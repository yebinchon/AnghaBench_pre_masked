
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct spi_device*,scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_1, u16 VAR_2,
         u8 VAR_3)
{
 u8 VAR_4[3];

 VAR_2 = FUNC_0(VAR_2) >> 1;
 VAR_3 = FUNC_1(VAR_3);
 VAR_4[0] = (u8)((VAR_2 >> 8) & 0x7f);
 VAR_4[1] = (u8)(VAR_2 & 0xfe);
 VAR_4[2] = VAR_3;


 FUNC_2(VAR_1, &VAR_4[0], VAR_0);
}
