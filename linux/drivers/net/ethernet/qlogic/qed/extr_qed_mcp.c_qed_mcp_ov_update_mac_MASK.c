
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {int param; int* p_data_src; int data_src_size; int cmd; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
typedef int mb_params ;
struct TYPE_2__ {int wol_mac; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (int ,int*,int ) ;
 int FUNC_3 (struct qed_mcp_mb_params*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;

int FUNC_5(struct qed_hwfn *VAR_4,
     struct qed_ptt *VAR_5, u8 *VAR_6)
{
 struct qed_mcp_mb_params VAR_7;
 u32 VAR_8[2];
 int VAR_9;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cmd = VAR_0;
 VAR_7.param = VAR_1 <<
     VAR_2;
 VAR_7.param |= FUNC_1(VAR_4);






 VAR_8[0] = VAR_6[0] << 24 | VAR_6[1] << 16 | VAR_6[2] << 8 | VAR_6[3];
 VAR_8[1] = VAR_6[4] << 24 | VAR_6[5] << 16;

 VAR_7.p_data_src = (u8 *)VAR_8;
 VAR_7.data_src_size = 8;
 VAR_9 = FUNC_4(VAR_4, VAR_5, &VAR_7);
 if (VAR_9)
  FUNC_0(VAR_4, "Failed to send mac address, rc = %d\n", VAR_9);


 FUNC_2(VAR_4->cdev->wol_mac, VAR_6, VAR_3);

 return VAR_9;
}
