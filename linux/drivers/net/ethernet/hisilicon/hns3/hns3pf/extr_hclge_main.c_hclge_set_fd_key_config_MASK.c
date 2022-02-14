
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclge_set_fd_key_config_cmd {int stage; void* meta_data_mask; void* tuple_mask; int outer_dipv6_word_en; int outer_sipv6_word_en; int inner_dipv6_word_en; int inner_sipv6_word_en; int key_select; } ;
struct hclge_fd_key_cfg {int meta_data_active; int tuple_active; int outer_dipv6_word_en; int outer_sipv6_word_en; int inner_dipv6_word_en; int inner_sipv6_word_en; int key_sel; } ;
struct TYPE_3__ {struct hclge_fd_key_cfg* key_cfg; } ;
struct hclge_dev {TYPE_2__* pdev; int hw; TYPE_1__ fd_cfg; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_1, int VAR_2)
{
 struct hclge_set_fd_key_config_cmd *VAR_3;
 struct hclge_fd_key_cfg *VAR_4;
 struct hclge_desc VAR_5;
 int VAR_6;

 FUNC_3(&VAR_5, VAR_0, 0);

 VAR_3 = (struct hclge_set_fd_key_config_cmd *)VAR_5.data;
 VAR_4 = &VAR_1->fd_cfg.key_cfg[VAR_2];
 VAR_3->stage = VAR_2;
 VAR_3->key_select = VAR_4->key_sel;
 VAR_3->inner_sipv6_word_en = VAR_4->inner_sipv6_word_en;
 VAR_3->inner_dipv6_word_en = VAR_4->inner_dipv6_word_en;
 VAR_3->outer_sipv6_word_en = VAR_4->outer_sipv6_word_en;
 VAR_3->outer_dipv6_word_en = VAR_4->outer_dipv6_word_en;
 VAR_3->tuple_mask = FUNC_0(~VAR_4->tuple_active);
 VAR_3->meta_data_mask = FUNC_0(~VAR_4->meta_data_active);

 VAR_6 = FUNC_2(&VAR_1->hw, &VAR_5, 1);
 if (VAR_6)
  FUNC_1(&VAR_1->pdev->dev, "set fd key fail, ret=%d\n", VAR_6);

 return VAR_6;
}
