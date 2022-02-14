
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hclge_tqp_map_cmd {unsigned int tqp_flag; void* tqp_vid; int tqp_vf; void* tqp_id; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_3, u16 VAR_4,
      u16 VAR_5, u16 VAR_6, bool VAR_7)
{
 struct hclge_tqp_map_cmd *VAR_8;
 struct hclge_desc VAR_9;
 int VAR_10;

 FUNC_3(&VAR_9, VAR_0, 0);

 VAR_8 = (struct hclge_tqp_map_cmd *)VAR_9.data;
 VAR_8->tqp_id = FUNC_0(VAR_5);
 VAR_8->tqp_vf = VAR_4;
 VAR_8->tqp_flag = 1U << VAR_1;
 if (!VAR_7)
  VAR_8->tqp_flag |= 1U << VAR_2;
 VAR_8->tqp_vid = FUNC_0(VAR_6);

 VAR_10 = FUNC_2(&VAR_3->hw, &VAR_9, 1);
 if (VAR_10)
  FUNC_1(&VAR_3->pdev->dev, "TQP map failed %d.\n", VAR_10);

 return VAR_10;
}
