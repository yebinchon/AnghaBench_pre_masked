
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {scalar_t__* rule_num; } ;
struct hclge_dev {int fd_rule_lock; TYPE_2__* pdev; TYPE_1__ fd_cfg; } ;
struct ethtool_rxnfc {int fs; } ;
struct ethtool_rx_flow_spec {scalar_t__ location; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct hclge_dev*,scalar_t__) ;
 int FUNC_2 (struct hclge_dev*,size_t,int,scalar_t__,int *,int) ;
 int FUNC_3 (struct hclge_dev*,int *,scalar_t__,int) ;
 struct hclge_vport* FUNC_4 (struct hnae3_handle*) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct hnae3_handle *VAR_4,
         struct ethtool_rxnfc *VAR_5)
{
 struct hclge_vport *VAR_6 = FUNC_4(VAR_4);
 struct hclge_dev *VAR_7 = VAR_6->back;
 struct ethtool_rx_flow_spec *VAR_8;
 int VAR_9;

 if (!FUNC_5(VAR_7))
  return -VAR_2;

 VAR_8 = (struct ethtool_rx_flow_spec *)&VAR_5->fs;

 if (VAR_8->location >= VAR_7->fd_cfg.rule_num[VAR_3])
  return -VAR_0;

 if (!FUNC_1(VAR_7, VAR_8->location)) {
  FUNC_0(&VAR_7->pdev->dev,
   "Delete fail, rule %d is inexistent\n", VAR_8->location);
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_3, 1, VAR_8->location,
       ((void*)0), 0);
 if (VAR_9)
  return VAR_9;

 FUNC_6(&VAR_7->fd_rule_lock);
 VAR_9 = FUNC_3(VAR_7, ((void*)0), VAR_8->location, 0);

 FUNC_7(&VAR_7->fd_rule_lock);

 return VAR_9;
}
