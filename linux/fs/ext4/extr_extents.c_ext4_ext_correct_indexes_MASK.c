
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {void* ee_block; } ;
struct ext4_ext_path {TYPE_1__* p_idx; struct ext4_extent_header* p_hdr; struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef void* __le32 ;
struct TYPE_2__ {void* ei_block; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*,struct ext4_extent*,struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 TYPE_1__* FUNC_2 (struct ext4_extent_header*) ;
 int FUNC_3 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(handle_t *VAR_1, struct inode *VAR_2,
    struct ext4_ext_path *VAR_3)
{
 struct ext4_extent_header *VAR_4;
 int VAR_5 = FUNC_5(VAR_2);
 struct ext4_extent *VAR_6;
 __le32 VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_4 = VAR_3[VAR_5].p_hdr;
 VAR_6 = VAR_3[VAR_5].p_ext;

 if (FUNC_6(VAR_6 == ((void*)0) || VAR_4 == ((void*)0))) {
  FUNC_0(VAR_2,
     "ex %p == NULL or eh %p == NULL", VAR_6, VAR_4);
  return -VAR_0;
 }

 if (VAR_5 == 0) {

  return 0;
 }

 if (VAR_6 != FUNC_1(VAR_4)) {

  return 0;
 }




 VAR_8 = VAR_5 - 1;
 VAR_7 = VAR_3[VAR_5].p_ext->ee_block;
 VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3 + VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_3[VAR_8].p_idx->ei_block = VAR_7;
 VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3 + VAR_8);
 if (VAR_9)
  return VAR_9;

 while (VAR_8--) {

  if (VAR_3[VAR_8+1].p_idx != FUNC_2(VAR_3[VAR_8+1].p_hdr))
   break;
  VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3 + VAR_8);
  if (VAR_9)
   break;
  VAR_3[VAR_8].p_idx->ei_block = VAR_7;
  VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3 + VAR_8);
  if (VAR_9)
   break;
 }

 return VAR_9;
}
