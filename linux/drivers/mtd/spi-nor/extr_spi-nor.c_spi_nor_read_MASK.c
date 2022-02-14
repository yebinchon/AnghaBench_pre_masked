
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct spi_nor {int dev; } ;
struct mtd_info {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,size_t) ;
 struct spi_nor* FUNC_2 (struct mtd_info*) ;
 scalar_t__ FUNC_3 (struct spi_nor*,scalar_t__) ;
 int FUNC_4 (struct spi_nor*,int ) ;
 int FUNC_5 (struct spi_nor*,scalar_t__,size_t,int *) ;
 int FUNC_6 (struct spi_nor*,int ) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
   size_t *VAR_5, u_char *VAR_6)
{
 struct spi_nor *VAR_7 = FUNC_2(VAR_2);
 int VAR_8;

 FUNC_1(VAR_7->dev, "from 0x%08x, len %zd\n", (u32)VAR_3, VAR_4);

 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (VAR_8)
  return VAR_8;

 while (VAR_4) {
  loff_t VAR_9 = VAR_3;

  VAR_9 = FUNC_3(VAR_7, VAR_9);

  VAR_8 = FUNC_5(VAR_7, VAR_9, VAR_4, VAR_6);
  if (VAR_8 == 0) {

   VAR_8 = -VAR_0;
   goto read_err;
  }
  if (VAR_8 < 0)
   goto read_err;

  FUNC_0(VAR_8 > VAR_4);
  *VAR_5 += VAR_8;
  VAR_6 += VAR_8;
  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;
 }
 VAR_8 = 0;

read_err:
 FUNC_6(VAR_7, VAR_1);
 return VAR_8;
}
