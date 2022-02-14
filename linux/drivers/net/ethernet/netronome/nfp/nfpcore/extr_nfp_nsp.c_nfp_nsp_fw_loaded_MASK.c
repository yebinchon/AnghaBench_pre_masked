
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp_command_arg {int code; } ;
struct nfp_nsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_nsp*,struct nfp_nsp_command_arg const*) ;

int FUNC_1(struct nfp_nsp *VAR_1)
{
 const struct nfp_nsp_command_arg VAR_2 = {
  .code = VAR_0,
 };

 return FUNC_0(VAR_1, &VAR_2);
}
