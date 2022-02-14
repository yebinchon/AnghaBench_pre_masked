
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {int fw_cap_info; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_1, u16 VAR_2)
{
 if (!FUNC_0(VAR_1->adapter->fw_cap_info)) {
  switch (VAR_2) {
  case 128:
  case 130:
  case 131:
  case 129:
   return -VAR_0;
  default:
   break;
  }
 }

 return 0;
}
