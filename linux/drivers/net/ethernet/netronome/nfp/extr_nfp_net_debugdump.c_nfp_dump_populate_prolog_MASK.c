
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_dump_state {int requested_level; struct nfp_dump_prolog* p; } ;
struct nfp_dump_prolog {int dump_level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct nfp_dump_state*) ;

__attribute__((used)) static int FUNC_2(struct nfp_dump_state *VAR_1)
{
 struct nfp_dump_prolog *VAR_2 = VAR_1->p;
 u32 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(sizeof(*VAR_2));

 VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_2->dump_level = VAR_1->requested_level;

 return 0;
}
