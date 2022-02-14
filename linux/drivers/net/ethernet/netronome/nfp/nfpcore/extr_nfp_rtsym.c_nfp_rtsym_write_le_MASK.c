
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp_rtsym_table {int cpp; } ;
struct nfp_rtsym {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 struct nfp_rtsym* FUNC_1 (struct nfp_rtsym_table*,char const*) ;
 int FUNC_2 (struct nfp_rtsym const*) ;
 int FUNC_3 (int ,struct nfp_rtsym const*,int ,int ) ;
 int FUNC_4 (int ,struct nfp_rtsym const*,int ,int ) ;

int FUNC_5(struct nfp_rtsym_table *VAR_2, const char *VAR_3,
         u64 VAR_4)
{
 const struct nfp_rtsym *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_1;

 switch (FUNC_2(VAR_5)) {
 case 4:
  VAR_6 = FUNC_3(VAR_2->cpp, VAR_5, 0, VAR_4);
  break;
 case 8:
  VAR_6 = FUNC_4(VAR_2->cpp, VAR_5, 0, VAR_4);
  break;
 default:
  FUNC_0(VAR_2->cpp,
   "rtsym '%s': unsupported or non-scalar size: %lld\n",
   VAR_3, FUNC_2(VAR_5));
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
