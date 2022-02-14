
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int aux_queue; int probe_queue; int p2p_dev_queue; int snif_queue; } ;



__attribute__((used)) static int FUNC_0(struct iwl_mvm *VAR_0, int VAR_1)
{
 return VAR_1 == VAR_0->aux_queue || VAR_1 == VAR_0->probe_queue ||
  VAR_1 == VAR_0->p2p_dev_queue || VAR_1 == VAR_0->snif_queue;
}
