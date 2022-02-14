
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_fw_dump {scalar_t__ use_pex_dma; } ;
struct TYPE_7__ {int mask; } ;
struct __mem {int dummy; } ;
struct TYPE_6__ {struct __mem mem; } ;
struct qlcnic_dump_entry {TYPE_3__ hdr; TYPE_2__ region; } ;
struct qlcnic_adapter {TYPE_1__* pdev; TYPE_4__* ahw; } ;
struct device {int dummy; } ;
typedef int __le32 ;
struct TYPE_8__ {struct qlcnic_fw_dump fw_dump; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,struct __mem*,int *,int*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct __mem*,int *,int*) ;

__attribute__((used)) static u32 FUNC_3(struct qlcnic_adapter *VAR_0,
         struct qlcnic_dump_entry *VAR_1, __le32 *VAR_2)
{
 struct qlcnic_fw_dump *VAR_3 = &VAR_0->ahw->fw_dump;
 struct device *VAR_4 = &VAR_0->pdev->dev;
 struct __mem *VAR_5 = &VAR_1->region.mem;
 u32 VAR_6;
 int VAR_7 = 0;

 if (VAR_3->use_pex_dma) {
  VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_2,
            &VAR_7);
  if (VAR_7)
   FUNC_0(VAR_4,
     "Failed to read memory dump using PEX DMA: mask[0x%x]\n",
     VAR_1->hdr.mask);
  else
   return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_0, VAR_5, VAR_2, &VAR_7);
 if (VAR_7) {
  FUNC_0(VAR_4,
    "Failed to read memory dump using test agent method: mask[0x%x]\n",
    VAR_1->hdr.mask);
  return 0;
 } else {
  return VAR_6;
 }
}
