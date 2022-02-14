
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ iw_mode; int dev; int bssid; } ;
typedef TYPE_2__ local_info_t ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int *,int) ;
 int FUNC_5 (int ,int ,union iwreq_data*,int *) ;

int FUNC_6(local_info_t *VAR_3, u16 VAR_4)
{
 union iwreq_data VAR_5;
 int VAR_6;
 __le16 VAR_7 = FUNC_0(VAR_4);

 if (VAR_3->iw_mode != VAR_1 ||
     FUNC_3(VAR_3->bssid) ||
     FUNC_2(VAR_3->bssid, "\x44\x44\x44\x44\x44\x44"))
  return 0;

 VAR_6 = FUNC_4(VAR_3, VAR_3->bssid, VAR_0,
       (u8 *) &VAR_7, 2);
 FUNC_1(VAR_5.ap_addr.sa_data);
 FUNC_5(VAR_3->dev, VAR_2, &VAR_5, ((void*)0));
 return VAR_6;
}
