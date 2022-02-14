
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ufs_sb_private_info {int s_apbshift; int s_bshift; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 long long VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static u64 FUNC_1(struct super_block *VAR_2)
{
 struct ufs_sb_private_info *VAR_3 = FUNC_0(VAR_2)->s_uspi;
 int VAR_4 = VAR_3->s_apbshift;
 u64 VAR_5;

 if (VAR_4 > 21)
  VAR_5 = ~0ULL;
 else
  VAR_5 = VAR_1 + (1LL << VAR_4) + (1LL << (2*VAR_4)) +
   (1LL << (3*VAR_4));

 if (VAR_5 >= (VAR_0 >> VAR_3->s_bshift))
  return VAR_0;
 return VAR_5 << VAR_3->s_bshift;
}
