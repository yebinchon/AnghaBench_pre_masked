
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftgmac100 {scalar_t__ tx_pointer; scalar_t__ tx_clean_pointer; } ;



__attribute__((used)) static bool FUNC_0(struct ftgmac100 *VAR_0)
{
 return VAR_0->tx_pointer != VAR_0->tx_clean_pointer;
}
