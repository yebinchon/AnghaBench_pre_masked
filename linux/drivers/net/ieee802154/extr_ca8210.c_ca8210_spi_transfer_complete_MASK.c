
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cas_control {scalar_t__* tx_in_buf; scalar_t__* tx_buf; struct ca8210_priv* priv; } ;
struct ca8210_priv {int retries; int spi_transfer_complete; TYPE_1__* spi; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct cas_control*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (struct cas_control*) ;
 int FUNC_9 (int *,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_10(void *VAR_3)
{
 struct cas_control *VAR_4 = VAR_3;
 struct ca8210_priv *VAR_5 = VAR_4->priv;
 bool VAR_6 = 0;
 int VAR_7;
 u8 VAR_8[VAR_0];

 if (
  VAR_4->tx_in_buf[0] == VAR_2 ||
  (VAR_4->tx_in_buf[0] == VAR_1 &&
  VAR_4->tx_in_buf[1] == VAR_2)
 ) {

  FUNC_6(&VAR_5->spi->dev, "ca8210 was busy during attempted write\n");
  if (VAR_4->tx_buf[0] == VAR_1) {
   FUNC_7(
    &VAR_5->spi->dev,
    "IRQ servicing NACKd, dropping transfer\n"
   );
   FUNC_8(VAR_4);
   return;
  }
  if (VAR_5->retries > 3) {
   FUNC_5(&VAR_5->spi->dev, "too many retries!\n");
   FUNC_8(VAR_4);
   FUNC_0(VAR_5->spi);
   return;
  }
  FUNC_9(VAR_8, VAR_4->tx_buf, VAR_0);
  FUNC_8(VAR_4);
  FUNC_2(
   VAR_5->spi,
   VAR_8,
   VAR_0
  );
  VAR_5->retries++;
  FUNC_6(&VAR_5->spi->dev, "retried spi write\n");
  return;
 } else if (
   VAR_4->tx_in_buf[0] != VAR_1 &&
   VAR_4->tx_in_buf[0] != VAR_2
  ) {
  VAR_6 = 1;
 }

 if (VAR_6) {
  FUNC_4(&VAR_5->spi->dev, "READ CMD DURING TX\n");
  for (VAR_7 = 0; VAR_7 < VAR_4->tx_in_buf[1] + 2; VAR_7++)
   FUNC_4(
    &VAR_5->spi->dev,
    "%#03x\n",
    VAR_4->tx_in_buf[VAR_7]
   );
  FUNC_1(VAR_4);
 }
 FUNC_3(&VAR_5->spi_transfer_complete);
 FUNC_8(VAR_4);
 VAR_5->retries = 0;
}
