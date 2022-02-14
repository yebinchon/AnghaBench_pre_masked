
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_device {int softmac_features; scalar_t__ active_scan; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtllib_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct rtllib_device *VAR_1, u8 VAR_2)
{
 if (VAR_1->active_scan && (VAR_1->softmac_features &
     VAR_0)) {
  FUNC_0(VAR_1, 0);
  FUNC_0(VAR_1, 0);
 }
}
