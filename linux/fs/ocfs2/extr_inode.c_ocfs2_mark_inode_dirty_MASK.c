
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ocfs2_dinode {void* i_mtime_nsec; void* i_mtime; void* i_ctime_nsec; void* i_ctime; void* i_atime_nsec; void* i_atime; void* i_mode; void* i_gid; void* i_uid; void* i_size; void* i_dyn_features; void* i_attr; void* i_clusters; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; int i_mode; int i_nlink; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_9__ {int ip_lock; int ip_dyn_features; int ip_attr; int ip_clusters; scalar_t__ ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_11 (int *,struct buffer_head*) ;
 int FUNC_12 (struct ocfs2_dinode*,int ) ;
 int FUNC_13 (int *,struct inode*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (unsigned long long) ;

int FUNC_17(handle_t *VAR_1,
      struct inode *VAR_2,
      struct buffer_head *VAR_3)
{
 int VAR_4;
 struct ocfs2_dinode *VAR_5 = (struct ocfs2_dinode *) VAR_3->b_data;

 FUNC_16((unsigned long long)FUNC_1(VAR_2)->ip_blkno);

 VAR_4 = FUNC_10(VAR_1, FUNC_0(VAR_2), VAR_3,
      VAR_0);
 if (VAR_4 < 0) {
  FUNC_8(VAR_4);
  goto leave;
 }

 FUNC_14(&FUNC_1(VAR_2)->ip_lock);
 VAR_5->i_clusters = FUNC_3(FUNC_1(VAR_2)->ip_clusters);
 FUNC_9(FUNC_1(VAR_2));
 VAR_5->i_attr = FUNC_3(FUNC_1(VAR_2)->ip_attr);
 VAR_5->i_dyn_features = FUNC_2(FUNC_1(VAR_2)->ip_dyn_features);
 FUNC_15(&FUNC_1(VAR_2)->ip_lock);

 VAR_5->i_size = FUNC_4(FUNC_6(VAR_2));
 FUNC_12(VAR_5, VAR_2->i_nlink);
 VAR_5->i_uid = FUNC_3(FUNC_7(VAR_2));
 VAR_5->i_gid = FUNC_3(FUNC_5(VAR_2));
 VAR_5->i_mode = FUNC_2(VAR_2->i_mode);
 VAR_5->i_atime = FUNC_4(VAR_2->i_atime.tv_sec);
 VAR_5->i_atime_nsec = FUNC_3(VAR_2->i_atime.tv_nsec);
 VAR_5->i_ctime = FUNC_4(VAR_2->i_ctime.tv_sec);
 VAR_5->i_ctime_nsec = FUNC_3(VAR_2->i_ctime.tv_nsec);
 VAR_5->i_mtime = FUNC_4(VAR_2->i_mtime.tv_sec);
 VAR_5->i_mtime_nsec = FUNC_3(VAR_2->i_mtime.tv_nsec);

 FUNC_11(VAR_1, VAR_3);
 FUNC_13(VAR_1, VAR_2, 1);
leave:
 return VAR_4;
}
