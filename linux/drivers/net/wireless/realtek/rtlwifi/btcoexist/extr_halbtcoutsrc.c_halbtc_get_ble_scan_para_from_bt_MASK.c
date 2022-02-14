
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int bt_ble_scan_para; } ;
struct btc_coexist {TYPE_1__ bt_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct btc_coexist*,int ,int *,int,int) ;

__attribute__((used)) static u32 FUNC_1(void *VAR_1, u8 VAR_2)
{
 struct btc_coexist *VAR_3 = (struct btc_coexist *)VAR_1;
 u8 VAR_4[4] = {0};


 FUNC_0(VAR_3, VAR_0,
        VAR_4, 4, 200);



 return VAR_3->bt_info.bt_ble_scan_para;
}
