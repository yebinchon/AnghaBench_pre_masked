
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct inode {int dummy; } ;
struct gfs2_leaf {int lf_reserved2; void* lf_sec; void* lf_nsec; void* lf_dist; void* lf_inode; scalar_t__ lf_next; void* lf_dirent_format; scalar_t__ lf_entries; int lf_depth; } ;
struct gfs2_inode {int i_no_addr; int i_gl; } ;
struct gfs2_dirent {int dummy; } ;
struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 struct timespec64 FUNC_5 (struct inode*) ;
 int VAR_3 ;
 int FUNC_6 (struct gfs2_inode*,int *,unsigned int*,int ,int *) ;
 struct buffer_head* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct buffer_head*,int ,int ) ;
 int FUNC_9 (int *,scalar_t__,struct gfs2_dirent*) ;
 int FUNC_10 (int ,struct buffer_head*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static struct gfs2_leaf *FUNC_13(struct inode *VAR_4, struct buffer_head **VAR_5, u16 VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_4);
 unsigned int VAR_8 = 1;
 u64 VAR_9;
 int VAR_10;
 struct buffer_head *VAR_11;
 struct gfs2_leaf *VAR_12;
 struct gfs2_dirent *VAR_13;
 struct timespec64 VAR_14 = FUNC_5(VAR_4);

 VAR_10 = FUNC_6(VAR_7, &VAR_9, &VAR_8, 0, ((void*)0));
 if (VAR_10)
  return ((void*)0);
 VAR_11 = FUNC_7(VAR_7->i_gl, VAR_9);
 if (!VAR_11)
  return ((void*)0);

 FUNC_11(FUNC_1(VAR_4), VAR_9, 1);
 FUNC_10(VAR_7->i_gl, VAR_11);
 FUNC_8(VAR_11, VAR_2, VAR_1);
 VAR_12 = (struct gfs2_leaf *)VAR_11->b_data;
 VAR_12->lf_depth = FUNC_2(VAR_6);
 VAR_12->lf_entries = 0;
 VAR_12->lf_dirent_format = FUNC_3(VAR_0);
 VAR_12->lf_next = 0;
 VAR_12->lf_inode = FUNC_4(VAR_7->i_no_addr);
 VAR_12->lf_dist = FUNC_3(1);
 VAR_12->lf_nsec = FUNC_3(VAR_14.tv_nsec);
 VAR_12->lf_sec = FUNC_4(VAR_14.tv_sec);
 FUNC_12(VAR_12->lf_reserved2, 0, sizeof(VAR_12->lf_reserved2));
 VAR_13 = (struct gfs2_dirent *)(VAR_12+1);
 FUNC_9(&VAR_3, VAR_11->b_size - sizeof(struct gfs2_leaf), VAR_13);
 *VAR_5 = VAR_11;
 return VAR_12;
}
