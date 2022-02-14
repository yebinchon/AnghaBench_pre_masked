
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; int len; scalar_t__ offset; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_resp_seeprom_read* va; } ;
struct be_cmd_resp_seeprom_read {scalar_t__ seeprom_data; } ;
struct be_cmd_req_seeprom_read {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct be_adapter*,struct be_dma_mem*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 struct be_cmd_resp_seeprom_read* FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,struct be_cmd_resp_seeprom_read*,int ) ;
 scalar_t__ FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*,int ,int ,int *) ;
 int FUNC_7 (int *,scalar_t__,int ) ;
 int FUNC_8 (struct be_dma_mem*,int ,int) ;
 struct be_adapter* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6,
     struct ethtool_eeprom *VAR_7, uint8_t *VAR_8)
{
 struct be_adapter *VAR_9 = FUNC_9(VAR_6);
 struct be_dma_mem VAR_10;
 struct be_cmd_resp_seeprom_read *VAR_11;
 int VAR_12;

 if (!VAR_7->len)
  return -VAR_1;

 if (FUNC_5(VAR_9)) {
  if (FUNC_2(VAR_9))
   return FUNC_6(VAR_9, VAR_4,
          VAR_7->len, VAR_8);
  else
   return FUNC_6(VAR_9, VAR_5,
          VAR_7->len, VAR_8);
 }

 VAR_7->magic = VAR_0 | (VAR_9->pdev->device<<16);

 FUNC_8(&VAR_10, 0, sizeof(struct be_dma_mem));
 VAR_10.size = sizeof(struct be_cmd_req_seeprom_read);
 VAR_10.va = FUNC_3(&VAR_9->pdev->dev,
        VAR_10.size, &VAR_10.dma,
        VAR_3);

 if (!VAR_10.va)
  return -VAR_2;

 VAR_12 = FUNC_0(VAR_9, &VAR_10);

 if (!VAR_12) {
  VAR_11 = VAR_10.va;
  FUNC_7(VAR_8, VAR_11->seeprom_data + VAR_7->offset, VAR_7->len);
 }
 FUNC_4(&VAR_9->pdev->dev, VAR_10.size, VAR_10.va,
     VAR_10.dma);

 return FUNC_1(VAR_12);
}
