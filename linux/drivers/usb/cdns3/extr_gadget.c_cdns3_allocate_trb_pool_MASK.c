
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_trb {int control; int buffer; } ;
struct cdns3_endpoint {int num_trbs; int trb_pool_dma; struct cdns3_trb* trb_pool; int num; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {int sysdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cdns3_endpoint*) ;
 struct cdns3_trb* FUNC_3 (int ,int,int *,int) ;
 int FUNC_4 (struct cdns3_trb*,int ,int) ;

int FUNC_5(struct cdns3_endpoint *VAR_7)
{
 struct cdns3_device *VAR_8 = VAR_7->cdns3_dev;
 int VAR_9 = FUNC_2(VAR_7);
 struct cdns3_trb *VAR_10;

 if (!VAR_7->trb_pool) {
  VAR_7->trb_pool = FUNC_3(VAR_8->sysdev,
             VAR_9,
             &VAR_7->trb_pool_dma,
             VAR_2 | VAR_1);
  if (!VAR_7->trb_pool)
   return -VAR_0;
 } else {
  FUNC_4(VAR_7->trb_pool, 0, VAR_9);
 }

 if (!VAR_7->num)
  return 0;

 VAR_7->num_trbs = VAR_9 / VAR_5;

 VAR_10 = (VAR_7->trb_pool + (VAR_7->num_trbs - 1));
 VAR_10->buffer = FUNC_0(VAR_7->trb_pool_dma);
 VAR_10->control = VAR_3 | FUNC_1(VAR_4) | VAR_6;

 return 0;
}
