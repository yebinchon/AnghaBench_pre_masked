
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {scalar_t__ io; int tx_cfg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_1)
{
 FUNC_0(VAR_1->tx_cfg, VAR_1->io + VAR_0);
}
