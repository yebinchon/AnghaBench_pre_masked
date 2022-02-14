
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int dummy; } ;
struct iwl_link_quality_cmd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_rxon_context*,int ,struct iwl_link_quality_cmd*) ;
 struct iwl_link_quality_cmd* FUNC_2 (int,int ) ;

__attribute__((used)) static struct iwl_link_quality_cmd *
FUNC_3(struct iwl_priv *VAR_1, struct iwl_rxon_context *VAR_2,
   u8 VAR_3)
{
 struct iwl_link_quality_cmd *VAR_4;

 VAR_4 = FUNC_2(sizeof(struct iwl_link_quality_cmd), VAR_0);
 if (!VAR_4) {
  FUNC_0(VAR_1, "Unable to allocate memory for LQ cmd.\n");
  return ((void*)0);
 }

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_4;
}
