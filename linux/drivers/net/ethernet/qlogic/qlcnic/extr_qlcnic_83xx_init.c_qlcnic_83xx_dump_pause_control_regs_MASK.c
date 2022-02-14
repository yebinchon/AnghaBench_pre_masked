
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int,int*) ;
 int FUNC_1 (struct qlcnic_adapter*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 int VAR_16 = 0;

 VAR_13 = FUNC_0(VAR_10, VAR_9, &VAR_16);
 if (VAR_16 == -VAR_0)
  return;
 FUNC_2(&VAR_10->pdev->dev, "SRE-Shim Ctrl:0x%x\n", VAR_13);

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  if (VAR_12 == 0) {
   FUNC_2(&VAR_10->pdev->dev,
     "Port 0 RxB Pause Threshold Regs[TC7..TC0]:");
   VAR_15 = VAR_3;
  } else if (VAR_12 == 1) {
   FUNC_2(&VAR_10->pdev->dev,
     "Port 1 RxB Pause Threshold Regs[TC7..TC0]:");
   VAR_15 = VAR_6;
  }
  for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
   VAR_13 = FUNC_0(VAR_10, VAR_15 + (VAR_11 * 0x4), &VAR_16);
   if (VAR_16 == -VAR_0)
    return;
   FUNC_2(&VAR_10->pdev->dev, "0x%x  ", VAR_13);
  }
  FUNC_2(&VAR_10->pdev->dev, "\n");
 }

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  if (VAR_12 == 0) {
   FUNC_2(&VAR_10->pdev->dev,
     "Port 0 RxB TC Max Cell Registers[4..1]:");
   VAR_15 = VAR_1;
  } else if (VAR_12 == 1) {
   FUNC_2(&VAR_10->pdev->dev,
     "Port 1 RxB TC Max Cell Registers[4..1]:");
   VAR_15 = VAR_4;
  }
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   VAR_13 = FUNC_0(VAR_10, VAR_15 + (VAR_11 * 0x4), &VAR_16);
   if (VAR_16 == -VAR_0)
    return;
   FUNC_2(&VAR_10->pdev->dev, "0x%x  ", VAR_13);
  }
  FUNC_2(&VAR_10->pdev->dev, "\n");
 }

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  if (VAR_12 == 0) {
   FUNC_2(&VAR_10->pdev->dev,
     "Port 0 RxB Rx TC Stats[TC7..TC0]:");
   VAR_15 = VAR_2;
  } else if (VAR_12 == 1) {
   FUNC_2(&VAR_10->pdev->dev,
     "Port 1 RxB Rx TC Stats[TC7..TC0]:");
   VAR_15 = VAR_5;
  }
  for (VAR_11 = 7; VAR_11 >= 0; VAR_11--) {
   VAR_13 = FUNC_0(VAR_10, VAR_15, &VAR_16);
   if (VAR_16 == -VAR_0)
    return;
   VAR_13 &= ~(0x7 << 29);
   FUNC_1(VAR_10, VAR_15, (VAR_13 | (VAR_11 << 29)));
   VAR_13 = FUNC_0(VAR_10, VAR_15, &VAR_16);
   if (VAR_16 == -VAR_0)
    return;
   FUNC_2(&VAR_10->pdev->dev, "0x%x  ", VAR_13);
  }
  FUNC_2(&VAR_10->pdev->dev, "\n");
 }

 VAR_13 = FUNC_0(VAR_10, VAR_7, &VAR_16);
 if (VAR_16 == -VAR_0)
  return;
 VAR_14 = FUNC_0(VAR_10, VAR_8, &VAR_16);
 if (VAR_16 == -VAR_0)
  return;
 FUNC_2(&VAR_10->pdev->dev,
   "IFB-Pause Thresholds: Port 2:0x%x, Port 3:0x%x\n",
   VAR_13, VAR_14);
}
