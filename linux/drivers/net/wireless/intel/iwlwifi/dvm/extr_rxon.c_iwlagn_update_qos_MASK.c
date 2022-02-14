
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int qos_flags; } ;
struct TYPE_5__ {TYPE_3__ def_qos_parm; scalar_t__ qos_active; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct iwl_rxon_context {TYPE_2__ qos_data; int qos_cmd; TYPE_1__ ht; int is_active; } ;
struct iwl_qosparam_cmd {int dummy; } ;
struct iwl_priv {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*,scalar_t__,int ) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct iwl_priv*,int ,int ,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_2,
         struct iwl_rxon_context *VAR_3)
{
 int VAR_4;

 if (!VAR_3->is_active)
  return;

 VAR_3->qos_data.def_qos_parm.qos_flags = 0;

 if (VAR_3->qos_data.qos_active)
  VAR_3->qos_data.def_qos_parm.qos_flags |=
   VAR_1;

 if (VAR_3->ht.enabled)
  VAR_3->qos_data.def_qos_parm.qos_flags |= VAR_0;

 FUNC_0(VAR_2, "send QoS cmd with Qos active=%d FLAGS=0x%X\n",
        VAR_3->qos_data.qos_active,
        VAR_3->qos_data.def_qos_parm.qos_flags);

 VAR_4 = FUNC_2(VAR_2, VAR_3->qos_cmd, 0,
          sizeof(struct iwl_qosparam_cmd),
          &VAR_3->qos_data.def_qos_parm);
 if (VAR_4)
  FUNC_1(VAR_2, "Failed to update QoS\n");
}
