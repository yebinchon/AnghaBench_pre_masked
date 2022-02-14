
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct slic_upr {int dummy; } ;
struct slic_shmem_data {int isr; } ;
struct slic_shmem {int isr_paddr; struct slic_shmem_data* shmem_data; } ;
struct slic_oasis_eeprom {int eeprom_code_size; int * mac2; int * mac; } ;
struct slic_mojave_eeprom {int eeprom_code_size; int * mac2; int * mac; } ;
struct slic_device {scalar_t__ model; TYPE_2__* pdev; TYPE_1__* netdev; struct slic_shmem shmem; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; int devfn; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,char*) ;
 unsigned char* FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *,int ,unsigned char*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct slic_upr*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 struct slic_upr* FUNC_10 (struct slic_device*) ;
 int FUNC_11 (unsigned char*,unsigned int) ;
 int FUNC_12 (struct slic_device*) ;
 int FUNC_13 (struct slic_device*,int ,int ) ;
 int FUNC_14 (struct slic_device*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct slic_device *VAR_12)
{
 unsigned int VAR_13 = FUNC_0(VAR_12->pdev->devfn);
 struct slic_shmem *VAR_14 = &VAR_12->shmem;
 struct slic_shmem_data *VAR_15 = VAR_14->shmem_data;
 const unsigned int VAR_16 = 5000;
 unsigned int VAR_17;
 unsigned char *VAR_18;
 struct slic_upr *VAR_19;
 unsigned int VAR_20 = 0;
 dma_addr_t VAR_21;
 int VAR_22 = 0;
 u8 *VAR_23[2];

 VAR_18 = FUNC_2(&VAR_12->pdev->dev, VAR_4,
        &VAR_21, VAR_3);
 if (!VAR_18)
  return -VAR_1;

 FUNC_14(VAR_12, VAR_8, VAR_5);

 FUNC_14(VAR_12, VAR_9, FUNC_8(VAR_14->isr_paddr));

 VAR_22 = FUNC_13(VAR_12, VAR_11, VAR_21);
 if (!VAR_22) {
  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
   if (FUNC_7(VAR_15->isr) & VAR_6)
    break;
   FUNC_9(1);
  }
  if (VAR_20 == VAR_16) {
   FUNC_1(&VAR_12->pdev->dev,
    "timed out while waiting for eeprom data\n");
   VAR_22 = -VAR_2;
  }
  VAR_19 = FUNC_10(VAR_12);
  FUNC_5(VAR_19);
 }

 FUNC_14(VAR_12, VAR_9, 0);
 FUNC_14(VAR_12, VAR_10, 0);
 FUNC_12(VAR_12);

 if (VAR_22)
  goto free_eeprom;

 if (VAR_12->model == VAR_7) {
  struct slic_oasis_eeprom *VAR_24;

  VAR_24 = (struct slic_oasis_eeprom *)VAR_18;
  VAR_23[0] = VAR_24->mac;
  VAR_23[1] = VAR_24->mac2;
  VAR_17 = FUNC_6(VAR_24->eeprom_code_size);
 } else {
  struct slic_mojave_eeprom *VAR_25;

  VAR_25 = (struct slic_mojave_eeprom *)VAR_18;
  VAR_23[0] = VAR_25->mac;
  VAR_23[1] = VAR_25->mac2;
  VAR_17 = FUNC_6(VAR_25->eeprom_code_size);
 }

 if (!FUNC_11(VAR_18, VAR_17)) {
  FUNC_1(&VAR_12->pdev->dev, "invalid checksum in eeprom\n");
  VAR_22 = -VAR_0;
  goto free_eeprom;
 }

 FUNC_4(VAR_12->netdev->dev_addr, VAR_23[VAR_13]);
free_eeprom:
 FUNC_3(&VAR_12->pdev->dev, VAR_4, VAR_18, VAR_21);

 return VAR_22;
}
