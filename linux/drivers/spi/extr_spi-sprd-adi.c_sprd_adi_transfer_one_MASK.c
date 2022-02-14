
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sprd_adi {int dev; scalar_t__ slave_pbase; } ;
struct spi_transfer {scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct sprd_adi* FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct sprd_adi*,scalar_t__) ;
 int FUNC_3 (struct sprd_adi*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct sprd_adi*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_controller *VAR_1,
     struct spi_device *VAR_2,
     struct spi_transfer *VAR_3)
{
 struct sprd_adi *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5, VAR_6;
 int VAR_7;

 if (VAR_3->rx_buf) {
  VAR_5 = *(u32 *)VAR_3->rx_buf + VAR_4->slave_pbase;

  VAR_7 = FUNC_2(VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_3(VAR_4, VAR_5, &VAR_6);
  if (VAR_7)
   return VAR_7;

  *(u32 *)VAR_3->rx_buf = VAR_6;
 } else if (VAR_3->tx_buf) {
  u32 *VAR_8 = (u32 *)VAR_3->tx_buf;






  VAR_5 = *VAR_8++ + VAR_4->slave_pbase;
  VAR_7 = FUNC_2(VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;

  VAR_6 = *VAR_8;
  VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);
  if (VAR_7)
   return VAR_7;
 } else {
  FUNC_0(VAR_4->dev, "no buffer for transfer\n");
  return -VAR_0;
 }

 return 0;
}
