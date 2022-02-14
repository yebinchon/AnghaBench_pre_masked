
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct scrub_parity {scalar_t__ stripe_len; scalar_t__ nsectors; scalar_t__ logic_start; TYPE_2__* sctx; } ;
struct TYPE_4__ {TYPE_1__* fs_info; } ;
struct TYPE_3__ {int sectorsize; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned long*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_4(struct scrub_parity *VAR_1,
           unsigned long *VAR_2,
           u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;
 u32 VAR_7;
 int VAR_8 = VAR_1->sctx->fs_info->sectorsize;

 if (VAR_4 >= VAR_1->stripe_len) {
  FUNC_1(VAR_2, 0, VAR_1->nsectors);
  return;
 }

 VAR_3 -= VAR_1->logic_start;
 VAR_3 = FUNC_2(VAR_3, VAR_1->stripe_len, &VAR_5);
 VAR_5 = FUNC_3(VAR_5, VAR_8);
 VAR_6 = FUNC_3(VAR_4, VAR_8);

 FUNC_0(VAR_6 < VAR_0);
 VAR_7 = (u32)VAR_6;

 if (VAR_5 + VAR_7 <= VAR_1->nsectors) {
  FUNC_1(VAR_2, VAR_5, VAR_7);
  return;
 }

 FUNC_1(VAR_2, VAR_5, VAR_1->nsectors - VAR_5);
 FUNC_1(VAR_2, 0, VAR_7 - (VAR_1->nsectors - VAR_5));
}
