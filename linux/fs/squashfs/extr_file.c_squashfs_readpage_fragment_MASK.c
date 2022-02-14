
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct squashfs_cache_entry {int error; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct TYPE_4__ {int fragment_offset; int fragment_size; int fragment_block; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct squashfs_cache_entry*) ;
 int FUNC_2 (struct page*,struct squashfs_cache_entry*,int,int ) ;
 struct squashfs_cache_entry* FUNC_3 (int ,int ,int ) ;
 TYPE_2__* FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = VAR_0->mapping->host;
 struct squashfs_cache_entry *VAR_3 = FUNC_3(VAR_2->i_sb,
  FUNC_4(VAR_2)->fragment_block,
  FUNC_4(VAR_2)->fragment_size);
 int VAR_4 = VAR_3->error;

 if (VAR_4)
  FUNC_0("Unable to read page, block %llx, size %x\n",
   FUNC_4(VAR_2)->fragment_block,
   FUNC_4(VAR_2)->fragment_size);
 else
  FUNC_2(VAR_0, VAR_3, VAR_1,
   FUNC_4(VAR_2)->fragment_offset);

 FUNC_1(VAR_3);
 return VAR_4;
}
