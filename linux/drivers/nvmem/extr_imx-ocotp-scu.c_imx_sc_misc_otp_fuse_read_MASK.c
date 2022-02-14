
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_misc_fuse_read {int word; struct imx_sc_rpc_msg hdr; } ;
struct imx_sc_ipc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct imx_sc_ipc*,struct imx_sc_msg_misc_fuse_read*,int) ;

__attribute__((used)) static int FUNC_1(struct imx_sc_ipc *VAR_3, u32 VAR_4,
         u32 *VAR_5)
{
 struct imx_sc_msg_misc_fuse_read VAR_6;
 struct imx_sc_rpc_msg *VAR_7 = &VAR_6.hdr;
 int VAR_8;

 VAR_7->ver = VAR_2;
 VAR_7->svc = VAR_1;
 VAR_7->func = VAR_0;
 VAR_7->size = 2;

 VAR_6.word = VAR_4;

 VAR_8 = FUNC_0(VAR_3, &VAR_6, 1);
 if (VAR_8)
  return VAR_8;

 *VAR_5 = VAR_6.word;

 return 0;
}
