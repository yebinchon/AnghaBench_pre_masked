
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef unsigned long long u32 ;
struct nfp_rtsym_table {int cpp; } ;
struct nfp_rtsym {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 struct nfp_rtsym* FUNC_1 (struct nfp_rtsym_table*,char const*) ;
 int FUNC_2 (int ,struct nfp_rtsym const*,int ,unsigned long long*) ;
 int FUNC_3 (int ,struct nfp_rtsym const*,int ,unsigned long long*) ;
 int FUNC_4 (struct nfp_rtsym const*) ;

u64 FUNC_5(struct nfp_rtsym_table *VAR_2, const char *VAR_3,
        int *VAR_4)
{
 const struct nfp_rtsym *VAR_5;
 u32 VAR_6;
 u64 VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5) {
  VAR_8 = -VAR_1;
  goto exit;
 }

 switch (FUNC_4(VAR_5)) {
 case 4:
  VAR_8 = FUNC_2(VAR_2->cpp, VAR_5, 0, &VAR_6);
  VAR_7 = VAR_6;
  break;
 case 8:
  VAR_8 = FUNC_3(VAR_2->cpp, VAR_5, 0, &VAR_7);
  break;
 default:
  FUNC_0(VAR_2->cpp,
   "rtsym '%s': unsupported or non-scalar size: %lld\n",
   VAR_3, FUNC_4(VAR_5));
  VAR_8 = -VAR_0;
  break;
 }

exit:
 if (VAR_4)
  *VAR_4 = VAR_8;

 if (VAR_8)
  return ~0ULL;
 return VAR_7;
}
