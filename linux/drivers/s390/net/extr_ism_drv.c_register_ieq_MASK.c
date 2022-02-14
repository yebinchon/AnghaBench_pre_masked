
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int cmd; } ;
struct TYPE_5__ {int len; void* ieq; TYPE_1__ hdr; } ;
union ism_reg_ieq {TYPE_2__ request; } ;
struct ism_eq {int dummy; } ;
struct ism_dev {int ieq_idx; void* ieq_dma_addr; struct ism_eq* ieq; TYPE_3__* pdev; } ;
typedef void* dma_addr_t ;
typedef int cmd ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ism_eq* FUNC_0 (int *,int ,void**,int ) ;
 int FUNC_1 (int *,int ,struct ism_eq*,void*) ;
 scalar_t__ FUNC_2 (struct ism_dev*,union ism_reg_ieq*) ;
 int FUNC_3 (union ism_reg_ieq*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ism_dev *VAR_5)
{
 union ism_reg_ieq VAR_6;
 dma_addr_t VAR_7;
 struct ism_eq *VAR_8;

 VAR_8 = FUNC_0(&VAR_5->pdev->dev, VAR_4, &VAR_7,
     VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.request.hdr.cmd = VAR_3;
 VAR_6.request.hdr.len = sizeof(VAR_6.request);
 VAR_6.request.ieq = VAR_7;
 VAR_6.request.len = sizeof(*VAR_8);

 if (FUNC_2(VAR_5, &VAR_6)) {
  FUNC_1(&VAR_5->pdev->dev, VAR_4, VAR_8, VAR_7);
  return -VAR_0;
 }

 VAR_5->ieq = VAR_8;
 VAR_5->ieq_idx = -1;
 VAR_5->ieq_dma_addr = VAR_7;

 return 0;
}
