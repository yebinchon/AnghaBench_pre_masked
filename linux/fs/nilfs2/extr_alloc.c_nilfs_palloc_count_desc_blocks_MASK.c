
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef scalar_t__ __u64 ;
struct TYPE_4__ {int i_bmap; } ;
struct TYPE_3__ {int mi_blocks_per_desc_block; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0,
         unsigned long *VAR_1)
{
 __u64 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_4(FUNC_1(VAR_0)->i_bmap, &VAR_2);
 if (FUNC_3(!VAR_3))
  *VAR_1 = FUNC_0(
   (unsigned long)VAR_2,
   FUNC_2(VAR_0)->mi_blocks_per_desc_block);
 return VAR_3;
}
