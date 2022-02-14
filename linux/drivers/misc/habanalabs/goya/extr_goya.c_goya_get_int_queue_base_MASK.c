
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int sram_base_address; } ;
struct hl_device {int dev; scalar_t__* pcie_bar; TYPE_1__ asic_prop; } ;
typedef int dma_addr_t ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;

void *FUNC_1(struct hl_device *VAR_12, u32 VAR_13,
    dma_addr_t *VAR_14, u16 *VAR_15)
{
 void *VAR_16;
 u32 VAR_17;

 *VAR_14 = VAR_12->asic_prop.sram_base_address;

 VAR_16 = (void *) VAR_12->pcie_bar[VAR_2];

 switch (VAR_13) {
 case 136:
  VAR_17 = VAR_0;
  *VAR_15 = VAR_1;
  break;
 case 135:
  VAR_17 = VAR_3;
  *VAR_15 = VAR_11;
  break;
 case 134:
  VAR_17 = VAR_4;
  *VAR_15 = VAR_11;
  break;
 case 133:
  VAR_17 = VAR_5;
  *VAR_15 = VAR_11;
  break;
 case 132:
  VAR_17 = VAR_6;
  *VAR_15 = VAR_11;
  break;
 case 131:
  VAR_17 = VAR_7;
  *VAR_15 = VAR_11;
  break;
 case 130:
  VAR_17 = VAR_8;
  *VAR_15 = VAR_11;
  break;
 case 129:
  VAR_17 = VAR_9;
  *VAR_15 = VAR_11;
  break;
 case 128:
  VAR_17 = VAR_10;
  *VAR_15 = VAR_11;
  break;
 default:
  FUNC_0(VAR_12->dev, "Got invalid queue id %d\n", VAR_13);
  return ((void*)0);
 }

 VAR_16 += VAR_17;
 *VAR_14 += VAR_17;

 return VAR_16;
}
