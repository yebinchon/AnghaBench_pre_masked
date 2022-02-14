
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iwl_trans_pcie {struct iwl_rx_mem_buffer** global_table; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_rxq {int * bd_32; TYPE_2__* cd; struct iwl_rx_mem_buffer** queue; } ;
struct iwl_rx_mem_buffer {int invalid; scalar_t__ vid; } ;
struct iwl_rx_completion_desc {int dummy; } ;
struct TYPE_4__ {int rbid; } ;
struct TYPE_3__ {scalar_t__ device_family; int mq_rx_supported; } ;


 int FUNC_0 (struct iwl_rx_mem_buffer**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,char*,int ) ;
 scalar_t__ VAR_0 ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static struct iwl_rx_mem_buffer *FUNC_8(struct iwl_trans *VAR_1,
        struct iwl_rxq *VAR_2, int VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_3(VAR_1);
 struct iwl_rx_mem_buffer *VAR_5;
 u16 VAR_6;

 FUNC_1(sizeof(struct iwl_rx_completion_desc) != 32);

 if (!VAR_1->trans_cfg->mq_rx_supported) {
  VAR_5 = VAR_2->queue[VAR_3];
  VAR_2->queue[VAR_3] = ((void*)0);
  return VAR_5;
 }


 if (VAR_1->trans_cfg->device_family >= VAR_0)
  VAR_6 = FUNC_6(VAR_2->cd[VAR_3].rbid) & 0x0FFF;
 else
  VAR_6 = FUNC_7(VAR_2->bd_32[VAR_3]) & 0x0FFF;

 if (!VAR_6 || VAR_6 > FUNC_0(VAR_4->global_table))
  goto out_err;

 VAR_5 = VAR_4->global_table[VAR_6 - 1];
 if (VAR_5->invalid)
  goto out_err;

 FUNC_2(VAR_1, "Got virtual RB ID %u\n", (u32)VAR_5->vid);

 VAR_5->invalid = 1;

 return VAR_5;

out_err:
 FUNC_4(1, "Invalid rxb from HW %u\n", (u32)VAR_6);
 FUNC_5(VAR_1);
 return ((void*)0);
}
