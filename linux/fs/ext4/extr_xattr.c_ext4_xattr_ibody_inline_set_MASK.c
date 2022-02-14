
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_xattr_search {int first; } ;
struct ext4_xattr_info {int dummy; } ;
struct ext4_xattr_ibody_header {void* h_magic; } ;
struct ext4_xattr_ibody_find {int iloc; struct ext4_xattr_search s; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ i_extra_isize; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_xattr_ibody_header* FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct ext4_xattr_info*,struct ext4_xattr_search*,int *,struct inode*,int) ;

int FUNC_8(handle_t *VAR_3, struct inode *VAR_4,
    struct ext4_xattr_info *VAR_5,
    struct ext4_xattr_ibody_find *VAR_6)
{
 struct ext4_xattr_ibody_header *VAR_7;
 struct ext4_xattr_search *VAR_8 = &VAR_6->s;
 int VAR_9;

 if (FUNC_0(VAR_4)->i_extra_isize == 0)
  return -VAR_0;
 VAR_9 = FUNC_7(VAR_5, VAR_8, VAR_3, VAR_4, 0 );
 if (VAR_9)
  return VAR_9;
 VAR_7 = FUNC_1(VAR_4, FUNC_5(&VAR_6->iloc));
 if (!FUNC_2(VAR_8->first)) {
  VAR_7->h_magic = FUNC_3(VAR_2);
  FUNC_6(VAR_4, VAR_1);
 } else {
  VAR_7->h_magic = FUNC_3(0);
  FUNC_4(VAR_4, VAR_1);
 }
 return 0;
}
