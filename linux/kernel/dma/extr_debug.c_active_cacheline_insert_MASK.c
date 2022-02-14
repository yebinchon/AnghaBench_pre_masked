
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {scalar_t__ direction; } ;
typedef int phys_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,struct dma_debug_entry*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct dma_debug_entry*) ;

__attribute__((used)) static int FUNC_5(struct dma_debug_entry *VAR_4)
{
 phys_addr_t VAR_5 = FUNC_4(VAR_4);
 unsigned long VAR_6;
 int VAR_7;





 if (VAR_4->direction == VAR_0)
  return 0;

 FUNC_2(&VAR_3, VAR_6);
 VAR_7 = FUNC_1(&VAR_2, VAR_5, VAR_4);
 if (VAR_7 == -VAR_1)
  FUNC_0(VAR_5);
 FUNC_3(&VAR_3, VAR_6);

 return VAR_7;
}
