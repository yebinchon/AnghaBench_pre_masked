
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_sta_node {int dummy; } ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {int fw_cap_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct mwifiex_sta_node* FUNC_1 (struct mwifiex_private*,int ) ;

u8 FUNC_2(struct mwifiex_private *VAR_1)
{
 struct mwifiex_sta_node *VAR_2;

 if (!VAR_1 || !FUNC_0(VAR_1->adapter->fw_cap_info))
  return 0;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  return 1;

 return 0;
}
