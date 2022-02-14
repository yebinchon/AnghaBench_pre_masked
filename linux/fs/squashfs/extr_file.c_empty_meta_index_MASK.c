
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct squashfs_sb_info {size_t next_meta_index; int meta_index_mutex; struct meta_index* meta_index; } ;
struct meta_index {int locked; int offset; int skip; scalar_t__ entries; scalar_t__ inode_number; } ;
struct inode {scalar_t__ i_ino; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct squashfs_sb_info* s_fs_info; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 struct meta_index* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct meta_index *FUNC_5(struct inode *VAR_2, int VAR_3,
    int VAR_4)
{
 struct squashfs_sb_info *VAR_5 = VAR_2->i_sb->s_fs_info;
 struct meta_index *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_3(&VAR_5->meta_index_mutex);

 FUNC_1("empty_meta_index: offset %d, skip %d\n", VAR_3, VAR_4);

 if (VAR_5->meta_index == ((void*)0)) {






  VAR_5->meta_index = FUNC_2(VAR_1,
   sizeof(*(VAR_5->meta_index)), VAR_0);
  if (VAR_5->meta_index == ((void*)0)) {
   FUNC_0("Failed to allocate meta_index\n");
   goto failed;
  }
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   VAR_5->meta_index[VAR_7].inode_number = 0;
   VAR_5->meta_index[VAR_7].locked = 0;
  }
  VAR_5->next_meta_index = 0;
 }

 for (VAR_7 = VAR_1; VAR_7 &&
   VAR_5->meta_index[VAR_5->next_meta_index].locked; VAR_7--)
  VAR_5->next_meta_index = (VAR_5->next_meta_index + 1) %
   VAR_1;

 if (VAR_7 == 0) {
  FUNC_1("empty_meta_index: failed!\n");
  goto failed;
 }

 FUNC_1("empty_meta_index: returned meta entry %d, %p\n",
   VAR_5->next_meta_index,
   &VAR_5->meta_index[VAR_5->next_meta_index]);

 VAR_6 = &VAR_5->meta_index[VAR_5->next_meta_index];
 VAR_5->next_meta_index = (VAR_5->next_meta_index + 1) %
   VAR_1;

 VAR_6->inode_number = VAR_2->i_ino;
 VAR_6->offset = VAR_3;
 VAR_6->skip = VAR_4;
 VAR_6->entries = 0;
 VAR_6->locked = 1;

failed:
 FUNC_4(&VAR_5->meta_index_mutex);
 return VAR_6;
}
