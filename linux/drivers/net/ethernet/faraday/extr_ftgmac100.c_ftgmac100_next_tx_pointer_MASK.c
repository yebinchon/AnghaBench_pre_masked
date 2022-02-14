
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftgmac100 {int tx_q_entries; } ;



__attribute__((used)) static unsigned int FUNC_0(struct ftgmac100 *VAR_0,
           unsigned int VAR_1)
{
 return (VAR_1 + 1) & (VAR_0->tx_q_entries - 1);
}
