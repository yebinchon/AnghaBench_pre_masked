
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ddb_dma {int num; int ** vbuf; int * pbuf; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3, struct ddb_dma *VAR_4, int VAR_5)
{
 int VAR_6;

 if (!VAR_4)
  return;
 for (VAR_6 = 0; VAR_6 < VAR_4->num; VAR_6++) {
  if (VAR_4->vbuf[VAR_6]) {
   if (VAR_2) {
    FUNC_1(&VAR_3->dev, VAR_4->pbuf[VAR_6],
       VAR_4->size,
       VAR_5 ? VAR_1 :
       VAR_0);
    FUNC_2(VAR_4->vbuf[VAR_6]);
    VAR_4->vbuf[VAR_6] = ((void*)0);
   } else {
    FUNC_0(&VAR_3->dev, VAR_4->size,
        VAR_4->vbuf[VAR_6], VAR_4->pbuf[VAR_6]);
   }

   VAR_4->vbuf[VAR_6] = ((void*)0);
  }
 }
}
