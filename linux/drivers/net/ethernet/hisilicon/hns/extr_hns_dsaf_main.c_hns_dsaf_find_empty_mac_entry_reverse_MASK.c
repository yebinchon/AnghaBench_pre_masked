
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dsaf_drv_soft_mac_tbl {scalar_t__ index; } ;
struct dsaf_drv_priv {struct dsaf_drv_soft_mac_tbl* soft_mac_tbl; } ;
struct dsaf_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct dsaf_drv_priv* FUNC_0 (struct dsaf_device*) ;

__attribute__((used)) static u16 FUNC_1(struct dsaf_device *VAR_2)
{
 struct dsaf_drv_priv *VAR_3 = FUNC_0(VAR_2);
 struct dsaf_drv_soft_mac_tbl *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->soft_mac_tbl + (VAR_1 - 1);
 for (VAR_5 = (VAR_1 - 1); VAR_5 > 0; VAR_5--) {

  if (VAR_4->index == VAR_0)
   return VAR_5;
  VAR_4--;
 }
 return VAR_0;
}
