
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tx ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct spi_device*,int *,int,int *,int ) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, u8 VAR_2, u8 *VAR_3, u8 VAR_4)
{
 struct spi_device *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;
 u8 VAR_7[2];

 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_2;
 VAR_6 = FUNC_1(VAR_5, VAR_7, sizeof(VAR_7), VAR_3, VAR_4);

 if (VAR_6)
  FUNC_0(VAR_1, "Failed reading %d bytes from address %x.\n",
     VAR_4, VAR_2);

 return VAR_6;
}
