
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_time_gran; struct ceph_fs_client* s_fs_info; int s_time_max; scalar_t__ s_time_min; int * s_export_op; int * s_d_op; int * s_op; int s_xattr; int s_maxbytes; int s_flags; } ;
struct ceph_fs_client {unsigned long long max_file_size; struct super_block* sb; TYPE_1__* mount_options; } ;
struct TYPE_2__ {int sb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,struct super_block*,void*) ;
 int FUNC_1 (struct super_block*,int *) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_6, void *VAR_7)
{
 struct ceph_fs_client *VAR_8 = VAR_7;
 int VAR_9;

 FUNC_0("set_super %p data %p\n", VAR_6, VAR_7);

 VAR_6->s_flags = VAR_8->mount_options->sb_flags;
 VAR_6->s_maxbytes = VAR_0;

 VAR_6->s_xattr = VAR_5;
 VAR_6->s_fs_info = VAR_8;
 VAR_8->sb = VAR_6;
 VAR_8->max_file_size = 1ULL << 40;

 VAR_6->s_op = &VAR_4;
 VAR_6->s_d_op = &VAR_2;
 VAR_6->s_export_op = &VAR_3;

 VAR_6->s_time_gran = 1;
 VAR_6->s_time_min = 0;
 VAR_6->s_time_max = VAR_1;

 VAR_9 = FUNC_1(VAR_6, ((void*)0));
 if (VAR_9 != 0)
  goto fail;

 return VAR_9;

fail:
 VAR_6->s_fs_info = ((void*)0);
 VAR_8->sb = ((void*)0);
 return VAR_9;
}
