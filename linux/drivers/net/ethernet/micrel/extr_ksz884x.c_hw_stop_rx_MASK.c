
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int rx_cfg; scalar_t__ io; scalar_t__ rx_stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ksz_hw*,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_3)
{
 VAR_3->rx_stop = 0;
 FUNC_0(VAR_3, VAR_1);
 FUNC_1((VAR_3->rx_cfg & ~VAR_0), VAR_3->io + VAR_2);
}
