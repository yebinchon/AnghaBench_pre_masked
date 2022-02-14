
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_pf {int hwinfo; } ;
struct nfp_dump_tl {int data; int length; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_dump_tl*) ;
 char* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct nfp_pf *VAR_0, struct nfp_dump_tl *VAR_1)
{
 u32 VAR_2, VAR_3;
 const char *VAR_4;

 VAR_2 = FUNC_1(VAR_1->length);
 VAR_3 = FUNC_5(VAR_1->data, VAR_2);
 if (VAR_3 == VAR_2)
  return FUNC_2(VAR_1);

 VAR_4 = FUNC_3(VAR_0->hwinfo, VAR_1->data);
 if (!VAR_4)
  return FUNC_2(VAR_1);

 return sizeof(struct nfp_dump_tl) + FUNC_0(VAR_3 + FUNC_4(VAR_4) + 2);
}
