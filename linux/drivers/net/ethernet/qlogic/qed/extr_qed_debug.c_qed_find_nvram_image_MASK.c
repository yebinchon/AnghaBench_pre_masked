
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct mcp_file_att {int nvm_start_addr; int len; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int,int*,int*,int*,int*) ;

__attribute__((used)) static enum dbg_status FUNC_2(struct qed_hwfn *VAR_7,
         struct qed_ptt *VAR_8,
         u32 VAR_9,
         u32 *VAR_10,
         u32 *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;
 struct mcp_file_att VAR_15;
 int VAR_16;


 VAR_16 = FUNC_1(VAR_7,
     VAR_8,
     VAR_3,
     VAR_9,
     &VAR_12,
     &VAR_13,
     &VAR_14, (u32 *)&VAR_15);


 if (VAR_16 ||
     (VAR_12 & VAR_4) != VAR_5)
  return VAR_1;


 *VAR_10 = VAR_15.nvm_start_addr;
 *VAR_11 = VAR_15.len;

 FUNC_0(VAR_7,
     VAR_6,
     "find_nvram_image: found NVRAM image of type %d in NVRAM offset %d bytes with size %d bytes\n",
     VAR_9, *VAR_10, *VAR_11);


 if (*VAR_11 & 0x3)
  return VAR_0;

 return VAR_2;
}
