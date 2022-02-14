
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_2__ {void* bt_hci_ver; void* bt_real_fw_ver; } ;
struct btc_coexist {TYPE_1__ bt_info; } ;


 int FUNC_0 (struct btc_coexist*) ;

void FUNC_1(struct btc_coexist *VAR_0,
       u16 VAR_1, u16 VAR_2)
{
 if (!FUNC_0(VAR_0))
  return;

 VAR_0->bt_info.bt_real_fw_ver = VAR_2;
 VAR_0->bt_info.bt_hci_ver = VAR_1;
}
