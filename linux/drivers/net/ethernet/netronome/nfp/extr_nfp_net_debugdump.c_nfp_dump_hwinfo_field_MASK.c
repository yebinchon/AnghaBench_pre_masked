
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_pf {int hwinfo; } ;
struct nfp_dump_tl {char* data; int length; } ;
struct nfp_dump_state {struct nfp_dump_tl* p; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char const*,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,struct nfp_dump_state*) ;
 int FUNC_4 (struct nfp_dump_tl*,int ,struct nfp_dump_state*) ;
 char* FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct nfp_pf *VAR_3, struct nfp_dump_tl *VAR_4,
     struct nfp_dump_state *VAR_5)
{
 struct nfp_dump_tl *VAR_6 = VAR_5->p;
 u32 VAR_7, VAR_8, VAR_9;
 const char *VAR_10, *VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_7 = FUNC_1(VAR_4->length);
 VAR_8 = FUNC_7(VAR_4->data, VAR_7);
 if (VAR_8 == VAR_7)
  return FUNC_4(VAR_4, -VAR_0, VAR_5);

 VAR_10 = VAR_4->data;
 VAR_11 = FUNC_5(VAR_3->hwinfo, VAR_10);
 if (!VAR_11)
  return FUNC_4(VAR_4, -VAR_1, VAR_5);

 VAR_9 = FUNC_6(VAR_11);
 VAR_12 = sizeof(*VAR_6) + FUNC_0(VAR_8 + VAR_9 + 2);
 VAR_13 = FUNC_3(VAR_2, VAR_12, VAR_5);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_6->data, VAR_10, VAR_8 + 1);
 FUNC_2(VAR_6->data + VAR_8 + 1, VAR_11, VAR_9 + 1);

 return 0;
}
