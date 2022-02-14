
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; } ;
struct mbox_params {int in_count; int out_count; scalar_t__* mbox_out; int * mbox_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mbox_params*,int ,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,struct mbox_params*) ;

int FUNC_3(struct ql_adapter *VAR_6, u32 VAR_7)
{
 struct mbox_params VAR_8;
 struct mbox_params *VAR_9 = &VAR_8;
 int VAR_10;

 FUNC_0(VAR_9, 0, sizeof(struct mbox_params));

 VAR_9->in_count = 1;
 VAR_9->out_count = 2;

 VAR_9->mbox_in[0] = VAR_1;
 VAR_9->mbox_in[1] = VAR_7;

 VAR_10 = FUNC_2(VAR_6, VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->mbox_out[0] == VAR_3)
  return VAR_10;

 if (VAR_9->mbox_out[0] == VAR_4) {
  FUNC_1(VAR_6, VAR_5, VAR_6->ndev,
     "Command not supported by firmware.\n");
  VAR_10 = -VAR_0;
 } else if (VAR_9->mbox_out[0] == VAR_2) {




  FUNC_1(VAR_6, VAR_5, VAR_6->ndev,
     "Command parameters make no change.\n");
 }
 return VAR_10;
}
