
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; int max_frame_size; int link_config; } ;
struct mbox_params {int in_count; int out_count; scalar_t__* mbox_out; int * mbox_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mbox_params*,int ,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,struct mbox_params*) ;

int FUNC_3(struct ql_adapter *VAR_5)
{
 struct mbox_params VAR_6;
 struct mbox_params *VAR_7 = &VAR_6;
 int VAR_8 = 0;

 FUNC_0(VAR_7, 0, sizeof(struct mbox_params));

 VAR_7->in_count = 3;
 VAR_7->out_count = 1;

 VAR_7->mbox_in[0] = VAR_1;
 VAR_7->mbox_in[1] = VAR_5->link_config;
 VAR_7->mbox_in[2] = VAR_5->max_frame_size;


 VAR_8 = FUNC_2(VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->mbox_out[0] == VAR_3) {
  FUNC_1(VAR_5, VAR_4, VAR_5->ndev,
     "Port Config sent, wait for IDC.\n");
 } else if (VAR_7->mbox_out[0] != VAR_2) {
  FUNC_1(VAR_5, VAR_4, VAR_5->ndev,
     "Failed Set Port Configuration.\n");
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
