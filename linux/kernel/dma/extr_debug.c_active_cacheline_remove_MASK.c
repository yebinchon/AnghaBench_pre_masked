
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {scalar_t__ direction; } ;
typedef int phys_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct dma_debug_entry*) ;

__attribute__((used)) static void FUNC_5(struct dma_debug_entry *VAR_3)
{
 phys_addr_t VAR_4 = FUNC_4(VAR_3);
 unsigned long VAR_5;


 if (VAR_3->direction == VAR_0)
  return;

 FUNC_2(&VAR_2, VAR_5);




 if (FUNC_0(VAR_4) < 0)
  FUNC_1(&VAR_1, VAR_4);
 FUNC_3(&VAR_2, VAR_5);
}
