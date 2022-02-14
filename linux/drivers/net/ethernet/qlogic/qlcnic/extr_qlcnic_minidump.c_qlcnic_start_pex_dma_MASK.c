
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_3__* ahw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct __mem {int start_dma_cmd; int desc_card_addr; } ;
struct TYPE_5__ {void* tmpl_hdr; } ;
struct TYPE_6__ {TYPE_2__ fw_dump; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*,void*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_4 (struct qlcnic_adapter*,scalar_t__,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_6,
    struct __mem *VAR_7)
{
 struct device *VAR_8 = &VAR_6->pdev->dev;
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 void *VAR_15;

 VAR_15 = VAR_6->ahw->fw_dump.tmpl_hdr;
 VAR_9 = FUNC_2(VAR_6, VAR_15,
     VAR_2);
 VAR_10 = FUNC_0(VAR_9);

 VAR_11 = VAR_10 + VAR_4;
 VAR_13 = FUNC_4(VAR_6, VAR_11, VAR_7->desc_card_addr);
 if (VAR_13)
  return VAR_13;

 VAR_11 = VAR_10 + VAR_3;
 VAR_13 = FUNC_4(VAR_6, VAR_11, 0);
 if (VAR_13)
  return VAR_13;

 VAR_11 = VAR_10 + VAR_5;
 VAR_13 = FUNC_4(VAR_6, VAR_11, VAR_7->start_dma_cmd);
 if (VAR_13)
  return VAR_13;


 VAR_11 = VAR_10 + VAR_5;
 for (VAR_12 = 0; VAR_12 < 400; VAR_12++) {
  VAR_14 = FUNC_3(VAR_6, VAR_11);

  if (VAR_14 & VAR_0)
   FUNC_5(250, 500);
  else
   break;
 }

 if (VAR_12 >= 400) {
  FUNC_1(VAR_8, "PEX DMA operation timed out");
  VAR_13 = -VAR_1;
 }

 return VAR_13;
}
