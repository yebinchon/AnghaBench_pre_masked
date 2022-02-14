
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * i_data; } ;
struct ufs_inode_info {TYPE_1__ i_u1; } ;
struct super_block {int dummy; } ;
typedef int dev_t ;
typedef int __u32 ;
struct TYPE_4__ {int s_flags; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;


 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

dev_t
FUNC_6(struct super_block *VAR_1, struct ufs_inode_info *VAR_2)
{
 __u32 VAR_3;
 dev_t VAR_4;

 if ((FUNC_1(VAR_1)->s_flags & VAR_0) == 128)
  VAR_3 = FUNC_2(VAR_1, VAR_2->i_u1.i_data[1]);
 else
  VAR_3 = FUNC_2(VAR_1, VAR_2->i_u1.i_data[0]);
 switch (FUNC_1(VAR_1)->s_flags & VAR_0) {
 case 128:
 case 129:
  if ((VAR_3 & 0xffff0000) == 0 ||
      (VAR_3 & 0xffff0000) == 0xffff0000)
   VAR_4 = FUNC_3(VAR_3 & 0x7fff);
  else
   VAR_4 = FUNC_0(FUNC_4(VAR_3), FUNC_5(VAR_3));
  break;

 default:
  VAR_4 = FUNC_3(VAR_3);
  break;
 }
 return VAR_4;
}
