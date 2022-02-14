
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_sb_info {scalar_t__ s_want_extra_isize; } ;
struct ext4_iloc {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ i_extra_isize; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ext4_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_3 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_4 (struct inode*,scalar_t__,struct ext4_iloc,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode*,int ) ;

int FUNC_7(handle_t *VAR_1, struct inode *VAR_2)
{
 struct ext4_iloc VAR_3;
 struct ext4_sb_info *VAR_4 = FUNC_1(VAR_2->i_sb);
 int VAR_5;

 FUNC_5();
 FUNC_6(VAR_2, VAR_0);
 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;

 if (FUNC_0(VAR_2)->i_extra_isize < VAR_4->s_want_extra_isize)
  FUNC_4(VAR_2, VAR_4->s_want_extra_isize,
            VAR_3, VAR_1);

 return FUNC_2(VAR_1, VAR_2, &VAR_3);
}
