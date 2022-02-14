
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad_rx_ctrl {int rx_intr_ctr; } ;
struct bna_ccb {int bnad; scalar_t__ ctrl; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bna_ccb*) ;

__attribute__((used)) static irqreturn_t
FUNC_1(int VAR_1, void *VAR_2)
{
 struct bna_ccb *VAR_3 = (struct bna_ccb *)VAR_2;

 if (VAR_3) {
  ((struct bnad_rx_ctrl *)VAR_3->ctrl)->rx_intr_ctr++;
  FUNC_0(VAR_3->bnad, VAR_3);
 }

 return VAR_0;
}
