
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_2 (struct spi_device*,scalar_t__*,scalar_t__) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, u8 VAR_2, u8 *VAR_3, u8 VAR_4)
{
 struct spi_device *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;
 u8 VAR_7[257];

 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_2;
 FUNC_1(&VAR_7[2], VAR_3, VAR_4);

 VAR_6 = FUNC_2(VAR_5, VAR_7, 2 + VAR_4);

 if (VAR_6)
  FUNC_0(VAR_1, "Failed to write %d bytes to address %x.\n",
     VAR_4, VAR_2);

 return VAR_6;
}
