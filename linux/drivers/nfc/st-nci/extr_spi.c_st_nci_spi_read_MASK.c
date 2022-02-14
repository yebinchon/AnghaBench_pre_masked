
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st_nci_spi_phy {TYPE_1__* ndlc; struct spi_device* spi_dev; } ;
struct spi_transfer {int* rx_buf; int len; } ;
struct spi_device {int dev; } ;
struct sk_buff {int data; } ;
typedef int __be16 ;
struct TYPE_2__ {int hard_fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int,int*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct spi_device*,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_8(struct st_nci_spi_phy *VAR_6,
   struct sk_buff **VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 u8 VAR_10[VAR_4];
 struct spi_device *VAR_11 = VAR_6->spi_dev;
 struct spi_transfer VAR_12 = {
  .rx_buf = VAR_10,
  .len = VAR_5,
 };

 VAR_8 = FUNC_7(VAR_11, &VAR_12, 1);
 if (VAR_8 < 0)
  return -VAR_2;

 VAR_9 = FUNC_1(*(__be16 *) (VAR_10 + 2));
 if (VAR_9 > VAR_4) {
  FUNC_4(&VAR_11->dev, "invalid frame len\n");
  VAR_6->ndlc->hard_fault = 1;
  return -VAR_0;
 }

 *VAR_7 = FUNC_0(VAR_5 + VAR_9, VAR_3);
 if (*VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_6(*VAR_7, VAR_5);
 FUNC_5(*VAR_7, VAR_5);
 FUNC_3((*VAR_7)->data, VAR_10, VAR_5);

 if (!VAR_9)
  return 0;

 VAR_12.len = VAR_9;
 VAR_8 = FUNC_7(VAR_11, &VAR_12, 1);
 if (VAR_8 < 0) {
  FUNC_2(*VAR_7);
  return -VAR_2;
 }

 FUNC_5(*VAR_7, VAR_9);
 FUNC_3((*VAR_7)->data + VAR_5, VAR_10, VAR_9);

 return 0;
}
