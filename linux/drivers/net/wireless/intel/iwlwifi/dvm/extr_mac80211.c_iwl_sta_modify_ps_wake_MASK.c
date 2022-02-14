
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {int dummy; } ;
struct TYPE_2__ {int sta_id; } ;
struct iwl_addsta_cmd {TYPE_1__ sta; int station_flags_msk; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_addsta_cmd*,int ) ;

__attribute__((used)) static void FUNC_1(struct iwl_priv *VAR_3, int VAR_4)
{
 struct iwl_addsta_cmd VAR_5 = {
  .mode = VAR_1,
  .station_flags_msk = VAR_2,
  .sta.sta_id = VAR_4,
 };

 FUNC_0(VAR_3, &VAR_5, VAR_0);
}
