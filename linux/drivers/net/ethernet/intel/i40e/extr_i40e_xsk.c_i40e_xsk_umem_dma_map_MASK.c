
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_umem {unsigned int npgs; TYPE_2__* pages; int * pgs; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {scalar_t__ dma; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct device*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct device*,scalar_t__) ;
 int FUNC_2 (struct device*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i40e_vsi *VAR_3, struct xdp_umem *VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_3->back;
 struct device *VAR_6;
 unsigned int VAR_7, VAR_8;
 dma_addr_t VAR_9;

 VAR_6 = &VAR_5->pdev->dev;
 for (VAR_7 = 0; VAR_7 < VAR_4->npgs; VAR_7++) {
  VAR_9 = FUNC_0(VAR_6, VAR_4->pgs[VAR_7], 0, VAR_2,
      VAR_0, VAR_1);
  if (FUNC_1(VAR_6, VAR_9))
   goto out_unmap;

  VAR_4->pages[VAR_7].dma = VAR_9;
 }

 return 0;

out_unmap:
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_2(VAR_6, VAR_4->pages[VAR_7].dma, VAR_2,
         VAR_0, VAR_1);
  VAR_4->pages[VAR_7].dma = 0;
 }

 return -1;
}
