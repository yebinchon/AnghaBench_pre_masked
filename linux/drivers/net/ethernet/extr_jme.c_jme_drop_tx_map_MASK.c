
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_ring {struct jme_buffer_info* bufinf; } ;
struct jme_buffer_info {scalar_t__ len; scalar_t__ mapping; } ;
struct jme_adapter {int tx_ring_mask; int pdev; struct jme_ring* txring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct jme_adapter *VAR_1, int VAR_2, int VAR_3)
{
 struct jme_ring *VAR_4 = &(VAR_1->txring[0]);
 struct jme_buffer_info *VAR_5 = VAR_4->bufinf, *VAR_6;
 int VAR_7 = VAR_1->tx_ring_mask;
 int VAR_8;

 for (VAR_8 = 0 ; VAR_8 < VAR_3 ; VAR_8++) {
  VAR_6 = VAR_5 + ((VAR_2 + VAR_8 + 2) & (VAR_7));
  FUNC_0(VAR_1->pdev,
    VAR_6->mapping,
    VAR_6->len,
    VAR_0);

  VAR_6->mapping = 0;
  VAR_6->len = 0;
 }
}
