
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp_command_arg {int (* error_cb ) (struct nfp_nsp*,int) ;int code; } ;
struct nfp_nsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_nsp*,struct nfp_nsp_command_arg const*) ;
 int FUNC_1 (struct nfp_nsp*,int) ;

int FUNC_2(struct nfp_nsp *VAR_1)
{
 const struct nfp_nsp_command_arg VAR_2 = {
  .code = VAR_0,
  .error_cb = FUNC_1,
 };
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_1, VAR_3);
 return 0;
}
