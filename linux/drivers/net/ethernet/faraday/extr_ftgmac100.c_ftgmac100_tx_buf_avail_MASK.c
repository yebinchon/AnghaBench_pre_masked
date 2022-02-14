
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ftgmac100 {int tx_clean_pointer; int tx_pointer; int tx_q_entries; } ;



__attribute__((used)) static u32 FUNC_0(struct ftgmac100 *VAR_0)
{






 return (VAR_0->tx_clean_pointer - VAR_0->tx_pointer - 1) &
  (VAR_0->tx_q_entries - 1);
}
