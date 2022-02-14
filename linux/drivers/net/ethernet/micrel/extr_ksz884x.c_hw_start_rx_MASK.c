
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int rx_stop; scalar_t__ io; int intr_mask; int rx_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ksz_hw*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_4)
{
 FUNC_1(VAR_4->rx_cfg, VAR_4->io + VAR_2);


 VAR_4->intr_mask |= VAR_1;

 FUNC_1(VAR_0, VAR_4->io + VAR_3);
 FUNC_0(VAR_4, VAR_1);
 VAR_4->rx_stop++;


 if (0 == VAR_4->rx_stop)
  VAR_4->rx_stop = 2;
}
