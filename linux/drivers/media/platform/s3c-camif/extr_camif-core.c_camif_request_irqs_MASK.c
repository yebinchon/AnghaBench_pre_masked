
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct camif_vp {int irq_queue; } ;
struct camif_dev {struct camif_vp* vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int ,int ,struct camif_vp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct platform_device*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3,
         struct camif_dev *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct camif_vp *VAR_8 = &VAR_4->vp[VAR_7];

  FUNC_3(&VAR_8->irq_queue);

  VAR_5 = FUNC_4(VAR_3, VAR_7);
  if (VAR_5 <= 0)
   return -VAR_1;

  VAR_6 = FUNC_2(&VAR_3->dev, VAR_5, VAR_2,
           0, FUNC_1(&VAR_3->dev), VAR_8);
  if (VAR_6 < 0) {
   FUNC_0(&VAR_3->dev, "failed to install IRQ: %d\n", VAR_6);
   break;
  }
 }

 return VAR_6;
}
