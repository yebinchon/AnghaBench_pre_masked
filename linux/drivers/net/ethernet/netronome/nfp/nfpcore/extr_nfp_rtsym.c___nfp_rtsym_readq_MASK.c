
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct nfp_rtsym {scalar_t__ type; scalar_t__ addr; int name; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nfp_cpp*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct nfp_cpp*,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nfp_rtsym const*) ;
 int FUNC_3 (struct nfp_cpp*,struct nfp_rtsym const*,int ,int ,scalar_t__,int *,scalar_t__*) ;

int FUNC_4(struct nfp_cpp *VAR_2, const struct nfp_rtsym *VAR_3,
        u8 VAR_4, u8 VAR_5, u64 VAR_6, u64 *VAR_7)
{
 u32 VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (VAR_6 + 8 > FUNC_2(VAR_3)) {
  FUNC_1(VAR_2, "rtsym '%s': readq out of bounds: off: %lld + 8 > size: %lld\n",
   VAR_3->name, VAR_6, FUNC_2(VAR_3));
  return -VAR_0;
 }

 if (VAR_3->type == VAR_1) {
  *VAR_7 = VAR_3->addr;
  return 0;
 }

 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 return FUNC_0(VAR_2, VAR_8, VAR_9, VAR_7);
}
