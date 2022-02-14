
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int eh_entries; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {scalar_t__ p_idx; struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 struct ext4_extent* FUNC_0 (struct ext4_extent_header*) ;
 scalar_t__ FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (struct inode*,int ) ;
 scalar_t__ FUNC_3 (struct ext4_extent*) ;
 int FUNC_4 (int *,struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_1, struct inode *VAR_2,
         ext4_lblk_t VAR_3,
         struct ext4_ext_path *VAR_4,
         unsigned int VAR_5)
{
 int VAR_6, VAR_7;
 struct ext4_extent_header *VAR_8;
 struct ext4_extent *VAR_9;

 if (!FUNC_5(VAR_2, VAR_0))
  return 0;

 VAR_7 = FUNC_6(VAR_2);
 VAR_8 = VAR_4[VAR_7].p_hdr;






 if (FUNC_8(!VAR_8->eh_entries))
  goto out;
 VAR_9 = FUNC_0(VAR_8);
 if (VAR_3 + VAR_5 < FUNC_7(VAR_9->ee_block) +
     FUNC_3(VAR_9))
  return 0;







 for (VAR_6 = VAR_7-1; VAR_6 >= 0; VAR_6--)
  if (VAR_4[VAR_6].p_idx != FUNC_1(VAR_4[VAR_6].p_hdr))
   return 0;
out:
 FUNC_2(VAR_2, VAR_0);
 return FUNC_4(VAR_1, VAR_2);
}
