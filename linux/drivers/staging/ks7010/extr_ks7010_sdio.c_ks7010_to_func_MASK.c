
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct ks_wlan_private {struct ks_sdio_card* if_hw; } ;
struct ks_sdio_card {struct sdio_func* func; } ;



__attribute__((used)) static struct sdio_func *FUNC_0(struct ks_wlan_private *VAR_0)
{
 struct ks_sdio_card *VAR_1 = VAR_0->if_hw;

 return VAR_1->func;
}
