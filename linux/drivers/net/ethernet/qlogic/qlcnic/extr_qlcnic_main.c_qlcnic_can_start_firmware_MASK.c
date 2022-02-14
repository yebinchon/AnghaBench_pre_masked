
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {int dev_init_timeo; int portnum; TYPE_1__* pdev; int state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct qlcnic_adapter*,int ) ;
 int FUNC_6 (struct qlcnic_adapter*,int ,int) ;
 int VAR_6 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct qlcnic_adapter*) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int
FUNC_14(struct qlcnic_adapter *VAR_7)
{
 u32 VAR_8, VAR_9;
 u8 VAR_10 = VAR_7->dev_init_timeo;
 u8 VAR_11 = VAR_7->portnum;
 u8 VAR_12;

 if (FUNC_13(VAR_6, &VAR_7->state))
  return 1;

 if (FUNC_9(VAR_7))
  return -1;

 VAR_8 = FUNC_5(VAR_7, VAR_2);
 if (!(VAR_8 & (1 << (VAR_11 * 4)))) {
  FUNC_3(VAR_8, VAR_11);
  FUNC_6(VAR_7, VAR_2, VAR_8);
 }

 VAR_9 = FUNC_5(VAR_7, VAR_1);
 FUNC_0(VAR_7, VAR_0, "Device state = %u\n", VAR_9);

 switch (VAR_9) {
 case 134:
  FUNC_6(VAR_7, VAR_1,
        132);
  FUNC_6(VAR_7, VAR_3,
        VAR_5);
  FUNC_12(VAR_7, 0);
  FUNC_10(VAR_7);
  return 1;

 case 128:
  VAR_12 = FUNC_11(VAR_7);
  FUNC_10(VAR_7);
  return VAR_12;

 case 130:
  VAR_8 = FUNC_5(VAR_7, VAR_4);
  FUNC_4(VAR_8, VAR_11);
  FUNC_6(VAR_7, VAR_4, VAR_8);
  break;

 case 131:
  VAR_8 = FUNC_5(VAR_7, VAR_4);
  FUNC_2(VAR_8, VAR_11);
  FUNC_6(VAR_7, VAR_4, VAR_8);
  break;

 case 133:
  FUNC_7(&VAR_7->pdev->dev, "Device in failed state.\n");
  FUNC_10(VAR_7);
  return -1;

 case 132:
 case 129:
  break;
 }

 FUNC_10(VAR_7);

 do {
  FUNC_8(1000);
  VAR_9 = FUNC_5(VAR_7, VAR_1);

  if (VAR_9 == 129)
   continue;
 } while ((VAR_9 != 128) && --VAR_10);

 if (!VAR_10) {
  FUNC_7(&VAR_7->pdev->dev,
   "Waiting for device to initialize timeout\n");
  return -1;
 }

 if (FUNC_9(VAR_7))
  return -1;

 VAR_8 = FUNC_5(VAR_7, VAR_4);
 FUNC_1(VAR_8, VAR_11);
 FUNC_6(VAR_7, VAR_4, VAR_8);

 VAR_12 = FUNC_11(VAR_7);
 FUNC_10(VAR_7);

 return VAR_12;
}
