
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blocks; int i_size; int i_mode; int i_sb; } ;
struct TYPE_2__ {int i_flags; scalar_t__ i_file_acl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_2)
{
 if (!(FUNC_1(VAR_2)->i_flags & VAR_0)) {
  int VAR_3 = FUNC_1(VAR_2)->i_file_acl ?
    FUNC_0(VAR_2->i_sb) >> 9 : 0;

  if (FUNC_3(VAR_2))
   return 0;

  return (FUNC_2(VAR_2->i_mode) && VAR_2->i_blocks - VAR_3 == 0);
 }
 return FUNC_2(VAR_2->i_mode) && VAR_2->i_size &&
        (VAR_2->i_size < VAR_1 * 4);
}
