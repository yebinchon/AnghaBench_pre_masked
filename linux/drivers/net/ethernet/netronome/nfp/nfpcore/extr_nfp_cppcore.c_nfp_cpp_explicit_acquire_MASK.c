
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_cpp_explicit {struct nfp_cpp* cpp; } ;
struct nfp_cpp {TYPE_1__* op; } ;
struct TYPE_2__ {scalar_t__ explicit_priv_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nfp_cpp_explicit*) ;
 int VAR_1 ;
 int FUNC_1 (struct nfp_cpp_explicit*) ;
 struct nfp_cpp_explicit* FUNC_2 (scalar_t__,int ) ;

struct nfp_cpp_explicit *FUNC_3(struct nfp_cpp *VAR_2)
{
 struct nfp_cpp_explicit *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3) + VAR_2->op->explicit_priv_size, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->cpp = VAR_2;
 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
