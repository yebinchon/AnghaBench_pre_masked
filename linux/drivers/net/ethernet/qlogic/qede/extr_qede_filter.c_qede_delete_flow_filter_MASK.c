
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qede_dev {int arfs; } ;
struct qede_arfs_fltr_node {int rxq_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct qede_dev*,int ) ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (struct qede_dev*,struct qede_arfs_fltr_node*,int ,int) ;
 int FUNC_4 (struct qede_dev*,struct qede_arfs_fltr_node*) ;
 struct qede_arfs_fltr_node* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct qede_dev*,struct qede_arfs_fltr_node*) ;

int FUNC_7(struct qede_dev *VAR_1, u64 VAR_2)
{
 struct qede_arfs_fltr_node *VAR_3 = ((void*)0);
 int VAR_4 = -VAR_0;

 FUNC_1(VAR_1);
 if (!VAR_1->arfs)
  goto unlock;

 VAR_3 = FUNC_5(FUNC_0(VAR_1, 0),
      VAR_2);
 if (!VAR_3)
  goto unlock;

 FUNC_3(VAR_1, VAR_3, VAR_3->rxq_id, 0);

 VAR_4 = FUNC_6(VAR_1, VAR_3);
 if (VAR_4 == 0)
  FUNC_4(VAR_1, VAR_3);

unlock:
 FUNC_2(VAR_1);
 return VAR_4;
}
