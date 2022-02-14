
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {int data_src_size; struct qed_mcp_mb_params* p_data_src; int cmd; int * name; int version; } ;
struct qed_mcp_drv_version {int * name; int version; } ;
struct qed_hwfn {int dummy; } ;
struct drv_version_stc {int data_src_size; struct drv_version_stc* p_data_src; int cmd; int * name; int version; } ;
typedef int mb_params ;
typedef int drv_version ;
typedef int __be32 ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qed_mcp_mb_params*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;

int
FUNC_4(struct qed_hwfn *VAR_2,
    struct qed_ptt *VAR_3,
    struct qed_mcp_drv_version *VAR_4)
{
 struct qed_mcp_mb_params VAR_5;
 struct drv_version_stc VAR_6;
 __be32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.version = VAR_4->version;
 for (VAR_8 = 0; VAR_8 < (VAR_1 - 4) / sizeof(u32); VAR_8++) {
  VAR_7 = FUNC_1(*((u32 *)&VAR_4->name[VAR_8 * sizeof(u32)]));
  *(__be32 *)&VAR_6.name[VAR_8 * sizeof(u32)] = VAR_7;
 }

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cmd = VAR_0;
 VAR_5.p_data_src = &VAR_6;
 VAR_5.data_src_size = sizeof(VAR_6);
 VAR_9 = FUNC_3(VAR_2, VAR_3, &VAR_5);
 if (VAR_9)
  FUNC_0(VAR_2, "MCP response failure, aborting\n");

 return VAR_9;
}
