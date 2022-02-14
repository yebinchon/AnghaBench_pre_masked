
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_dump_tl {int length; } ;
struct nfp_dump_state {struct nfp_dump_error* p; } ;
struct nfp_dump_error {int spec; int error; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct nfp_dump_tl*,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,struct nfp_dump_state*) ;

__attribute__((used)) static int
FUNC_5(struct nfp_dump_tl *VAR_1, int VAR_2,
     struct nfp_dump_state *VAR_3)
{
 struct nfp_dump_error *VAR_4 = VAR_3->p;
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = sizeof(*VAR_1) + FUNC_1(VAR_1->length);
 VAR_6 = FUNC_0(sizeof(*VAR_4) + VAR_5);

 VAR_7 = FUNC_4(VAR_0, VAR_6, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_4->error = FUNC_2(VAR_2);
 FUNC_3(VAR_4->spec, VAR_1, VAR_5);

 return 0;
}
