
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_device {int size; struct cdns3_device* zlp_buf; int setup_dma; int setup_buf; int sysdev; int list; int dma; int buf; int aligned_buf_list; int gadget; } ;
struct cdns3_aligned_buf {int size; struct cdns3_aligned_buf* zlp_buf; int setup_dma; int setup_buf; int sysdev; int list; int dma; int buf; int aligned_buf_list; int gadget; } ;
struct cdns3 {struct cdns3_device* gadget_dev; int dev; int dev_irq; } ;


 int FUNC_0 (struct cdns3*,int ) ;
 int FUNC_1 (struct cdns3_device*) ;
 struct cdns3_device* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct cdns3*) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (struct cdns3_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct cdns3 *VAR_0)
{
 struct cdns3_device *VAR_1;

 VAR_1 = VAR_0->gadget_dev;

 FUNC_3(VAR_0->dev, VAR_0->dev_irq, VAR_0);

 FUNC_8(VAR_0->dev);
 FUNC_9(VAR_0->dev);

 FUNC_10(&VAR_1->gadget);

 FUNC_1(VAR_1);

 while (!FUNC_7(&VAR_1->aligned_buf_list)) {
  struct cdns3_aligned_buf *VAR_2;

  VAR_2 = FUNC_2(&VAR_1->aligned_buf_list);
  FUNC_4(VAR_1->sysdev, VAR_2->size,
      VAR_2->buf,
      VAR_2->dma);

  FUNC_6(&VAR_2->list);
  FUNC_5(VAR_2);
 }

 FUNC_4(VAR_1->sysdev, 8, VAR_1->setup_buf,
     VAR_1->setup_dma);

 FUNC_5(VAR_1->zlp_buf);
 FUNC_5(VAR_1);
 VAR_0->gadget_dev = ((void*)0);
 FUNC_0(VAR_0, 0);
}
