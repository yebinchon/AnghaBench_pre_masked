
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ bt_real_fw_ver; } ;
struct btc_coexist {TYPE_1__ bt_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct btc_coexist*,int ,int *,int,int) ;

__attribute__((used)) static u32 FUNC_1(struct btc_coexist *VAR_1)
{
 u8 VAR_2[4] = {0};

 if (VAR_1->bt_info.bt_real_fw_ver)
  goto label_done;


 FUNC_0(VAR_1, VAR_0,
        VAR_2, 4, 200);

label_done:
 return VAR_1->bt_info.bt_real_fw_ver;
}
