
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {int fw_cap_info; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mwifiex_private*) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*) ;

u8 FUNC_3(struct mwifiex_private *VAR_0)
{
 if (!VAR_0 || !FUNC_0(VAR_0->adapter->fw_cap_info))
  return 1;

 if (FUNC_1(VAR_0) ||
     FUNC_2(VAR_0))
  return 0;

 return 1;
}
