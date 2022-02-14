
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_vport {int vport_id; struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int dummy; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hclge_dev*,int ) ;
 int FUNC_2 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct hclge_vport *VAR_0,
      struct hclge_mbx_vf_to_pf_cmd *VAR_1)
{
 struct hclge_dev *VAR_2 = VAR_0->back;
 int VAR_3;

 FUNC_0(&VAR_2->pdev->dev, "PF received VF reset request from VF %d!",
   VAR_0->vport_id);

 VAR_3 = FUNC_1(VAR_2, VAR_0->vport_id);
 FUNC_2(VAR_0, VAR_1, VAR_3, ((void*)0), 0);
}
