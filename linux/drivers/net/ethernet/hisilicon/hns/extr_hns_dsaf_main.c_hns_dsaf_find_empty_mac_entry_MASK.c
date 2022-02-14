
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct dsaf_drv_soft_mac_tbl {scalar_t__ index; } ;
struct dsaf_drv_priv {struct dsaf_drv_soft_mac_tbl* soft_mac_tbl; } ;
struct dsaf_device {scalar_t__ tcam_max_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct dsaf_device*) ;

__attribute__((used)) static u16 FUNC_1(struct dsaf_device *VAR_1)
{
 struct dsaf_drv_priv *VAR_2 =
     (struct dsaf_drv_priv *)FUNC_0(VAR_1);
 struct dsaf_drv_soft_mac_tbl *VAR_3;
 u32 VAR_4;

 VAR_3 = VAR_2->soft_mac_tbl;
 for (VAR_4 = 0; VAR_4 < VAR_1->tcam_max_num; VAR_4++) {

  if (VAR_3->index == VAR_0)

   return VAR_4;

  VAR_3++;
 }
 return VAR_0;
}
