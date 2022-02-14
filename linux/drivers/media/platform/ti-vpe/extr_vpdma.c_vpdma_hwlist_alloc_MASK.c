
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_data {int* hwlist_used; int lock; void** hwlist_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct vpdma_data *VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4 = -1;
 unsigned long VAR_5;

 FUNC_0(&VAR_1->lock, VAR_5);
 for (VAR_3 = 0; VAR_3 < VAR_0 &&
     VAR_1->hwlist_used[VAR_3] == 1; VAR_3++)
  ;

 if (VAR_3 < VAR_0) {
  VAR_4 = VAR_3;
  VAR_1->hwlist_used[VAR_3] = 1;
  VAR_1->hwlist_priv[VAR_3] = VAR_2;
 }
 FUNC_1(&VAR_1->lock, VAR_5);

 return VAR_4;
}
