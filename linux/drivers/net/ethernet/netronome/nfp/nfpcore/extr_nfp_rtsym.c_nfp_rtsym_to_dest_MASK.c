
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nfp_rtsym {scalar_t__ type; int addr; scalar_t__ target; int domain; int name; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct nfp_cpp*) ;
 int FUNC_2 (struct nfp_cpp*,char*,int ,...) ;

__attribute__((used)) static int
FUNC_3(struct nfp_cpp *VAR_6, const struct nfp_rtsym *VAR_7,
    u8 VAR_8, u8 VAR_9, u64 VAR_10, u32 *VAR_11, u64 *VAR_12)
{
 if (VAR_7->type != VAR_5) {
  FUNC_2(VAR_6, "rtsym '%s': direct access to non-object rtsym\n",
   VAR_7->name);
  return -VAR_0;
 }

 *VAR_12 = VAR_7->addr + VAR_10;

 if (VAR_7->target == VAR_4) {
  int VAR_13 = FUNC_1(VAR_6);

  *VAR_12 &= ~(VAR_3 << VAR_13);
  *VAR_12 |= VAR_2 << VAR_13;

  *VAR_11 = FUNC_0(VAR_1, VAR_8, VAR_9,
         VAR_7->domain);
 } else if (VAR_7->target < 0) {
  FUNC_2(VAR_6, "rtsym '%s': unhandled target encoding: %d\n",
   VAR_7->name, VAR_7->target);
  return -VAR_0;
 } else {
  *VAR_11 = FUNC_0(VAR_7->target, VAR_8, VAR_9,
         VAR_7->domain);
 }

 return 0;
}
