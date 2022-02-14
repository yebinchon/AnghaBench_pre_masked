
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct il_qosparam_cmd {int dummy; } ;
struct TYPE_6__ {int qos_flags; } ;
struct TYPE_5__ {TYPE_3__ def_qos_parm; scalar_t__ qos_active; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct il_priv {TYPE_2__ qos_data; TYPE_1__ ht; int status; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct il_priv*,int ,int,TYPE_3__*,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_4)
{
 if (FUNC_2(VAR_3, &VAR_4->status))
  return;

 VAR_4->qos_data.def_qos_parm.qos_flags = 0;

 if (VAR_4->qos_data.qos_active)
  VAR_4->qos_data.def_qos_parm.qos_flags |=
      VAR_2;

 if (VAR_4->ht.enabled)
  VAR_4->qos_data.def_qos_parm.qos_flags |= VAR_1;

 FUNC_0("send QoS cmd with Qos active=%d FLAGS=0x%X\n",
       VAR_4->qos_data.qos_active, VAR_4->qos_data.def_qos_parm.qos_flags);

 FUNC_1(VAR_4, VAR_0, sizeof(struct il_qosparam_cmd),
         &VAR_4->qos_data.def_qos_parm, ((void*)0));
}
