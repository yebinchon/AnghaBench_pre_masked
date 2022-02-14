
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct hclge_fd_ad_data {int counter_id; int use_next_stage; int use_counter; int queue_id; int forward_to_direct_queue; int drop_packet; int rule_id; int write_rule_id_to_bd; } ;
struct hclge_fd_ad_config_cmd {int ad_data; int stage; int index; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_14, u8 VAR_15, int VAR_16,
         struct hclge_fd_ad_data *VAR_17)
{
 struct hclge_fd_ad_config_cmd *VAR_18;
 struct hclge_desc VAR_19;
 u64 VAR_20 = 0;
 int VAR_21;

 FUNC_4(&VAR_19, VAR_13, 0);

 VAR_18 = (struct hclge_fd_ad_config_cmd *)VAR_19.data;
 VAR_18->index = FUNC_0(VAR_16);
 VAR_18->stage = VAR_15;

 FUNC_5(VAR_20, VAR_12,
        VAR_17->write_rule_id_to_bd);
 FUNC_6(VAR_20, VAR_9, VAR_10,
   VAR_17->rule_id);
 VAR_20 <<= 32;
 FUNC_5(VAR_20, VAR_3, VAR_17->drop_packet);
 FUNC_5(VAR_20, VAR_2,
        VAR_17->forward_to_direct_queue);
 FUNC_6(VAR_20, VAR_7, VAR_8,
   VAR_17->queue_id);
 FUNC_5(VAR_20, VAR_11, VAR_17->use_counter);
 FUNC_6(VAR_20, VAR_0,
   VAR_1, VAR_17->counter_id);
 FUNC_5(VAR_20, VAR_6, VAR_17->use_next_stage);
 FUNC_6(VAR_20, VAR_4, VAR_5,
   VAR_17->counter_id);

 VAR_18->ad_data = FUNC_1(VAR_20);
 VAR_21 = FUNC_3(&VAR_14->hw, &VAR_19, 1);
 if (VAR_21)
  FUNC_2(&VAR_14->pdev->dev, "fd ad config fail, ret=%d\n", VAR_21);

 return VAR_21;
}
