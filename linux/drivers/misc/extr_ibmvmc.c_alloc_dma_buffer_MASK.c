
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int dev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,void*,size_t,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void *FUNC_4(struct vio_dev *VAR_2, size_t VAR_3,
         dma_addr_t *VAR_4)
{

 void *VAR_5 = FUNC_2(VAR_3, VAR_1);

 if (!VAR_5) {
  *VAR_4 = 0;
  return ((void*)0);
 }


 *VAR_4 = FUNC_0(&VAR_2->dev, VAR_5, VAR_3,
         VAR_0);

 if (FUNC_1(&VAR_2->dev, *VAR_4)) {
  *VAR_4 = 0;
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
