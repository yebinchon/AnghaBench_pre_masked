
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int afh_map_h; int afh_map_m; int afh_map_l; } ;
struct btc_coexist {TYPE_1__ bt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btc_coexist*,int ,int *,int,int) ;

__attribute__((used)) static bool FUNC_1(void *VAR_3, u8 VAR_4,
       u8 *VAR_5)
{
 struct btc_coexist *VAR_6 = (struct btc_coexist *)VAR_3;
 u8 VAR_7[2] = {0};
 bool VAR_8;
 u32 *VAR_9 = (u32 *)VAR_5;
 u32 *VAR_10 = (u32 *)(VAR_5 + 4);
 u16 *VAR_11 = (u16 *)(VAR_5 + 8);


 VAR_8 = FUNC_0(VAR_6, VAR_1,
       VAR_7, 2, 200);
 if (!VAR_8)
  goto exit;

 *VAR_9 = VAR_6->bt_info.afh_map_l;


 VAR_8 = FUNC_0(VAR_6, VAR_2,
       VAR_7, 2, 200);
 if (!VAR_8)
  goto exit;

 *VAR_10 = VAR_6->bt_info.afh_map_m;


 VAR_8 = FUNC_0(VAR_6, VAR_0,
       VAR_7, 2, 200);
 if (!VAR_8)
  goto exit;

 *VAR_11 = VAR_6->bt_info.afh_map_h;

exit:
 return VAR_8;
}
