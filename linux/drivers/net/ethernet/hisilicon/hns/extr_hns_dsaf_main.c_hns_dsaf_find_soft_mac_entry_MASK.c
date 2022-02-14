
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {scalar_t__ val; } ;
struct TYPE_7__ {scalar_t__ val; } ;
struct dsaf_drv_tbl_tcam_key {TYPE_5__ low; TYPE_2__ high; } ;
struct TYPE_8__ {scalar_t__ val; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_9__ {TYPE_3__ low; TYPE_1__ high; } ;
struct dsaf_drv_soft_mac_tbl {scalar_t__ index; TYPE_4__ tcam_key; } ;
struct dsaf_drv_priv {struct dsaf_drv_soft_mac_tbl* soft_mac_tbl; } ;
struct dsaf_device {scalar_t__ tcam_max_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct dsaf_device*) ;

__attribute__((used)) static u16 FUNC_1(
 struct dsaf_device *VAR_1,
 struct dsaf_drv_tbl_tcam_key *VAR_2)
{
 struct dsaf_drv_priv *VAR_3 =
     (struct dsaf_drv_priv *)FUNC_0(VAR_1);
 struct dsaf_drv_soft_mac_tbl *VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_3->soft_mac_tbl;
 for (VAR_5 = 0; VAR_5 < VAR_1->tcam_max_num; VAR_5++) {

  if ((VAR_4->index != VAR_0) &&
      (VAR_4->tcam_key.high.val == VAR_2->high.val) &&
      (VAR_4->tcam_key.low.val == VAR_2->low.val))

   return VAR_4->index;

  VAR_4++;
 }
 return VAR_0;
}
