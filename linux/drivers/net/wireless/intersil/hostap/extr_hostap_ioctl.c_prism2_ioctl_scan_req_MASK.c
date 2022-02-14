
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ssid_len; int ssid; } ;
struct TYPE_5__ {TYPE_2__ scan_req; } ;
struct prism2_hostapd_param {TYPE_1__ u; } ;
struct TYPE_7__ {scalar_t__ iw_mode; scalar_t__ sta_fw_ver; int dev; int dev_enabled; } ;
typedef TYPE_3__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(local_info_t *VAR_4,
     struct prism2_hostapd_param *VAR_5)
{

 if ((VAR_4->iw_mode != VAR_3 &&
      VAR_4->iw_mode != VAR_2) ||
     (VAR_4->sta_fw_ver < FUNC_0(1,3,1)))
  return -VAR_1;

 if (!VAR_4->dev_enabled)
  return -VAR_0;

 return FUNC_1(VAR_4->dev, VAR_5->u.scan_req.ssid,
           VAR_5->u.scan_req.ssid_len);



}
