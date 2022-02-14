
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_super_block {int dummy; } ;
struct squashfs_sb_info {int dummy; } ;
typedef void squashfs_page_actor ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned short) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ) ;
 void* FUNC_4 (struct squashfs_sb_info*,void*,int) ;
 void* FUNC_5 (void**,int,int ) ;
 int FUNC_6 (struct super_block*,int,int ,int *,void*) ;

__attribute__((used)) static void *FUNC_7(struct super_block *VAR_3, unsigned short VAR_4)
{
 struct squashfs_sb_info *VAR_5 = VAR_3->s_fs_info;
 void *VAR_6 = ((void*)0), *VAR_7;
 struct squashfs_page_actor *VAR_8 = ((void*)0);
 int VAR_9 = 0;




 if (FUNC_1(VAR_4)) {
  VAR_6 = FUNC_3(VAR_2, VAR_1);
  if (VAR_6 == ((void*)0)) {
   VAR_7 = FUNC_0(-VAR_0);
   goto out;
  }

  VAR_8 = FUNC_5(&VAR_6, 1, 0);
  if (VAR_8 == ((void*)0)) {
   VAR_7 = FUNC_0(-VAR_0);
   goto out;
  }

  VAR_9 = FUNC_6(VAR_3,
   sizeof(struct squashfs_super_block), 0, ((void*)0), VAR_8);

  if (VAR_9 < 0) {
   VAR_7 = FUNC_0(VAR_9);
   goto out;
  }
 }

 VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_9);

out:
 FUNC_2(VAR_8);
 FUNC_2(VAR_6);
 return VAR_7;
}
