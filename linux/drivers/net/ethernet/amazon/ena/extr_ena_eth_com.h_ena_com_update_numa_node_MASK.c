
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ena_eth_io_numa_node_cfg_reg {int numa_cfg; } ;
struct ena_com_io_cq {int numa_node_cfg_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ena_com_io_cq *VAR_2,
         u8 VAR_3)
{
 struct ena_eth_io_numa_node_cfg_reg VAR_4;

 if (!VAR_2->numa_node_cfg_reg)
  return;

 VAR_4.numa_cfg = (VAR_3 & VAR_1)
  | VAR_0;

 FUNC_0(VAR_4.numa_cfg, VAR_2->numa_node_cfg_reg);
}
