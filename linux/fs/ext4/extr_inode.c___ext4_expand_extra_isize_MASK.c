
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_xattr_ibody_header {scalar_t__ h_magic; } ;
struct ext4_inode {int dummy; } ;
struct ext4_iloc {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int i_extra_isize; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_xattr_ibody_header* FUNC_1 (struct inode*,struct ext4_inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,unsigned int,struct ext4_inode*,int *) ;
 struct ext4_inode* FUNC_4 (struct ext4_iloc*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (void*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3,
         unsigned int VAR_4,
         struct ext4_iloc *VAR_5,
         handle_t *VAR_6, int *VAR_7)
{
 struct ext4_inode *VAR_8;
 struct ext4_xattr_ibody_header *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_5);

 VAR_9 = FUNC_1(VAR_3, VAR_8);


 if (!FUNC_5(VAR_3, VAR_1) ||
     VAR_9->h_magic != FUNC_2(VAR_2)) {
  FUNC_6((void *)VAR_8 + VAR_0 +
         FUNC_0(VAR_3)->i_extra_isize, 0,
         VAR_4 - FUNC_0(VAR_3)->i_extra_isize);
  FUNC_0(VAR_3)->i_extra_isize = VAR_4;
  return 0;
 }


 VAR_10 = FUNC_3(VAR_3, VAR_4,
        VAR_8, VAR_6);
 if (VAR_10) {



  *VAR_7 = 1;
 }

 return VAR_10;
}
