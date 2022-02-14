
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qtnf_pearl_tx_bd {int dummy; } ;
struct qtnf_pcie_bus_priv {unsigned int tx_bd_num; unsigned int rx_bd_num; scalar_t__ rx_bd_r_index; scalar_t__ rx_bd_w_index; } ;
struct qtnf_pcie_pearl_state {struct qtnf_pcie_bus_priv base; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_2 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_3 (struct qtnf_pcie_pearl_state*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (struct qtnf_pcie_bus_priv*) ;

__attribute__((used)) static int FUNC_7(struct qtnf_pcie_pearl_state *VAR_3,
         unsigned int VAR_4)
{
 struct qtnf_pcie_bus_priv *VAR_5 = &VAR_3->base;
 int VAR_6;
 u32 VAR_7;

 if (VAR_4 == 0)
  VAR_4 = VAR_2;

 VAR_7 = VAR_4 * sizeof(struct qtnf_pearl_tx_bd);

 if (!FUNC_0(VAR_4) || VAR_7 > VAR_1) {
  FUNC_5("bad tx_bd_size value %u\n", VAR_4);
  VAR_5->tx_bd_num = VAR_2;
 } else {
  VAR_5->tx_bd_num = VAR_4;
 }

 VAR_5->rx_bd_w_index = 0;
 VAR_5->rx_bd_r_index = 0;

 if (!VAR_5->rx_bd_num || !FUNC_0(VAR_5->rx_bd_num)) {
  FUNC_4("rx_bd_size_param %u is not power of two\n",
         VAR_5->rx_bd_num);
  return -VAR_0;
 }

 VAR_7 = VAR_5->rx_bd_num * sizeof(dma_addr_t);
 if (VAR_7 > VAR_1) {
  FUNC_4("rx_bd_size_param %u is too large\n",
         VAR_5->rx_bd_num);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6) {
  FUNC_4("failed to init h/w queues\n");
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_4("failed to allocate skb array\n");
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {
  FUNC_4("failed to allocate bd table\n");
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6) {
  FUNC_4("failed to allocate rx buffers\n");
  return VAR_6;
 }

 return VAR_6;
}
