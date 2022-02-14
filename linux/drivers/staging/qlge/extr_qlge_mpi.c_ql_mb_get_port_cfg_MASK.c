
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {scalar_t__ link_config; scalar_t__ max_frame_size; int ndev; } ;
struct mbox_params {int in_count; int out_count; scalar_t__* mbox_out; int * mbox_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mbox_params*,int ,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,int ,char*) ;
 int FUNC_3 (struct ql_adapter*,struct mbox_params*) ;

int FUNC_4(struct ql_adapter *VAR_5)
{
 struct mbox_params VAR_6;
 struct mbox_params *VAR_7 = &VAR_6;
 int VAR_8 = 0;

 FUNC_0(VAR_7, 0, sizeof(struct mbox_params));

 VAR_7->in_count = 1;
 VAR_7->out_count = 3;

 VAR_7->mbox_in[0] = VAR_2;

 VAR_8 = FUNC_3(VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->mbox_out[0] != VAR_3) {
  FUNC_1(VAR_5, VAR_4, VAR_5->ndev,
     "Failed Get Port Configuration.\n");
  VAR_8 = -VAR_0;
 } else {
  FUNC_2(VAR_5, VAR_4, VAR_1, VAR_5->ndev,
        "Passed Get Port Configuration.\n");
  VAR_5->link_config = VAR_7->mbox_out[1];
  VAR_5->max_frame_size = VAR_7->mbox_out[2];
 }
 return VAR_8;
}
