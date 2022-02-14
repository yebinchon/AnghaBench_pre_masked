
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st_nci_spi_phy {TYPE_1__* ndlc; struct spi_device* spi_dev; } ;
struct spi_transfer {int len; int * rx_buf; int tx_buf; } ;
struct spi_device {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct TYPE_2__ {scalar_t__ hard_fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct spi_device*,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_6, struct sk_buff *VAR_7)
{
 int VAR_8;
 struct st_nci_spi_phy *VAR_9 = VAR_6;
 struct spi_device *VAR_10 = VAR_9->spi_dev;
 struct sk_buff *VAR_11;
 u8 VAR_12[VAR_5 + VAR_2 +
        VAR_3 + VAR_4];
 struct spi_transfer VAR_13 = {
  .tx_buf = VAR_7->data,
  .rx_buf = VAR_12,
  .len = VAR_7->len,
 };

 if (VAR_9->ndlc->hard_fault != 0)
  return VAR_9->ndlc->hard_fault;

 VAR_8 = FUNC_4(VAR_10, &VAR_13, 1);




 if (!VAR_8) {
  VAR_11 = FUNC_0(VAR_7->len, VAR_1);
  if (!VAR_11) {
   VAR_8 = -VAR_0;
   goto exit;
  }

  FUNC_3(VAR_11, VAR_7->len);
  FUNC_1(VAR_11->data, VAR_12, VAR_7->len);
  FUNC_2(VAR_9->ndlc, VAR_11);
 }

exit:
 return VAR_8;
}
