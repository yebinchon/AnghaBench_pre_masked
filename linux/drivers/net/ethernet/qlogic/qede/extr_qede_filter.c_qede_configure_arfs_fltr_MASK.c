
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qede_dev {int cdev; struct qed_eth_ops* ops; } ;
struct TYPE_2__ {int (* stringify ) (TYPE_1__*,char*) ;} ;
struct qede_arfs_fltr_node {int used; int filter_op; scalar_t__ vfid; int sw_id; TYPE_1__ tuple; int b_is_drop; int buf_len; int mapping; } ;
struct qed_ntuple_filter_params {int b_is_add; int b_is_vf; scalar_t__ vf_id; int b_is_drop; int qid; int length; int addr; } ;
struct qed_eth_ops {int (* ntuple_filter_config ) (int ,struct qede_arfs_fltr_node*,struct qed_ntuple_filter_params*) ;} ;
typedef int params ;


 int FUNC_0 (struct qede_dev*,int ,char*,char*,int ,char*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_ntuple_filter_params*,int ,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ,struct qede_arfs_fltr_node*,struct qed_ntuple_filter_params*) ;

__attribute__((used)) static void FUNC_4(struct qede_dev *VAR_2,
         struct qede_arfs_fltr_node *VAR_3,
         u16 VAR_4, bool VAR_5)
{
 const struct qed_eth_ops *VAR_6 = VAR_2->ops;
 struct qed_ntuple_filter_params VAR_7;

 if (VAR_3->used)
  return;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.addr = VAR_3->mapping;
 VAR_7.length = VAR_3->buf_len;
 VAR_7.qid = VAR_4;
 VAR_7.b_is_add = VAR_5;
 VAR_7.b_is_drop = VAR_3->b_is_drop;

 if (VAR_3->vfid) {
  VAR_7.b_is_vf = 1;
  VAR_7.vf_id = VAR_3->vfid - 1;
 }

 if (VAR_3->tuple.stringify) {
  char VAR_8[VAR_1];

  VAR_3->tuple.stringify(&VAR_3->tuple, VAR_8);
  FUNC_0(VAR_2, VAR_0,
      "%s sw_id[0x%llx]: %s [vf %u queue %d]\n",
      VAR_5 ? "Adding" : "Deleting",
      VAR_3->sw_id, VAR_8, VAR_3->vfid, VAR_4);
 }

 VAR_3->used = 1;
 VAR_3->filter_op = VAR_5;
 VAR_6->ntuple_filter_config(VAR_2->cdev, VAR_3, &VAR_7);
}
