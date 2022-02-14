
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_params {int* mbox_out; } ;
struct ql_adapter {int ndev; int ide_completion; struct mbox_params idc_mbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*,...) ;
 long FUNC_1 (int *,long) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_6)
{
 int VAR_7 = -VAR_3;
 long VAR_8 = 1 * VAR_4;
 struct mbox_params *VAR_9 = &VAR_6->idc_mbc;
 do {



  VAR_8 =
   FUNC_1(&VAR_6->ide_completion,
       VAR_8);
  if (!VAR_8) {
   FUNC_0(VAR_6, VAR_5, VAR_6->ndev, "IDC Timeout.\n");
   break;
  }




  if (VAR_9->mbox_out[0] == VAR_1) {
   FUNC_0(VAR_6, VAR_5, VAR_6->ndev,
      "IDC Time Extension from function.\n");
   VAR_8 += (VAR_9->mbox_out[1] >> 8) & 0x0000000f;
  } else if (VAR_9->mbox_out[0] == VAR_0) {
   FUNC_0(VAR_6, VAR_5, VAR_6->ndev, "IDC Success.\n");
   VAR_7 = 0;
   break;
  } else {
   FUNC_0(VAR_6, VAR_5, VAR_6->ndev,
      "IDC: Invalid State 0x%.04x.\n",
      VAR_9->mbox_out[0]);
   VAR_7 = -VAR_2;
   break;
  }
 } while (VAR_8);

 return VAR_7;
}
