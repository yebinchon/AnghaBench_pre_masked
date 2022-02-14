
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int rx_stop; int rx_cfg; int intr_mask; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_hw*) ;

__attribute__((used)) static inline void FUNC_1(struct ksz_hw *VAR_2)
{

 if (0 == VAR_2->rx_stop)
  VAR_2->intr_mask &= ~VAR_1;
 else if (VAR_2->rx_stop > 1) {
  if (VAR_2->enabled && (VAR_2->rx_cfg & VAR_0)) {
   FUNC_0(VAR_2);
  } else {
   VAR_2->intr_mask &= ~VAR_1;
   VAR_2->rx_stop = 0;
  }
 } else

  VAR_2->rx_stop++;
}
