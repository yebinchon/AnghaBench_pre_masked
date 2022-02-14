
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct ceph_dir_file_info {int readdir_cache_idx; int next_offset; TYPE_1__ file_info; scalar_t__ dir_release_count; int * last_name; int * last_readdir; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ceph_dir_file_info *VAR_1)
{
 if (VAR_1->last_readdir) {
  FUNC_0(VAR_1->last_readdir);
  VAR_1->last_readdir = ((void*)0);
 }
 FUNC_1(VAR_1->last_name);
 VAR_1->last_name = ((void*)0);
 VAR_1->dir_release_count = 0;
 VAR_1->readdir_cache_idx = -1;
 VAR_1->next_offset = 2;
 VAR_1->file_info.flags &= ~VAR_0;
}
