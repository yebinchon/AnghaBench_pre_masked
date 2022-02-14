
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nicpf {int num_vec; int* irq_allocated; TYPE_1__* pdev; int * irq_name; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct nicpf*) ;
 int FUNC_2 (struct nicpf*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ,int ,struct nicpf*) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int FUNC_9(struct nicpf *VAR_3)
{
 int VAR_4, VAR_5;
 VAR_3->num_vec = FUNC_6(VAR_3->pdev);


 VAR_5 = FUNC_3(VAR_3->pdev, VAR_3->num_vec, VAR_3->num_vec,
        VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->pdev->dev,
   "Request for #%d msix vectors failed, returned %d\n",
      VAR_3->num_vec, VAR_5);
  return 1;
 }


 for (VAR_4 = VAR_0; VAR_4 < VAR_3->num_vec; VAR_4++) {
  FUNC_8(VAR_3->irq_name[VAR_4],
   "NICPF Mbox%d", (VAR_4 - VAR_0));

  VAR_5 = FUNC_7(FUNC_5(VAR_3->pdev, VAR_4),
      VAR_2, 0,
      VAR_3->irq_name[VAR_4], VAR_3);
  if (VAR_5)
   goto fail;

  VAR_3->irq_allocated[VAR_4] = 1;
 }


 FUNC_1(VAR_3);
 return 0;

fail:
 FUNC_0(&VAR_3->pdev->dev, "Request irq failed\n");
 FUNC_2(VAR_3);
 FUNC_4(VAR_3->pdev);
 VAR_3->num_vec = 0;
 return VAR_5;
}
