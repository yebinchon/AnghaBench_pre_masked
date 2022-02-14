
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int softmac_features; int be_scan_inprogress; int status; scalar_t__ actscanning; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

bool FUNC_1(struct rtllib_device *VAR_2, bool VAR_3)
{
 if (VAR_2->softmac_features & VAR_0) {
  if (VAR_3)
   return VAR_2->be_scan_inprogress;
  else
   return VAR_2->actscanning || VAR_2->be_scan_inprogress;
 } else {
  return FUNC_0(VAR_1, &VAR_2->status);
 }
}
