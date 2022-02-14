
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct enetc_si {TYPE_1__* pdev; } ;
struct enetc_cbd {int cmd; int cls; void** addr; int length; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (scalar_t__*,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 scalar_t__* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *,int,scalar_t__*,int ) ;
 int FUNC_7 (struct enetc_si*,struct enetc_cbd*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct enetc_si *VAR_4, u32 *VAR_5, int VAR_6,
          bool VAR_7)
{
 struct enetc_cbd VAR_8 = {.cmd = 0};
 dma_addr_t VAR_9, VAR_10;
 u8 *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_6 < VAR_3)

  return -VAR_0;

 VAR_11 = FUNC_5(&VAR_4->pdev->dev, VAR_6 + VAR_3,
     &VAR_9, VAR_2);
 if (!VAR_11) {
  FUNC_4(&VAR_4->pdev->dev, "DMA mapping of RSS table failed!\n");
  return -VAR_1;
 }
 VAR_10 = FUNC_0(VAR_9, VAR_3);
 VAR_12 = FUNC_1(VAR_11, VAR_3);

 if (!VAR_7)
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
   VAR_12[VAR_14] = (u8)(VAR_5[VAR_14]);


 VAR_8.cmd = VAR_7 ? 2 : 1;
 VAR_8.cls = 3;
 VAR_8.length = FUNC_2(VAR_6);

 VAR_8.addr[0] = FUNC_3(FUNC_8(VAR_10));
 VAR_8.addr[1] = FUNC_3(FUNC_9(VAR_10));

 VAR_13 = FUNC_7(VAR_4, &VAR_8);
 if (VAR_13)
  FUNC_4(&VAR_4->pdev->dev, "RSS cmd failed (%d)!", VAR_13);

 if (VAR_7)
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
   VAR_5[VAR_14] = VAR_12[VAR_14];

 FUNC_6(&VAR_4->pdev->dev, VAR_6 + VAR_3, VAR_11, VAR_9);

 return VAR_13;
}
