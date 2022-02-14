
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_4__ {int rx_packet_count; int tx_timeout_count; } ;
struct TYPE_3__ {int rx_packet_count; int tx_packet_count; } ;
struct qtnf_pcie_bus_priv {TYPE_2__ shm_ipc_ep_out; TYPE_1__ shm_ipc_ep_in; } ;
struct qtnf_bus {int dummy; } ;


 struct qtnf_bus* FUNC_0 (int ) ;
 struct qtnf_pcie_bus_priv* FUNC_1 (struct qtnf_bus*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct qtnf_bus *VAR_2 = FUNC_0(VAR_0->private);
 struct qtnf_pcie_bus_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_0, "shm_ipc_ep_in.tx_packet_count(%zu)\n",
     VAR_3->shm_ipc_ep_in.tx_packet_count);
 FUNC_2(VAR_0, "shm_ipc_ep_in.rx_packet_count(%zu)\n",
     VAR_3->shm_ipc_ep_in.rx_packet_count);
 FUNC_2(VAR_0, "shm_ipc_ep_out.tx_packet_count(%zu)\n",
     VAR_3->shm_ipc_ep_out.tx_timeout_count);
 FUNC_2(VAR_0, "shm_ipc_ep_out.rx_packet_count(%zu)\n",
     VAR_3->shm_ipc_ep_out.rx_packet_count);

 return 0;
}
