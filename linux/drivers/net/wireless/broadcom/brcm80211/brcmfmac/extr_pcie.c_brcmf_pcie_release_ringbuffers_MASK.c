
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int * flowrings; int ** commonrings; } ;
struct brcmf_pciedev_info {int * idxbuf; int idxbuf_dmahandle; int idxbuf_sz; TYPE_2__* pdev; TYPE_1__ shared; } ;
struct TYPE_4__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct brcmf_pciedev_info *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(&VAR_1->pdev->dev,
           VAR_1->shared.commonrings[VAR_2]);
  VAR_1->shared.commonrings[VAR_2] = ((void*)0);
 }
 FUNC_2(VAR_1->shared.flowrings);
 VAR_1->shared.flowrings = ((void*)0);
 if (VAR_1->idxbuf) {
  FUNC_1(&VAR_1->pdev->dev,
      VAR_1->idxbuf_sz,
      VAR_1->idxbuf,
      VAR_1->idxbuf_dmahandle);
  VAR_1->idxbuf = ((void*)0);
 }
}
