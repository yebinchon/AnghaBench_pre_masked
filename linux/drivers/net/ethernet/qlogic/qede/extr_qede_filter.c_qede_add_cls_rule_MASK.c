
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qede_dev {TYPE_1__* arfs; } ;
struct qede_arfs_tuple {int dummy; } ;
struct TYPE_5__ {int (* build_hdr ) (TYPE_2__*,void*) ;} ;
struct qede_arfs_fltr_node {int buf_len; int rxq_id; void* data; TYPE_2__ tuple; int sw_id; } ;
struct ethtool_rx_flow_spec {int location; } ;
struct ethtool_rxnfc {struct ethtool_rx_flow_spec fs; } ;
struct TYPE_4__ {int arfs_fltr_bmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (struct qede_arfs_fltr_node*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*,struct qede_arfs_tuple*,int) ;
 int FUNC_5 (struct qede_dev*,struct qede_arfs_fltr_node*,int ,int) ;
 int FUNC_6 (struct qede_dev*,struct qede_arfs_fltr_node*,int ) ;
 scalar_t__ FUNC_7 (struct qede_dev*,struct qede_arfs_tuple*) ;
 int FUNC_8 (struct qede_arfs_tuple*) ;
 int FUNC_9 (struct qede_dev*,struct qede_arfs_fltr_node*,struct ethtool_rx_flow_spec*) ;
 int FUNC_10 (struct qede_dev*,struct qede_arfs_tuple*,struct ethtool_rx_flow_spec*) ;
 int FUNC_11 (struct qede_dev*,struct qede_arfs_fltr_node*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_2__*,void*) ;

int FUNC_14(struct qede_dev *VAR_4, struct ethtool_rxnfc *VAR_5)
{
 struct ethtool_rx_flow_spec *VAR_6 = &VAR_5->fs;
 struct qede_arfs_fltr_node *VAR_7;
 struct qede_arfs_tuple VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(VAR_4);

 if (!VAR_4->arfs) {
  VAR_10 = -VAR_2;
  goto unlock;
 }


 VAR_10 = FUNC_10(VAR_4, &VAR_8, VAR_6);
 if (VAR_10)
  goto unlock;

 if (FUNC_7(VAR_4, &VAR_8)) {
  VAR_10 = -VAR_0;
  goto unlock;
 }

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_10 = -VAR_1;
  goto unlock;
 }

 VAR_9 = FUNC_8(&VAR_8);
 VAR_7->data = FUNC_3(VAR_9, VAR_3);
 if (!VAR_7->data) {
  FUNC_2(VAR_7);
  VAR_10 = -VAR_1;
  goto unlock;
 }

 VAR_7->sw_id = VAR_6->location;
 FUNC_12(VAR_7->sw_id, VAR_4->arfs->arfs_fltr_bmap);
 VAR_7->buf_len = VAR_9;

 FUNC_4(&VAR_7->tuple, &VAR_8, sizeof(VAR_7->tuple));

 FUNC_9(VAR_4, VAR_7, VAR_6);


 VAR_7->tuple.build_hdr(&VAR_7->tuple, VAR_7->data);

 VAR_10 = FUNC_6(VAR_4, VAR_7, 0);
 if (VAR_10)
  goto unlock;

 FUNC_5(VAR_4, VAR_7, VAR_7->rxq_id, 1);
 VAR_10 = FUNC_11(VAR_4, VAR_7);
unlock:
 FUNC_1(VAR_4);

 return VAR_10;
}
