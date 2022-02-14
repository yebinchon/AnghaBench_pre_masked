
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_data {void** hwlist_priv; } ;


 int VAR_0 ;

void *FUNC_0(struct vpdma_data *VAR_1, int VAR_2)
{
 if (!VAR_1 || VAR_2 >= VAR_0)
  return ((void*)0);

 return VAR_1->hwlist_priv[VAR_2];
}
