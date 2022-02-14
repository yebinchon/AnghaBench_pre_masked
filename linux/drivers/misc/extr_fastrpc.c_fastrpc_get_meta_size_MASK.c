
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct fastrpc_remote_arg {int dummy; } ;
struct fastrpc_phy_page {int dummy; } ;
struct fastrpc_invoke_ctx {int nscalars; } ;
struct fastrpc_invoke_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct fastrpc_invoke_ctx *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = (sizeof(struct fastrpc_remote_arg) +
  sizeof(struct fastrpc_invoke_buf) +
  sizeof(struct fastrpc_phy_page)) * VAR_2->nscalars +
  sizeof(u64) * VAR_1 +
  sizeof(u32) * VAR_0;

 return VAR_3;
}
