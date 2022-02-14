
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct spi_device*,scalar_t__*,int ,scalar_t__*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct spi_device *VAR_2, u16 VAR_3)
{
 u8 VAR_4[2];
 u8 VAR_5;

 VAR_3 = FUNC_0(VAR_3) >> 1;
 VAR_4[0] = (u8)(((VAR_3 >> 8) & 0x7f) | 0x80);
 VAR_4[1] = (u8)(VAR_3 & 0xfe);

 FUNC_2(VAR_2, &VAR_4[0], VAR_1, &VAR_5,
       VAR_0);

 VAR_5 = FUNC_1(VAR_5);
 return VAR_5;
}
