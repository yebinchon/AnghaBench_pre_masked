
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; scalar_t__ mailbox_out; } ;
struct mbox_params {int out_count; int * mbox_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,scalar_t__,int *) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int ) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_3, struct mbox_params *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_1);
 if (VAR_6)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_4->out_count; VAR_5++) {
  VAR_6 =
      FUNC_1(VAR_3, VAR_3->mailbox_out + VAR_5,
         &VAR_4->mbox_out[VAR_5]);
  if (VAR_6) {
   FUNC_0(VAR_3, VAR_2, VAR_3->ndev, "Failed mailbox read.\n");
   break;
  }
 }
 FUNC_3(VAR_3, VAR_1);
 return VAR_6;
}
