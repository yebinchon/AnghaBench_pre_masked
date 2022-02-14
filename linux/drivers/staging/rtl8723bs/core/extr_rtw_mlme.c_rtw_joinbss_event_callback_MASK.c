
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlan_network {int join_res; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*) ;

void FUNC_2(struct adapter *VAR_0, u8 *VAR_1)
{
 struct wlan_network *VAR_2 = (struct wlan_network *)VAR_1;

 FUNC_0(VAR_0, VAR_2->join_res);

 FUNC_1(VAR_0);
}
