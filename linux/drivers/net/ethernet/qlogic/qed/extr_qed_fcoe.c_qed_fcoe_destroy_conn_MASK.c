
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hash_fcoe_con {struct qed_fcoe_conn* con; } ;
struct qed_fcoe_conn {int terminate_params; } ;
struct qed_dev {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct qed_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_dev*) ;
 int VAR_1 ;
 struct qed_hash_fcoe_con* FUNC_2 (struct qed_dev*,int ) ;
 int FUNC_3 (int ,struct qed_fcoe_conn*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_2,
     u32 VAR_3, dma_addr_t VAR_4)
{
 struct qed_hash_fcoe_con *VAR_5;
 struct qed_fcoe_conn *VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_2, "Failed to find connection for handle %d\n",
     VAR_3);
  return -VAR_0;
 }


 VAR_6 = VAR_5->con;
 VAR_6->terminate_params = VAR_4;

 return FUNC_3(FUNC_1(VAR_2), VAR_6,
     VAR_1, ((void*)0));
}
