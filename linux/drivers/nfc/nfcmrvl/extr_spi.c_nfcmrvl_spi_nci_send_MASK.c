
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfcmrvl_spi_drv_data {int handshake_completion; int nci_spi; int flags; } ;
struct nfcmrvl_private {int dev; struct nfcmrvl_spi_drv_data* drv_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct sk_buff*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct nfcmrvl_private *VAR_1,
    struct sk_buff *VAR_2)
{
 struct nfcmrvl_spi_drv_data *VAR_3 = VAR_1->drv_data;
 int VAR_4;


 FUNC_2(&VAR_3->handshake_completion);
 FUNC_3(VAR_0, &VAR_3->flags);





 FUNC_4(VAR_2, 1);


 VAR_4 = FUNC_0(VAR_3->nci_spi, &VAR_3->handshake_completion,
      VAR_2);
 if (VAR_4)
  FUNC_1(VAR_1->dev, "spi_send failed %d", VAR_4);

 return VAR_4;
}
