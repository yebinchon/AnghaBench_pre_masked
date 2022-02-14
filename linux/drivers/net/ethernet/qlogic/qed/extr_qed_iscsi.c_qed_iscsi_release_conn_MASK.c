
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hash_iscsi_con {int con; int node; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qed_hash_iscsi_con*) ;
 struct qed_hash_iscsi_con* FUNC_4 (struct qed_dev*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_1, u32 VAR_2)
{
 struct qed_hash_iscsi_con *VAR_3;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_0(VAR_1, "Failed to find connection for handle %d\n",
     VAR_2);
  return -VAR_0;
 }

 FUNC_2(&VAR_3->node);
 FUNC_5(FUNC_1(VAR_1), VAR_3->con);
 FUNC_3(VAR_3);

 return 0;
}
