
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct ds1390 {unsigned char* txrx_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct ds1390* FUNC_0 (struct device*) ;
 int FUNC_1 (struct spi_device*,unsigned char*,int,unsigned char*,int) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, unsigned char VAR_2,
    unsigned char *VAR_3)
{
 struct spi_device *VAR_4 = FUNC_2(VAR_1);
 struct ds1390 *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 if (!VAR_3)
  return -VAR_0;


 VAR_5->txrx_buf[0] = VAR_2 & 0x7f;

 VAR_6 = FUNC_1(VAR_4, VAR_5->txrx_buf, 1, VAR_5->txrx_buf, 1);
 if (VAR_6 != 0)
  return VAR_6;

 *VAR_3 = VAR_5->txrx_buf[0];

 return 0;
}
