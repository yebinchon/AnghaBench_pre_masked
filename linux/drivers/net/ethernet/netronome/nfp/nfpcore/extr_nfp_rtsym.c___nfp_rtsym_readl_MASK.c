
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct nfp_rtsym {int name; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_cpp*,int ,scalar_t__,int *) ;
 int FUNC_1 (struct nfp_cpp*,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nfp_rtsym const*) ;
 int FUNC_3 (struct nfp_cpp*,struct nfp_rtsym const*,int ,int ,scalar_t__,int *,scalar_t__*) ;

int FUNC_4(struct nfp_cpp *VAR_1, const struct nfp_rtsym *VAR_2,
        u8 VAR_3, u8 VAR_4, u64 VAR_5, u32 *VAR_6)
{
 u32 VAR_7;
 u64 VAR_8;
 int VAR_9;

 if (VAR_5 + 4 > FUNC_2(VAR_2)) {
  FUNC_1(VAR_1, "rtsym '%s': readl out of bounds: off: %lld + 4 > size: %lld\n",
   VAR_2->name, VAR_5, FUNC_2(VAR_2));
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;

 return FUNC_0(VAR_1, VAR_7, VAR_8, VAR_6);
}
