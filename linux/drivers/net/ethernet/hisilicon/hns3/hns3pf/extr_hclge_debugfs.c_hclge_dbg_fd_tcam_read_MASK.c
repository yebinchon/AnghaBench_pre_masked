
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hclge_fd_tcam_config_3_cmd {scalar_t__ tcam_data; } ;
struct hclge_fd_tcam_config_2_cmd {scalar_t__ tcam_data; } ;
struct hclge_fd_tcam_config_1_cmd {int xy_sel; scalar_t__ tcam_data; int index; int stage; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; int flag; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,...) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hclge_dev *VAR_2, u8 VAR_3,
       bool VAR_4, u32 VAR_5)
{
 struct hclge_fd_tcam_config_1_cmd *VAR_6;
 struct hclge_fd_tcam_config_2_cmd *VAR_7;
 struct hclge_fd_tcam_config_3_cmd *VAR_8;
 struct hclge_desc VAR_9[3];
 int VAR_10, VAR_11;
 u32 *VAR_12;

 FUNC_4(&VAR_9[0], VAR_1, 1);
 VAR_9[0].flag |= FUNC_0(VAR_0);
 FUNC_4(&VAR_9[1], VAR_1, 1);
 VAR_9[1].flag |= FUNC_0(VAR_0);
 FUNC_4(&VAR_9[2], VAR_1, 1);

 VAR_6 = (struct hclge_fd_tcam_config_1_cmd *)VAR_9[0].data;
 VAR_7 = (struct hclge_fd_tcam_config_2_cmd *)VAR_9[1].data;
 VAR_8 = (struct hclge_fd_tcam_config_3_cmd *)VAR_9[2].data;

 VAR_6->stage = VAR_3;
 VAR_6->xy_sel = VAR_4 ? 1 : 0;
 VAR_6->index = FUNC_1(VAR_5);

 VAR_10 = FUNC_3(&VAR_2->hw, VAR_9, 3);
 if (VAR_10)
  return;

 FUNC_2(&VAR_2->pdev->dev, " read result tcam key %s(%u):\n",
   VAR_4 ? "x" : "y", VAR_5);


 VAR_12 = (u32 *)VAR_6->tcam_data;
 for (VAR_11 = 0; VAR_11 < 2; VAR_11++)
  FUNC_2(&VAR_2->pdev->dev, "%08x\n", *VAR_12++);


 VAR_12 = (u32 *)VAR_7->tcam_data;
 for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
  FUNC_2(&VAR_2->pdev->dev, "%08x\n", *VAR_12++);


 VAR_12 = (u32 *)VAR_8->tcam_data;
 for (VAR_11 = 0; VAR_11 < 5; VAR_11++)
  FUNC_2(&VAR_2->pdev->dev, "%08x\n", *VAR_12++);
}
