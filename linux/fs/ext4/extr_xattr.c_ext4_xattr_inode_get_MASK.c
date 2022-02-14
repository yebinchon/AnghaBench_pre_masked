
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb_cache {int dummy; } ;
struct inode {int i_ino; } ;
struct ext4_xattr_entry {int e_hash; int e_value_inum; } ;


 struct mb_cache* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,char*,...) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ,int ,struct inode**) ;
 int FUNC_5 (struct inode*,void*,size_t) ;
 int FUNC_6 (struct inode*,struct ext4_xattr_entry*,void*,size_t) ;
 size_t FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mb_cache*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_3, struct ext4_xattr_entry *VAR_4,
       void *VAR_5, size_t VAR_6)
{
 struct mb_cache *VAR_7 = FUNC_0(VAR_3);
 struct inode *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_3, FUNC_9(VAR_4->e_value_inum),
        FUNC_9(VAR_4->e_hash), &VAR_8);
 if (VAR_9) {
  VAR_8 = ((void*)0);
  goto out;
 }

 if (FUNC_7(VAR_8) != VAR_6) {
  FUNC_2(VAR_8,
       "ea_inode file size=%llu entry size=%zu",
       FUNC_7(VAR_8), VAR_6);
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_5(VAR_8, VAR_5, VAR_6);
 if (VAR_9)
  goto out;

 if (!FUNC_1(VAR_8, VAR_1)) {
  VAR_9 = FUNC_6(VAR_8, VAR_4, VAR_5,
           VAR_6);
  if (VAR_9) {
   FUNC_2(VAR_8,
        "EA inode hash validation failed");
   goto out;
  }

  if (VAR_7)
   FUNC_10(VAR_7, VAR_2,
     FUNC_3(VAR_8),
     VAR_8->i_ino, 1 );
 }
out:
 FUNC_8(VAR_8);
 return VAR_9;
}
