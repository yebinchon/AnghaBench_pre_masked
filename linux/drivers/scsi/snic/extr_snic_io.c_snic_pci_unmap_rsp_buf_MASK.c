
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic_sg_desc {scalar_t__ addr; int len; } ;
struct snic_req_info {int dummy; } ;
struct snic {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 struct snic_sg_desc* FUNC_4 (int ) ;
 int FUNC_5 (struct snic_req_info*) ;

void
FUNC_6(struct snic *VAR_1, struct snic_req_info *VAR_2)
{
 struct snic_sg_desc *VAR_3;

 VAR_3 = FUNC_4(FUNC_5(VAR_2));
 FUNC_0(VAR_3[0].addr == 0);
 FUNC_1(&VAR_1->pdev->dev,
    FUNC_3(VAR_3[0].addr),
    FUNC_2(VAR_3[0].len),
    VAR_0);
}
