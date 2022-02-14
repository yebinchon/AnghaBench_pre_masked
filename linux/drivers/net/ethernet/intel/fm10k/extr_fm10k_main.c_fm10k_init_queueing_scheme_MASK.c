
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fm10k_intfc {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 (struct fm10k_intfc*) ;
 int FUNC_7 (struct fm10k_intfc*) ;

int FUNC_8(struct fm10k_intfc *VAR_0)
{
 int VAR_1;


 FUNC_7(VAR_0);


 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_0->pdev->dev,
   "Unable to initialize MSI-X capability\n");
  goto err_init_msix;
 }


 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_0->pdev->dev,
   "Unable to allocate queue vectors\n");
  goto err_alloc_q_vectors;
 }


 FUNC_2(VAR_0);


 FUNC_4(VAR_0);

 return 0;

err_alloc_q_vectors:
 FUNC_5(VAR_0);
err_init_msix:
 FUNC_6(VAR_0);
 return VAR_1;
}
