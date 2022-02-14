
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int imask; int irqlock; scalar_t__ tx_pending; scalar_t__ rx_pending; int status; } ;
typedef enum ath5k_int { ____Placeholder_ath5k_int } ath5k_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath5k_hw*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ath5k_hw *VAR_3)
{
 enum ath5k_int VAR_4;
 unsigned long VAR_5;

 if (FUNC_3(VAR_2, VAR_3->status))
  return;

 FUNC_1(&VAR_3->irqlock, VAR_5);
 VAR_4 = VAR_3->imask;
 if (VAR_3->rx_pending)
  VAR_4 &= ~VAR_0;
 if (VAR_3->tx_pending)
  VAR_4 &= ~VAR_1;
 FUNC_0(VAR_3, VAR_4);
 FUNC_2(&VAR_3->irqlock, VAR_5);
}
