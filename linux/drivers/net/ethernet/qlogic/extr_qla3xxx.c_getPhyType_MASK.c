
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ql3_adapter {int ndev; } ;
typedef enum PHY_DEVICE_TYPE { ____Placeholder_PHY_DEVICE_TYPE } PHY_DEVICE_TYPE ;
struct TYPE_2__ {int phyIdOUI; int phyIdModel; int phyDevice; int name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static enum PHY_DEVICE_TYPE FUNC_1(struct ql3_adapter *VAR_5,
           u16 VAR_6, u16 VAR_7)
{
 enum PHY_DEVICE_TYPE VAR_8 = VAR_4;
 u32 VAR_9;
 u16 VAR_10;
 int VAR_11;

 if (VAR_6 == 0xffff)
  return VAR_8;

 if (VAR_7 == 0xffff)
  return VAR_8;


 VAR_9 = (VAR_6 << 6) | ((VAR_7 & VAR_3) >> 10);

 VAR_10 = (VAR_7 & VAR_2) >> 4;


 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if ((VAR_9 == VAR_1[VAR_11].phyIdOUI) &&
      (VAR_10 == VAR_1[VAR_11].phyIdModel)) {
   FUNC_0(VAR_5->ndev, "Phy: %s\n",
        VAR_1[VAR_11].name);
   VAR_8 = VAR_1[VAR_11].phyDevice;
   break;
  }
 }

 return VAR_8;
}
