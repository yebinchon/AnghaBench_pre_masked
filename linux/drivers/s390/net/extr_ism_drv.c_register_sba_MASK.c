
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int cmd; } ;
struct TYPE_5__ {void* sba; TYPE_1__ hdr; } ;
union ism_reg_sba {TYPE_2__ request; } ;
struct ism_sba {int dummy; } ;
struct ism_dev {void* sba_dma_addr; struct ism_sba* sba; TYPE_3__* pdev; } ;
typedef void* dma_addr_t ;
typedef int cmd ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ism_sba* FUNC_0 (int *,int ,void**,int ) ;
 int FUNC_1 (int *,int ,struct ism_sba*,void*) ;
 scalar_t__ FUNC_2 (struct ism_dev*,union ism_reg_sba*) ;
 int FUNC_3 (union ism_reg_sba*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ism_dev *VAR_5)
{
 union ism_reg_sba VAR_6;
 dma_addr_t VAR_7;
 struct ism_sba *VAR_8;

 VAR_8 = FUNC_0(&VAR_5->pdev->dev, VAR_4, &VAR_7,
     VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.request.hdr.cmd = VAR_3;
 VAR_6.request.hdr.len = sizeof(VAR_6.request);
 VAR_6.request.sba = VAR_7;

 if (FUNC_2(VAR_5, &VAR_6)) {
  FUNC_1(&VAR_5->pdev->dev, VAR_4, VAR_8, VAR_7);
  return -VAR_0;
 }

 VAR_5->sba = VAR_8;
 VAR_5->sba_dma_addr = VAR_7;

 return 0;
}
