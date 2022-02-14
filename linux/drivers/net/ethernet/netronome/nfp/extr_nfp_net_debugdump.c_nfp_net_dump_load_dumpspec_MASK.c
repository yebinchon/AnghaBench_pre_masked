
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp_rtsym_table {int dummy; } ;
struct nfp_rtsym {int dummy; } ;
struct nfp_dumpspec {int size; int data; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 struct nfp_rtsym* FUNC_0 (struct nfp_rtsym_table*,int ) ;
 int FUNC_1 (struct nfp_cpp*,struct nfp_rtsym const*,int ,int ,int) ;
 int FUNC_2 (struct nfp_rtsym const*) ;
 int FUNC_3 (struct nfp_cpp*,char*) ;
 int FUNC_4 (struct nfp_dumpspec*) ;
 struct nfp_dumpspec* FUNC_5 (int) ;

struct nfp_dumpspec *
FUNC_6(struct nfp_cpp *VAR_1, struct nfp_rtsym_table *VAR_2)
{
 const struct nfp_rtsym *VAR_3;
 struct nfp_dumpspec *VAR_4;
 int VAR_5;
 u64 VAR_6;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_6 = FUNC_2(VAR_3);


 VAR_4 = FUNC_5(sizeof(*VAR_4) + VAR_6);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->size = VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_3, 0, VAR_4->data, VAR_6);
 if (VAR_5 != VAR_6) {
  FUNC_4(VAR_4);
  FUNC_3(VAR_1, "Debug dump specification read failed.\n");
  return ((void*)0);
 }

 return VAR_4;
}
