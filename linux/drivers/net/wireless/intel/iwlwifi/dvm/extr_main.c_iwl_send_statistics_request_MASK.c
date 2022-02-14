
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_statistics_cmd {int configuration_flags; } ;
struct iwl_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,int ,int,int,struct iwl_statistics_cmd*) ;

int FUNC_1(struct iwl_priv *VAR_3, u8 VAR_4, bool VAR_5)
{
 struct iwl_statistics_cmd VAR_6 = {
  .configuration_flags =
   VAR_5 ? VAR_1 : 0,
 };

 if (VAR_4 & VAR_0)
  return FUNC_0(VAR_3, VAR_2,
     VAR_0,
     sizeof(struct iwl_statistics_cmd),
     &VAR_6);
 else
  return FUNC_0(VAR_3, VAR_2, 0,
     sizeof(struct iwl_statistics_cmd),
     &VAR_6);
}
