
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nicvf {int* irq_allocated; int * irq_name; TYPE_1__* pdev; int num_vec; int netdev; } ;
struct TYPE_4__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct nicvf*) ;
 int FUNC_2 (struct nicvf*,int ,int ) ;
 int FUNC_3 (struct nicvf*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct nicvf*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ,int ,struct nicvf*) ;
 int FUNC_9 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_10(struct nicvf *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = VAR_0;


 if (VAR_4->pdev->msix_enabled)
  return 0;


 VAR_4->num_vec = FUNC_7(VAR_4->pdev);
 VAR_5 = FUNC_5(VAR_4->pdev, VAR_4->num_vec, VAR_4->num_vec,
        VAR_2);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->netdev,
      "Req for #%d msix vectors failed\n", VAR_4->num_vec);
  return 1;
 }

 FUNC_9(VAR_4->irq_name[VAR_6], "%s Mbox", "NICVF");

 VAR_5 = FUNC_8(FUNC_6(VAR_4->pdev, VAR_6),
     VAR_3, 0, VAR_4->irq_name[VAR_6], VAR_4);

 if (VAR_5)
  return VAR_5;
 VAR_4->irq_allocated[VAR_6] = 1;


 FUNC_3(VAR_4, VAR_1, 0);


 if (!FUNC_1(VAR_4)) {
  FUNC_2(VAR_4, VAR_1, 0);
  FUNC_4(VAR_4);
  return 1;
 }

 return 0;
}
