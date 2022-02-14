
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct viafb_dev {scalar_t__ chip_type; int fbmem_len; int * engine_mmio; int * fbmem; void* fbmem_start; TYPE_1__* pdev; int engine_len; void* engine_start; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (void*,int ) ;
 int * FUNC_2 (void*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 void* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct viafb_dev *VAR_2)
{
 int VAR_3;





 VAR_2->engine_start = FUNC_5(VAR_2->pdev, 1);
 VAR_2->engine_len = FUNC_4(VAR_2->pdev, 1);
 VAR_2->engine_mmio = FUNC_1(VAR_2->engine_start,
   VAR_2->engine_len);
 if (VAR_2->engine_mmio == ((void*)0))
  FUNC_0(&VAR_2->pdev->dev,
    "Unable to map engine MMIO; operation will be "
    "slow and crippled.\n");







 if (VAR_2->chip_type == VAR_1)
  VAR_2->fbmem_start = FUNC_5(VAR_2->pdev, 2);
 else
  VAR_2->fbmem_start = FUNC_5(VAR_2->pdev, 0);
 VAR_3 = VAR_2->fbmem_len = FUNC_6(VAR_2->chip_type);
 if (VAR_3 < 0)
  goto out_unmap;


 for (; VAR_2->fbmem_len >= 8 << 20; VAR_2->fbmem_len /= 2) {
  VAR_2->fbmem = FUNC_2(VAR_2->fbmem_start, VAR_2->fbmem_len);
  if (VAR_2->fbmem)
   break;
 }

 if (VAR_2->fbmem == ((void*)0)) {
  VAR_3 = -VAR_0;
  goto out_unmap;
 }
 return 0;
out_unmap:
 FUNC_3(VAR_2->engine_mmio);
 return VAR_3;
}
