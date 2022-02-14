
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct erofs_super_block {int feature_incompat; } ;
struct TYPE_2__ {unsigned int feature_incompat; } ;


 unsigned int const VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,unsigned int const) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct super_block *VAR_1,
           struct erofs_super_block *VAR_2)
{
 const unsigned int VAR_3 = FUNC_2(VAR_2->feature_incompat);

 FUNC_0(VAR_1)->feature_incompat = VAR_3;


 if (VAR_3 & (~VAR_0)) {
  FUNC_1(VAR_1,
     "unidentified incompatible feature %x, please upgrade kernel version",
      VAR_3 & ~VAR_0);
  return 0;
 }
 return 1;
}
