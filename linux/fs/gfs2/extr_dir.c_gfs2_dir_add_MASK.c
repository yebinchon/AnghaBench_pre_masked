
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {int tv_sec; int tv_nsec; } ;
struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_leaf {int lf_sec; int lf_nsec; int lf_entries; } ;
struct TYPE_3__ {int i_mode; struct timespec64 i_ctime; struct timespec64 i_mtime; } ;
struct gfs2_inode {int i_diskflags; scalar_t__ i_depth; TYPE_1__ i_inode; int i_entries; } ;
struct gfs2_dirent {void* de_rahead; void* de_type; } ;
struct gfs2_diradd {struct buffer_head* bh; struct gfs2_dirent* dent; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct gfs2_dirent*) ;
 int FUNC_3 (struct gfs2_dirent*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct buffer_head*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct timespec64 FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,struct qstr const*) ;
 int FUNC_14 (struct inode*,struct qstr const*) ;
 int VAR_3 ;
 struct gfs2_dirent* FUNC_15 (struct inode*,struct qstr const*,int ,struct buffer_head**) ;
 struct gfs2_dirent* FUNC_16 (struct inode*,struct gfs2_dirent*,struct qstr const*,struct buffer_head*) ;
 int FUNC_17 (struct gfs2_inode const*) ;
 int FUNC_18 (struct gfs2_inode const*,struct gfs2_dirent*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (struct inode*) ;

int FUNC_21(struct inode *VAR_4, const struct qstr *VAR_5,
   const struct gfs2_inode *VAR_6, struct gfs2_diradd *VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_4);
 struct buffer_head *VAR_9 = VAR_7->bh;
 struct gfs2_dirent *VAR_10 = VAR_7->dent;
 struct timespec64 VAR_11;
 struct gfs2_leaf *VAR_12;
 int VAR_13;

 while(1) {
  if (VAR_7->bh == ((void*)0)) {
   VAR_10 = FUNC_15(VAR_4, VAR_5,
        VAR_3, &VAR_9);
  }
  if (VAR_10) {
   if (FUNC_2(VAR_10))
    return FUNC_3(VAR_10);
   VAR_10 = FUNC_16(VAR_4, VAR_10, VAR_5, VAR_9);
   FUNC_18(VAR_6, VAR_10);
   VAR_10->de_type = FUNC_7(FUNC_1(VAR_6->i_inode.i_mode));
   VAR_10->de_rahead = FUNC_7(FUNC_17(VAR_6));
   VAR_11 = FUNC_10(&VAR_8->i_inode);
   if (VAR_8->i_diskflags & VAR_1) {
    VAR_12 = (struct gfs2_leaf *)VAR_9->b_data;
    FUNC_5(&VAR_12->lf_entries, 1);
    VAR_12->lf_nsec = FUNC_8(VAR_11.tv_nsec);
    VAR_12->lf_sec = FUNC_9(VAR_11.tv_sec);
   }
   VAR_7->dent = ((void*)0);
   VAR_7->bh = ((void*)0);
   FUNC_6(VAR_9);
   VAR_8->i_entries++;
   VAR_8->i_inode.i_mtime = VAR_8->i_inode.i_ctime = VAR_11;
   if (FUNC_4(VAR_6->i_inode.i_mode))
    FUNC_19(&VAR_8->i_inode);
   FUNC_20(VAR_4);
   VAR_13 = 0;
   break;
  }
  if (!(VAR_8->i_diskflags & VAR_1)) {
   VAR_13 = FUNC_12(VAR_4);
   if (VAR_13)
    break;
   continue;
  }
  VAR_13 = FUNC_14(VAR_4, VAR_5);
  if (VAR_13 == 0)
   continue;
  if (VAR_13 < 0)
   break;
  if (VAR_8->i_depth < VAR_2) {
   VAR_13 = FUNC_11(VAR_8);
   if (VAR_13)
    break;
   VAR_13 = FUNC_14(VAR_4, VAR_5);
   if (VAR_13 < 0)
    break;
   if (VAR_13 == 0)
    continue;
  }
  VAR_13 = FUNC_13(VAR_4, VAR_5);
  if (!VAR_13)
   continue;
  VAR_13 = -VAR_0;
  break;
 }
 return VAR_13;
}
