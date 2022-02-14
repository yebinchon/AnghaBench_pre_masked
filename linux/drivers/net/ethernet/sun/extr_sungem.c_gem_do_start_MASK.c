
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; } ;
struct gem {TYPE_1__* pdev; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gem*) ;
 int FUNC_1 (struct gem*) ;
 int FUNC_2 (struct gem*) ;
 int VAR_2 ;
 int FUNC_3 (struct gem*) ;
 int FUNC_4 (struct gem*) ;
 int FUNC_5 (struct gem*) ;
 int FUNC_6 (struct gem*) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct gem* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_3)
{
 struct gem *VAR_4 = FUNC_8(VAR_3);
 int VAR_5;


 FUNC_1(VAR_4);


 VAR_5 = FUNC_10(VAR_4->pdev);
 if (VAR_5) {
  FUNC_7(VAR_3, "Failed to enable chip on PCI bus !\n");




  FUNC_4(VAR_4);
  return -VAR_0;
 }
 FUNC_11(VAR_4->pdev);


 FUNC_5(VAR_4);


 VAR_5 = FUNC_12(VAR_4->pdev->irq, VAR_2,
    VAR_1, VAR_3->name, (void *)VAR_3);
 if (VAR_5) {
  FUNC_7(VAR_3, "failed to request irq !\n");

  FUNC_6(VAR_4);
  FUNC_0(VAR_4);
  FUNC_4(VAR_4);
  return VAR_5;
 }




 FUNC_9(VAR_3);


 FUNC_3(VAR_4);





 FUNC_2(VAR_4);

 return 0;
}
