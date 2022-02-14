
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {int rxon_cmd; } ;
struct iwl_rxon_cmd {int filter_flags; } ;
struct iwl_priv {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct iwl_priv*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,int ,int ,int,struct iwl_rxon_cmd*) ;

__attribute__((used)) static int FUNC_2(struct iwl_priv *VAR_1,
         struct iwl_rxon_context *VAR_2,
         struct iwl_rxon_cmd *VAR_3)
{
 __le32 VAR_4 = VAR_3->filter_flags;
 int VAR_5;

 VAR_3->filter_flags &= ~VAR_0;
 VAR_5 = FUNC_1(VAR_1, VAR_2->rxon_cmd,
    0, sizeof(*VAR_3), VAR_3);

 VAR_3->filter_flags = VAR_4;

 if (VAR_5)
  FUNC_0(VAR_1,
   "Error clearing ASSOC_MSK on BSS (%d)\n", VAR_5);

 return VAR_5;
}
