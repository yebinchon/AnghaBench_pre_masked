
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct spi_device*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0, unsigned char VAR_1,
   unsigned char VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4 = 0, VAR_5 = 0;

 VAR_4 = 0x0000 | VAR_1;
 VAR_5 = 0x0100 | VAR_2;
 VAR_5 = (VAR_4 << 16) | VAR_5;

 VAR_3 = FUNC_1(VAR_0, (unsigned char *)&VAR_5, 4);
 if (VAR_3)
  FUNC_0("error in spi_write %x\n", VAR_5);

 return VAR_3;
}
