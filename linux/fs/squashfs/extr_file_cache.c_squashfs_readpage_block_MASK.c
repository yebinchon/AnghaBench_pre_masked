
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct squashfs_cache_entry {int error; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct squashfs_cache_entry*) ;
 int FUNC_2 (struct page*,struct squashfs_cache_entry*,int,int ) ;
 struct squashfs_cache_entry* FUNC_3 (int ,int ,int) ;

int FUNC_4(struct page *VAR_0, u64 VAR_1, int VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_0->mapping->host;
 struct squashfs_cache_entry *VAR_5 = FUNC_3(VAR_4->i_sb,
  VAR_1, VAR_2);
 int VAR_6 = VAR_5->error;

 if (VAR_6)
  FUNC_0("Unable to read page, block %llx, size %x\n", VAR_1,
   VAR_2);
 else
  FUNC_2(VAR_0, VAR_5, VAR_3, 0);

 FUNC_1(VAR_5);
 return VAR_6;
}
