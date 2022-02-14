
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int eh_max; int eh_magic; scalar_t__ eh_entries; scalar_t__ eh_depth; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int *,struct inode*) ;
 struct ext4_extent_header* FUNC_3 (struct inode*) ;

int FUNC_4(handle_t *VAR_1, struct inode *VAR_2)
{
 struct ext4_extent_header *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 VAR_3->eh_depth = 0;
 VAR_3->eh_entries = 0;
 VAR_3->eh_magic = VAR_0;
 VAR_3->eh_max = FUNC_0(FUNC_1(VAR_2, 0));
 FUNC_2(VAR_1, VAR_2);
 return 0;
}
