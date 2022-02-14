
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclge_fd_tcam_config_3_cmd {int tcam_data; } ;
struct hclge_fd_tcam_config_2_cmd {int tcam_data; } ;
struct hclge_fd_tcam_config_1_cmd {int xy_sel; int entry_vld; int tcam_data; int index; int port_info; int stage; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; int flag; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_3, u8 VAR_4, bool VAR_5,
    int VAR_6, u8 *VAR_7, bool VAR_8)
{
 struct hclge_fd_tcam_config_1_cmd *VAR_9;
 struct hclge_fd_tcam_config_2_cmd *VAR_10;
 struct hclge_fd_tcam_config_3_cmd *VAR_11;
 struct hclge_desc VAR_12[3];
 int VAR_13;

 FUNC_4(&VAR_12[0], VAR_2, 0);
 VAR_12[0].flag |= FUNC_0(VAR_0);
 FUNC_4(&VAR_12[1], VAR_2, 0);
 VAR_12[1].flag |= FUNC_0(VAR_0);
 FUNC_4(&VAR_12[2], VAR_2, 0);

 VAR_9 = (struct hclge_fd_tcam_config_1_cmd *)VAR_12[0].data;
 VAR_10 = (struct hclge_fd_tcam_config_2_cmd *)VAR_12[1].data;
 VAR_11 = (struct hclge_fd_tcam_config_3_cmd *)VAR_12[2].data;

 VAR_9->stage = VAR_4;
 VAR_9->xy_sel = VAR_5 ? 1 : 0;
 FUNC_5(VAR_9->port_info, VAR_1, 0);
 VAR_9->index = FUNC_1(VAR_6);
 VAR_9->entry_vld = VAR_5 ? VAR_8 : 0;

 if (VAR_7) {
  FUNC_6(VAR_9->tcam_data, &VAR_7[0], sizeof(VAR_9->tcam_data));
  FUNC_6(VAR_10->tcam_data, &VAR_7[sizeof(VAR_9->tcam_data)],
         sizeof(VAR_10->tcam_data));
  FUNC_6(VAR_11->tcam_data, &VAR_7[sizeof(VAR_9->tcam_data) +
         sizeof(VAR_10->tcam_data)], sizeof(VAR_11->tcam_data));
 }

 VAR_13 = FUNC_3(&VAR_3->hw, VAR_12, 3);
 if (VAR_13)
  FUNC_2(&VAR_3->pdev->dev,
   "config tcam key fail, ret=%d\n",
   VAR_13);

 return VAR_13;
}
