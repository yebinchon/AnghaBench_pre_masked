
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qede_dev {TYPE_1__* arfs; } ;
struct qede_arfs_tuple {scalar_t__ mode; } ;
struct TYPE_6__ {int (* build_hdr ) (TYPE_2__*,void*) ;} ;
struct qede_arfs_fltr_node {int buf_len; int b_is_drop; int rxq_id; void* data; TYPE_2__ tuple; int sw_id; } ;
struct flow_cls_offload {int cookie; TYPE_3__* rule; } ;
typedef int __be16 ;
struct TYPE_7__ {int action; } ;
struct TYPE_5__ {scalar_t__ filter_count; scalar_t__ mode; } ;


 int FUNC_0 (struct qede_dev*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (struct qede_arfs_fltr_node*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_2__*,struct qede_arfs_tuple*,int) ;
 int FUNC_6 (struct qede_dev*,struct qede_arfs_fltr_node*,int ,int) ;
 int FUNC_7 (struct qede_dev*,struct qede_arfs_fltr_node*,int ) ;
 scalar_t__ FUNC_8 (struct qede_dev*,struct qede_arfs_tuple*) ;
 int FUNC_9 (struct qede_arfs_tuple*) ;
 scalar_t__ FUNC_10 (struct qede_dev*,int *) ;
 scalar_t__ FUNC_11 (struct qede_dev*,int ,TYPE_3__*,struct qede_arfs_tuple*) ;
 int FUNC_12 (struct qede_dev*,struct qede_arfs_fltr_node*) ;
 int FUNC_13 (TYPE_2__*,void*) ;

int FUNC_14(struct qede_dev *VAR_6, __be16 VAR_7,
       struct flow_cls_offload *VAR_8)
{
 struct qede_arfs_fltr_node *VAR_9;
 int VAR_10, VAR_11 = -VAR_1;
 struct qede_arfs_tuple VAR_12;

 FUNC_1(VAR_6);

 if (!VAR_6->arfs) {
  VAR_11 = -VAR_3;
  goto unlock;
 }


 if (FUNC_11(VAR_6, VAR_7, VAR_8->rule, &VAR_12))
  goto unlock;


 if ((VAR_6->arfs->filter_count && VAR_6->arfs->mode != VAR_12.mode) ||
     VAR_6->arfs->filter_count == VAR_5) {
  FUNC_0(VAR_6,
     "Filter configuration invalidated, filter mode=0x%x, configured mode=0x%x, filter count=0x%x\n",
     VAR_12.mode, VAR_6->arfs->mode, VAR_6->arfs->filter_count);
  goto unlock;
 }


 if (FUNC_10(VAR_6, &VAR_8->rule->action))
  goto unlock;

 if (FUNC_8(VAR_6, &VAR_12)) {
  VAR_11 = -VAR_0;
  goto unlock;
 }

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_4);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto unlock;
 }

 VAR_10 = FUNC_9(&VAR_12);

 VAR_9->data = FUNC_4(VAR_10, VAR_4);
 if (!VAR_9->data) {
  FUNC_3(VAR_9);
  VAR_11 = -VAR_2;
  goto unlock;
 }

 FUNC_5(&VAR_9->tuple, &VAR_12, sizeof(VAR_9->tuple));

 VAR_9->buf_len = VAR_10;
 VAR_9->b_is_drop = 1;
 VAR_9->sw_id = VAR_8->cookie;

 VAR_9->tuple.build_hdr(&VAR_9->tuple, VAR_9->data);

 VAR_11 = FUNC_7(VAR_6, VAR_9, 0);
 if (VAR_11)
  goto unlock;

 FUNC_6(VAR_6, VAR_9, VAR_9->rxq_id, 1);
 VAR_11 = FUNC_12(VAR_6, VAR_9);

unlock:
 FUNC_2(VAR_6);
 return VAR_11;
}
