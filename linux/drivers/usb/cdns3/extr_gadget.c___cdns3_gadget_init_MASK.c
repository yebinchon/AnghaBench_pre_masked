
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3 {int dev; int dev_irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cdns3*,int) ;
 int FUNC_2 (struct cdns3*) ;
 int FUNC_3 (struct cdns3*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,struct cdns3*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct cdns3 *VAR_3)
{
 int VAR_4 = 0;


 VAR_4 = FUNC_7(VAR_3->dev, FUNC_0(32));
 if (VAR_4) {
  FUNC_4(VAR_3->dev, "Failed to set dma mask: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_1(VAR_3, 1);
 FUNC_8(VAR_3->dev);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;





 VAR_4 = FUNC_6(VAR_3->dev, VAR_3->dev_irq,
     VAR_1,
     VAR_2,
     VAR_0, FUNC_5(VAR_3->dev), VAR_3);

 if (VAR_4)
  goto err0;

 return 0;
err0:
 FUNC_2(VAR_3);
 return VAR_4;
}
