
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_umem {unsigned int npgs; TYPE_1__* pages; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {TYPE_2__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {scalar_t__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_3, struct xdp_umem *VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_3->back;
 struct device *VAR_6;
 unsigned int VAR_7;

 VAR_6 = &VAR_5->pdev->dev;

 for (VAR_7 = 0; VAR_7 < VAR_4->npgs; VAR_7++) {
  FUNC_0(VAR_6, VAR_4->pages[VAR_7].dma, VAR_2,
         VAR_0, VAR_1);

  VAR_4->pages[VAR_7].dma = 0;
 }
}
