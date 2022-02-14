
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int cmd; int reason_code; } ;
struct TYPE_4__ {TYPE_1__ mlme; } ;
struct prism2_hostapd_param {int sta_addr; TYPE_2__ u; } ;
typedef int local_info_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(local_info_t *VAR_3,
        struct prism2_hostapd_param *VAR_4)
{
 __le16 VAR_5;

 VAR_5 = FUNC_0(VAR_4->u.mlme.reason_code);
 switch (VAR_4->u.mlme.cmd) {
 case 129:
  return FUNC_1(VAR_3, VAR_4->sta_addr,
         VAR_1,
         (u8 *) &VAR_5, 2);
 case 128:
  return FUNC_1(VAR_3, VAR_4->sta_addr,
         VAR_2,
         (u8 *) &VAR_5, 2);
 default:
  return -VAR_0;
 }
}
