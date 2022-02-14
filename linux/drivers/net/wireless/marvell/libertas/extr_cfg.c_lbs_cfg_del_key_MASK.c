
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {scalar_t__* wep_key_len; } ;


 int FUNC_0 (char*,int,int const*) ;
 int FUNC_1 (struct lbs_private*) ;
 struct lbs_private* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0, struct net_device *VAR_1,
      u8 VAR_2, bool VAR_3, const u8 *VAR_4)
{

 FUNC_0("del_key: key_idx %d, mac_addr %pM\n",
        VAR_2, VAR_4);
 return 0;
}
