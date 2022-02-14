
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfcmrvl_spi_drv_data {TYPE_1__* spi; int priv; int nci_spi; int handshake_completion; int flags; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct nfcmrvl_spi_drv_data *VAR_4 = VAR_3;
 struct sk_buff *VAR_5;





 if (FUNC_4(VAR_1, &VAR_4->flags)) {
  FUNC_0(&VAR_4->handshake_completion);
  return VAR_0;
 }



 VAR_5 = FUNC_1(VAR_4->nci_spi);
 if (!VAR_5) {
  FUNC_2(&VAR_4->spi->dev, "failed to read spi packet");
  return VAR_0;
 }

 if (FUNC_3(VAR_4->priv, VAR_5) < 0)
  FUNC_2(&VAR_4->spi->dev, "corrupted RX packet");

 return VAR_0;
}
