
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_vle_decompressed_index {int dummy; } ;
struct z_erofs_map_header {int dummy; } ;
struct erofs_xattr_ibody_header {int dummy; } ;
struct erofs_xattr_entry {int dummy; } ;
struct erofs_super_block {int dummy; } ;
struct erofs_inode_extended {int dummy; } ;
struct erofs_inode_compact {int dummy; } ;
struct erofs_dirent {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(void)
{
 FUNC_1(sizeof(struct erofs_super_block) != 128);
 FUNC_1(sizeof(struct erofs_inode_compact) != 32);
 FUNC_1(sizeof(struct erofs_inode_extended) != 64);
 FUNC_1(sizeof(struct erofs_xattr_ibody_header) != 12);
 FUNC_1(sizeof(struct erofs_xattr_entry) != 4);
 FUNC_1(sizeof(struct z_erofs_map_header) != 8);
 FUNC_1(sizeof(struct z_erofs_vle_decompressed_index) != 8);
 FUNC_1(sizeof(struct erofs_dirent) != 12);

 FUNC_1(FUNC_0(VAR_1) <
       VAR_0 - 1);
}
