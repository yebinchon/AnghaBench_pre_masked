
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ntb_transport_mw {size_t xlat_size; size_t buff_size; size_t alloc_size; int dma_addr; } ;
struct ntb_transport_ctx {TYPE_1__* ndev; struct ntb_transport_mw* mw_vec; } ;
typedef int resource_size_t ;
struct TYPE_3__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct ntb_transport_mw*,int *,int ) ;
 int FUNC_2 (struct ntb_transport_ctx*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ,size_t) ;
 size_t FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ntb_transport_ctx *VAR_3, int VAR_4,
        resource_size_t VAR_5)
{
 struct ntb_transport_mw *VAR_6 = &VAR_3->mw_vec[VAR_4];
 struct pci_dev *VAR_7 = VAR_3->ndev->pdev;
 size_t VAR_8, VAR_9;
 resource_size_t VAR_10;
 resource_size_t VAR_11;
 int VAR_12;

 if (!VAR_5)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_3->ndev, VAR_2, VAR_4, &VAR_10,
         &VAR_11, ((void*)0));
 if (VAR_12)
  return VAR_12;

 VAR_8 = FUNC_5(VAR_5, VAR_11);
 VAR_9 = FUNC_5(VAR_5, VAR_10);


 if (VAR_6->xlat_size == VAR_8)
  return 0;

 if (VAR_6->buff_size)
  FUNC_2(VAR_3, VAR_4);


 VAR_6->xlat_size = VAR_8;
 VAR_6->buff_size = VAR_9;
 VAR_6->alloc_size = VAR_9;

 VAR_12 = FUNC_1(VAR_6, &VAR_7->dev, VAR_10);
 if (VAR_12) {
  VAR_6->alloc_size *= 2;
  VAR_12 = FUNC_1(VAR_6, &VAR_7->dev, VAR_10);
  if (VAR_12) {
   FUNC_0(&VAR_7->dev,
    "Unable to alloc aligned MW buff\n");
   VAR_6->xlat_size = 0;
   VAR_6->buff_size = 0;
   VAR_6->alloc_size = 0;
   return VAR_12;
  }
 }


 VAR_12 = FUNC_4(VAR_3->ndev, VAR_2, VAR_4, VAR_6->dma_addr,
         VAR_6->xlat_size);
 if (VAR_12) {
  FUNC_0(&VAR_7->dev, "Unable to set mw%d translation", VAR_4);
  FUNC_2(VAR_3, VAR_4);
  return -VAR_1;
 }

 return 0;
}
