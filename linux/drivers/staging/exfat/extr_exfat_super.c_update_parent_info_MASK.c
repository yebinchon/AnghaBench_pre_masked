
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct fs_info_t {int cluster_size_bits; int cluster_size; } ;
struct TYPE_4__ {scalar_t__ flags; int size; scalar_t__ dir; } ;
struct file_id_t {scalar_t__ flags; int size; scalar_t__ start_clu; TYPE_1__ dir; } ;
struct TYPE_6__ {struct file_id_t fid; } ;
struct TYPE_5__ {struct fs_info_t fs_info; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct file_id_t *VAR_0,
          struct inode *VAR_1)
{
 struct fs_info_t *VAR_2 = &(FUNC_1(VAR_1->i_sb)->fs_info);
 struct file_id_t *VAR_3 = &(FUNC_0(VAR_1)->fid);

 if (FUNC_2((VAR_3->flags != VAR_0->dir.flags) ||
       (VAR_3->size !=
        (VAR_0->dir.size << VAR_2->cluster_size_bits)) ||
       (VAR_3->start_clu != VAR_0->dir.dir))) {
  VAR_0->dir.dir = VAR_3->start_clu;
  VAR_0->dir.flags = VAR_3->flags;
  VAR_0->dir.size = ((VAR_3->size + (VAR_2->cluster_size - 1))
      >> VAR_2->cluster_size_bits);
 }
}
