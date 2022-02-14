
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {unsigned int tx_data_offset; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct dpaa2_eth_priv *VAR_1)
{
 return VAR_1->tx_data_offset - VAR_0;
}
