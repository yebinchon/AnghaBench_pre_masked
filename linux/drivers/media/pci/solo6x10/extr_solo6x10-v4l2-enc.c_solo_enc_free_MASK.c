
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solo_p2m_desc {int dummy; } ;
struct solo_enc_dev {int desc_nelts; int hdl; int vfd; int desc_dma; int desc_items; TYPE_1__* solo_dev; } ;
struct TYPE_2__ {int pdev; } ;


 int FUNC_0 (struct solo_enc_dev*) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct solo_enc_dev *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1(VAR_0->solo_dev->pdev,
   sizeof(struct solo_p2m_desc) * VAR_0->desc_nelts,
   VAR_0->desc_items, VAR_0->desc_dma);
 FUNC_3(VAR_0->vfd);
 FUNC_2(&VAR_0->hdl);
 FUNC_0(VAR_0);
}
