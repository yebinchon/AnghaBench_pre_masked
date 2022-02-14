
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_file {int pin_lock; } ;
struct dma_mapping {int pin_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct genwqe_file *VAR_0, struct dma_mapping *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->pin_lock, VAR_2);
 FUNC_0(&VAR_1->pin_list);
 FUNC_2(&VAR_0->pin_lock, VAR_2);

 return 0;
}
