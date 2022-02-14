
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct whcrc {int irq_lock; scalar_t__ rc_base; int evt_dma_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static
void FUNC_5(struct whcrc *VAR_4)
{
 u32 VAR_5;

 FUNC_2(VAR_4->evt_dma_buf, VAR_4->rc_base + VAR_3);

 FUNC_3(&VAR_4->irq_lock);
 VAR_5 = FUNC_0(VAR_4->rc_base + VAR_0) & ~VAR_1;
 FUNC_1(VAR_5 | VAR_2, VAR_4->rc_base + VAR_0);
 FUNC_4(&VAR_4->irq_lock);
}
