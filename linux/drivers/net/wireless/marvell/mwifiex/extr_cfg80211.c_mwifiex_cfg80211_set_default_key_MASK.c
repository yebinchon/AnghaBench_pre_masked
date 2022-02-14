
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int wep_enabled; } ;
struct mwifiex_private {scalar_t__ bss_type; int adapter; int wep_key_curr_index; TYPE_1__ sec_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 struct mwifiex_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,int *,int *,int ,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_3, struct net_device *VAR_4,
     u8 VAR_5, bool VAR_6,
     bool VAR_7)
{
 struct mwifiex_private *VAR_8 = FUNC_1(VAR_4);


 if (!VAR_8->sec_info.wep_enabled)
  return 0;

 if (VAR_8->bss_type == VAR_2) {
  VAR_8->wep_key_curr_index = VAR_5;
 } else if (FUNC_2(VAR_8, ((void*)0), ((void*)0), 0, VAR_5,
          ((void*)0), 0)) {
  FUNC_0(VAR_8->adapter, VAR_1, "set default Tx key index\n");
  return -VAR_0;
 }

 return 0;
}
