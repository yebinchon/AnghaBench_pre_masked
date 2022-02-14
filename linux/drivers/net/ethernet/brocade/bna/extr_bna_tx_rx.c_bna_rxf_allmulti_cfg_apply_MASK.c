
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxf {int rxmode_active; int rxmode_pending_bitmask; int rxmode_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bna_rxf*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct bna_rxf *VAR_3)
{

 if (FUNC_3(VAR_3->rxmode_pending,
    VAR_3->rxmode_pending_bitmask)) {

  FUNC_0(VAR_3->rxmode_pending,
    VAR_3->rxmode_pending_bitmask);
  VAR_3->rxmode_active |= VAR_0;
  FUNC_1(VAR_3, VAR_1);
  return 1;
 } else if (FUNC_2(VAR_3->rxmode_pending,
     VAR_3->rxmode_pending_bitmask)) {

  FUNC_0(VAR_3->rxmode_pending,
    VAR_3->rxmode_pending_bitmask);
  VAR_3->rxmode_active &= ~VAR_0;
  FUNC_1(VAR_3, VAR_2);
  return 1;
 }

 return 0;
}
