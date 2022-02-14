
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_pf {int hwinfo; } ;
struct TYPE_2__ {int dump_length; } ;
struct nfp_dumpspec_csr {TYPE_1__ cpp; } ;
struct nfp_dump_tl {int type; } ;
struct nfp_dump_csr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_pf*) ;
 int FUNC_3 (struct nfp_pf*,struct nfp_dump_tl*) ;
 int FUNC_4 (struct nfp_pf*,struct nfp_dump_tl*) ;
 int FUNC_5 (struct nfp_dumpspec_csr*) ;
 int FUNC_6 (struct nfp_dump_tl*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct nfp_pf *VAR_1, struct nfp_dump_tl *VAR_2, void *VAR_3)
{
 struct nfp_dumpspec_csr *VAR_4;
 u32 *VAR_5 = VAR_3;
 u32 VAR_6;

 switch (FUNC_1(VAR_2->type)) {
 case 134:
  *VAR_5 += FUNC_2(VAR_1);
  break;
 case 135:
 case 128:
 case 130:
  VAR_4 = (struct nfp_dumpspec_csr *)VAR_2;
  if (!FUNC_5(VAR_4))
   *VAR_5 += FUNC_6(VAR_2);
  else
   *VAR_5 += FUNC_0(sizeof(struct nfp_dump_csr)) +
     FUNC_0(FUNC_1(VAR_4->cpp.dump_length));
  break;
 case 131:
  VAR_4 = (struct nfp_dumpspec_csr *)VAR_2;
  if (!FUNC_5(VAR_4))
   *VAR_5 += FUNC_6(VAR_2);
  else
   *VAR_5 += FUNC_0(sizeof(struct nfp_dump_csr)) +
     FUNC_0(FUNC_1(VAR_4->cpp.dump_length) *
     VAR_0);
  break;
 case 129:
  *VAR_5 += FUNC_4(VAR_1, VAR_2);
  break;
 case 133:
  VAR_6 = FUNC_7(VAR_1->hwinfo);
  *VAR_5 += sizeof(struct nfp_dump_tl) + FUNC_0(VAR_6);
  break;
 case 132:
  *VAR_5 += FUNC_3(VAR_1, VAR_2);
  break;
 default:
  *VAR_5 += FUNC_6(VAR_2);
  break;
 }

 return 0;
}
