
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int lock; scalar_t__ vsync_dma_pending; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1.lock, VAR_4);
 if (VAR_1.vsync_dma_pending) {
  VAR_1.vsync_dma_pending--;
  FUNC_0();
 }
 FUNC_2(&VAR_1.lock, VAR_4);
 return VAR_0;
}
