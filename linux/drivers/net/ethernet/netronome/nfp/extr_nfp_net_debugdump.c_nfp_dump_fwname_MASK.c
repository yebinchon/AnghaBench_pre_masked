
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_pf {int mip; } ;
struct nfp_dump_tl {int data; } ;
struct nfp_dump_state {struct nfp_dump_tl* p; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,struct nfp_dump_state*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct nfp_pf *VAR_1, struct nfp_dump_state *VAR_2)
{
 struct nfp_dump_tl *VAR_3 = VAR_2->p;
 u32 VAR_4, VAR_5;
 const char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_1->mip);
 VAR_4 = FUNC_4(VAR_6);
 VAR_5 = sizeof(*VAR_3) + FUNC_0(VAR_4 + 1);

 VAR_7 = FUNC_2(VAR_0, VAR_5, VAR_2);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_3->data, VAR_6, VAR_4);

 return 0;
}
