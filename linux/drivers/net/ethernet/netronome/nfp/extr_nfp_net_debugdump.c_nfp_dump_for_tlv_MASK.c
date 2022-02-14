
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int dummy; } ;
struct nfp_dumpspec_rtsym {int dummy; } ;
struct nfp_dumpspec_csr {int dummy; } ;
struct nfp_dump_tl {int type; } ;
struct nfp_dump_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_pf*,struct nfp_dumpspec_csr*,struct nfp_dump_state*) ;
 int FUNC_2 (struct nfp_dump_tl*,int ,struct nfp_dump_state*) ;
 int FUNC_3 (struct nfp_pf*,struct nfp_dump_state*) ;
 int FUNC_4 (struct nfp_pf*,struct nfp_dump_tl*,struct nfp_dump_state*) ;
 int FUNC_5 (struct nfp_pf*,struct nfp_dump_tl*,struct nfp_dump_state*) ;
 int FUNC_6 (struct nfp_pf*,struct nfp_dumpspec_csr*,struct nfp_dump_state*) ;
 int FUNC_7 (struct nfp_pf*,struct nfp_dumpspec_rtsym*,struct nfp_dump_state*) ;

__attribute__((used)) static int
FUNC_8(struct nfp_pf *VAR_1, struct nfp_dump_tl *VAR_2, void *VAR_3)
{
 struct nfp_dumpspec_rtsym *VAR_4;
 struct nfp_dump_state *VAR_5 = VAR_3;
 struct nfp_dumpspec_csr *VAR_6;
 int VAR_7;

 switch (FUNC_0(VAR_2->type)) {
 case 134:
  VAR_7 = FUNC_3(VAR_1, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 case 135:
 case 128:
 case 130:
  VAR_6 = (struct nfp_dumpspec_csr *)VAR_2;
  VAR_7 = FUNC_1(VAR_1, VAR_6, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 case 131:
  VAR_6 = (struct nfp_dumpspec_csr *)VAR_2;
  VAR_7 = FUNC_6(VAR_1, VAR_6, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 case 129:
  VAR_4 = (struct nfp_dumpspec_rtsym *)VAR_2;
  VAR_7 = FUNC_7(VAR_1, VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 case 133:
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 case 132:
  VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 default:
  VAR_7 = FUNC_2(VAR_2, -VAR_0, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
