
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_pf {int hwinfo; } ;
struct nfp_dump_tl {int data; } ;
struct nfp_dump_state {struct nfp_dump_tl* p; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,struct nfp_dump_state*) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct nfp_pf *VAR_1, struct nfp_dump_tl *VAR_2,
  struct nfp_dump_state *VAR_3)
{
 struct nfp_dump_tl *VAR_4 = VAR_3->p;
 u32 VAR_5, VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_1->hwinfo);
 VAR_5 = FUNC_3(VAR_1->hwinfo);
 VAR_6 = sizeof(*VAR_4) + FUNC_0(VAR_5);

 VAR_8 = FUNC_2(VAR_0, VAR_6, VAR_3);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_4->data, VAR_7, VAR_5);

 return 0;
}
