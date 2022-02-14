
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** i_data; } ;
struct ufs_inode_info {TYPE_1__ i_u1; } ;
struct super_block {int dummy; } ;
typedef int dev_t ;
typedef int __u32 ;
struct TYPE_4__ {int s_flags; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;


 void* FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct super_block *VAR_1, struct ufs_inode_info *VAR_2, dev_t VAR_3)
{
 __u32 VAR_4;

 switch (FUNC_0(VAR_1)->s_flags & VAR_0) {
 case 128:
 case 129:
  VAR_4 = FUNC_3(VAR_3);
  if ((VAR_4 & 0xffff8000) == 0) {
   VAR_4 = FUNC_2(VAR_3);
  }
  break;

 default:
  VAR_4 = FUNC_2(VAR_3);
  break;
 }
 if ((FUNC_0(VAR_1)->s_flags & VAR_0) == 128)
  VAR_2->i_u1.i_data[1] = FUNC_1(VAR_1, VAR_4);
 else
  VAR_2->i_u1.i_data[0] = FUNC_1(VAR_1, VAR_4);
}
