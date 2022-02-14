
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_data {int* hwlist_used; int lock; void* hwlist_priv; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void *FUNC_2(struct vpdma_data *VAR_0, int VAR_1)
{
 void *VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 VAR_0->hwlist_used[VAR_1] = 0;
 VAR_2 = VAR_0->hwlist_priv;
 FUNC_1(&VAR_0->lock, VAR_3);

 return VAR_2;
}
