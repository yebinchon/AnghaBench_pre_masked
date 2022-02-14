
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
typedef enum baseband_config_type { ____Placeholder_baseband_config_type } baseband_config_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_8,
    enum baseband_config_type VAR_9)
{
 u32 VAR_10;

 if (VAR_9 == VAR_2) {
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 += 2) {
   FUNC_1(VAR_8, VAR_6[VAR_10],
      VAR_7,
      VAR_6[VAR_10+1]);
   FUNC_0(VAR_3,
     "i: %x, Rtl819xUsbPHY_REGArray[0]=%x Rtl819xUsbPHY_REGArray[1]=%x\n",
     VAR_10, VAR_6[VAR_10],
     VAR_6[VAR_10+1]);
  }
 } else if (VAR_9 == VAR_1) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10 += 2) {
   FUNC_1(VAR_8, VAR_5[VAR_10],
      VAR_7, VAR_5[VAR_10+1]);
   FUNC_0(VAR_3,
     "i: %x, Rtl8192UsbAGCTAB_Array[0]=%x Rtl8192UsbAGCTAB_Array[1]=%x\n",
     VAR_10, VAR_5[VAR_10],
     VAR_5[VAR_10+1]);
  }
 }
}
