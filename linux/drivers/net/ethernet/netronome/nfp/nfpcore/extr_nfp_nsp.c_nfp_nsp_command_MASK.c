
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nfp_nsp_command_arg {int code; } ;
struct nfp_nsp {int dummy; } ;


 int FUNC_0 (struct nfp_nsp*,struct nfp_nsp_command_arg const*) ;

__attribute__((used)) static int FUNC_1(struct nfp_nsp *VAR_0, u16 VAR_1)
{
 const struct nfp_nsp_command_arg VAR_2 = {
  .code = VAR_1,
 };

 return FUNC_0(VAR_0, &VAR_2);
}
