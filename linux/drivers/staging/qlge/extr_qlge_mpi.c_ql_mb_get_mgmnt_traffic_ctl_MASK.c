
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; } ;
struct mbox_params {int in_count; int out_count; scalar_t__* mbox_out; int * mbox_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mbox_params*,int ,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,struct mbox_params*) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_7, u32 *VAR_8)
{
 struct mbox_params VAR_9;
 struct mbox_params *VAR_10 = &VAR_9;
 int VAR_11;

 FUNC_0(VAR_10, 0, sizeof(struct mbox_params));
 *VAR_8 = 0;

 VAR_10->in_count = 1;
 VAR_10->out_count = 1;

 VAR_10->mbox_in[0] = VAR_2;

 VAR_11 = FUNC_2(VAR_7, VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10->mbox_out[0] == VAR_4) {
  *VAR_8 = VAR_10->mbox_in[1];
  return VAR_11;
 }

 if (VAR_10->mbox_out[0] == VAR_5) {
  FUNC_1(VAR_7, VAR_6, VAR_7->ndev,
     "Command not supported by firmware.\n");
  VAR_11 = -VAR_0;
 } else if (VAR_10->mbox_out[0] == VAR_3) {
  FUNC_1(VAR_7, VAR_6, VAR_7->ndev,
     "Failed to get MPI traffic control.\n");
  VAR_11 = -VAR_1;
 }
 return VAR_11;
}
