
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxf {int rxmode_active; int rxmode_pending_bitmask; int rxmode_pending; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct bna_rxf *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_3(VAR_1->rxmode_pending,
   VAR_1->rxmode_pending_bitmask) ||
   (VAR_1->rxmode_active & VAR_0)) {

 } else if (FUNC_2(VAR_1->rxmode_pending,
     VAR_1->rxmode_pending_bitmask)) {

  FUNC_1(VAR_1->rxmode_pending,
   VAR_1->rxmode_pending_bitmask);
 } else {

  FUNC_0(VAR_1->rxmode_pending,
    VAR_1->rxmode_pending_bitmask);
  VAR_2 = 1;
 }

 return VAR_2;
}
