
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct squashfs_sb_info {int meta_index_mutex; struct meta_index* meta_index; } ;
struct meta_index {scalar_t__ inode_number; int offset; scalar_t__ locked; } ;
struct inode {scalar_t__ i_ino; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct squashfs_sb_info* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct meta_index *FUNC_3(struct inode *VAR_1, int VAR_2,
    int VAR_3)
{
 struct meta_index *VAR_4 = ((void*)0);
 struct squashfs_sb_info *VAR_5 = VAR_1->i_sb->s_fs_info;
 int VAR_6;

 FUNC_1(&VAR_5->meta_index_mutex);

 FUNC_0("locate_meta_index: index %d, offset %d\n", VAR_3, VAR_2);

 if (VAR_5->meta_index == ((void*)0))
  goto not_allocated;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_5->meta_index[VAR_6].inode_number == VAR_1->i_ino &&
    VAR_5->meta_index[VAR_6].offset >= VAR_2 &&
    VAR_5->meta_index[VAR_6].offset <= VAR_3 &&
    VAR_5->meta_index[VAR_6].locked == 0) {
   FUNC_0("locate_meta_index: entry %d, offset %d\n", VAR_6,
     VAR_5->meta_index[VAR_6].offset);
   VAR_4 = &VAR_5->meta_index[VAR_6];
   VAR_2 = VAR_4->offset;
  }
 }

 if (VAR_4)
  VAR_4->locked = 1;

not_allocated:
 FUNC_2(&VAR_5->meta_index_mutex);

 return VAR_4;
}
