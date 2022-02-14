
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_device {int softmac_features; int dev; int (* rtllib_start_hw_scan ) (int ) ;scalar_t__ sync_scan_hurryup; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtllib_device*) ;
 scalar_t__ FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (struct rtllib_device*) ;
 int FUNC_3 (struct rtllib_device*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct rtllib_device *VAR_1, u8 VAR_2)
{
 if (FUNC_1(VAR_1)) {
  if (FUNC_0(VAR_1))
   FUNC_2(VAR_1);
 }
 VAR_1->sync_scan_hurryup = 0;
 if (VAR_1->softmac_features & VAR_0) {
  FUNC_3(VAR_1, VAR_2);
 } else {
  if (VAR_1->rtllib_start_hw_scan)
   VAR_1->rtllib_start_hw_scan(VAR_1->dev);
 }
}
