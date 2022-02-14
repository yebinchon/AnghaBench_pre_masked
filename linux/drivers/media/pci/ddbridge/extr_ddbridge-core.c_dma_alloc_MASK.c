
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ddb_dma {int num; int ** vbuf; int * pbuf; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_6, struct ddb_dma *VAR_7, int VAR_8)
{
 int VAR_9;

 if (!VAR_7)
  return 0;
 for (VAR_9 = 0; VAR_9 < VAR_7->num; VAR_9++) {
  if (VAR_5) {
   VAR_7->vbuf[VAR_9] = FUNC_4(VAR_7->size, VAR_4);
   if (!VAR_7->vbuf[VAR_9])
    return -VAR_2;
   VAR_7->pbuf[VAR_9] = FUNC_1(&VAR_6->dev,
            VAR_7->vbuf[VAR_9],
            VAR_7->size,
            VAR_8 ? VAR_1 :
            VAR_0);
   if (FUNC_2(&VAR_6->dev, VAR_7->pbuf[VAR_9])) {
    FUNC_3(VAR_7->vbuf[VAR_9]);
    VAR_7->vbuf[VAR_9] = ((void*)0);
    return -VAR_2;
   }
  } else {
   VAR_7->vbuf[VAR_9] = FUNC_0(&VAR_6->dev,
         VAR_7->size,
         &VAR_7->pbuf[VAR_9],
         VAR_3);
   if (!VAR_7->vbuf[VAR_9])
    return -VAR_2;
  }
 }
 return 0;
}
