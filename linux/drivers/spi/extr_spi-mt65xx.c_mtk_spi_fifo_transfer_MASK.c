
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct spi_transfer {int len; scalar_t__ tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct mtk_spi {scalar_t__ base; scalar_t__ num_xfered; int xfer_len; struct spi_transfer* cur_transfer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct spi_master*,struct spi_transfer*) ;
 int FUNC_5 (struct spi_master*) ;
 struct mtk_spi* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct spi_master *VAR_2,
     struct spi_device *VAR_3,
     struct spi_transfer *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;
 struct mtk_spi *VAR_8 = FUNC_6(VAR_2);

 VAR_8->cur_transfer = VAR_4;
 VAR_8->xfer_len = FUNC_2(VAR_0, VAR_4->len);
 VAR_8->num_xfered = 0;
 FUNC_4(VAR_2, VAR_4);
 FUNC_5(VAR_2);

 VAR_5 = VAR_4->len / 4;
 FUNC_0(VAR_8->base + VAR_1, VAR_4->tx_buf, VAR_5);

 VAR_6 = VAR_4->len % 4;
 if (VAR_6 > 0) {
  VAR_7 = 0;
  FUNC_1(&VAR_7, VAR_4->tx_buf + (VAR_5 * 4), VAR_6);
  FUNC_7(VAR_7, VAR_8->base + VAR_1);
 }

 FUNC_3(VAR_2);

 return 1;
}
