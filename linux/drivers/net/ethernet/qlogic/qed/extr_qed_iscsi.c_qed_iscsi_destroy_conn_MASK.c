
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_hash_iscsi_con {TYPE_1__* con; } ;
struct qed_dev {int dummy; } ;
struct TYPE_2__ {int abortive_dsconnect; } ;


 int FUNC_0 (struct qed_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 struct qed_hash_iscsi_con* FUNC_2 (struct qed_dev*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_2,
      u32 VAR_3, u8 VAR_4)
{
 struct qed_hash_iscsi_con *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_2, "Failed to find connection for handle %d\n",
     VAR_3);
  return -VAR_0;
 }

 VAR_5->con->abortive_dsconnect = VAR_4;

 return FUNC_3(FUNC_1(VAR_2), VAR_5->con,
        VAR_1, ((void*)0));
}
