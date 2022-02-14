
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct super_block {int s_blocksize; } ;
struct kernel_long_ad {int extLength; int extLocation; } ;
struct inode {struct super_block* i_sb; } ;
struct extent_position {int dummy; } ;
struct TYPE_2__ {int i_lenExtents; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct extent_position*,int *,int,int) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0,
          struct extent_position *VAR_1,
          struct kernel_long_ad *VAR_2,
          uint32_t VAR_3)
{
 struct super_block *VAR_4 = VAR_0->i_sb;
 uint32_t VAR_5;

 VAR_5 = VAR_3 -
        (VAR_2->extLength & (VAR_4->s_blocksize - 1));
 VAR_2->extLength += VAR_5;
 FUNC_0(VAR_0)->i_lenExtents += VAR_5;

 FUNC_1(VAR_0, VAR_1, &VAR_2->extLocation,
   VAR_2->extLength, 1);
}
