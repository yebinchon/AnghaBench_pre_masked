
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int,int) ;

__attribute__((used)) static void FUNC_1(struct spi_device *VAR_0, u16 VAR_1[12])
{
 u8 VAR_2, VAR_3;


 for (VAR_3 = VAR_2 = 0; VAR_2 < 4; VAR_2++)
  VAR_3 |= (VAR_1[VAR_2] & 0x300) >> ((VAR_2 + 1) * 2);
 FUNC_0(VAR_0, 0x11, VAR_3);

 for (VAR_3 = VAR_2 = 0; VAR_2 < 4; VAR_2++)
  VAR_3 |= (VAR_1[VAR_2+4] & 0x300) >> ((VAR_2 + 1) * 2);
 FUNC_0(VAR_0, 0x12, VAR_3);

 for (VAR_3 = VAR_2 = 0; VAR_2 < 4; VAR_2++)
  VAR_3 |= (VAR_1[VAR_2+8] & 0x300) >> ((VAR_2 + 1) * 2);
 FUNC_0(VAR_0, 0x13, VAR_3);


 for (VAR_3 = VAR_2 = 0; VAR_2 < 12; VAR_2++)
  FUNC_0(VAR_0, 0x14 + VAR_2, VAR_1[VAR_2] & 0xff);
}
