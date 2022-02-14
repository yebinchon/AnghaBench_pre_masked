
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_2__ {int * rule_num; } ;
struct hclge_dev {TYPE_1__ fd_cfg; int hclge_fd_rule_num; } ;
struct ethtool_rxnfc {int data; int rule_cnt; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_2,
     struct ethtool_rxnfc *VAR_3)
{
 struct hclge_vport *VAR_4 = FUNC_0(VAR_2);
 struct hclge_dev *VAR_5 = VAR_4->back;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 VAR_3->rule_cnt = VAR_5->hclge_fd_rule_num;
 VAR_3->data = VAR_5->fd_cfg.rule_num[VAR_1];

 return 0;
}
