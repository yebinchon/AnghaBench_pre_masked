
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct inode {scalar_t__ i_size; int i_mapping; int i_mode; struct timespec64 i_mtime; } ;
struct fuse_inode {scalar_t__ attr_version; int lock; int state; } ;
struct fuse_conn {int writeback_cache; scalar_t__ auto_inval_data; int explicit_inval_data; } ;
struct fuse_attr {scalar_t__ size; int mtimensec; int mtime; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct fuse_attr*,scalar_t__) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 struct fuse_inode* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct timespec64*,struct timespec64*) ;
 int FUNC_10 (struct inode*,scalar_t__) ;

void FUNC_11(struct inode *VAR_1, struct fuse_attr *VAR_2,
       u64 VAR_3, u64 VAR_4)
{
 struct fuse_conn *VAR_5 = FUNC_2(VAR_1);
 struct fuse_inode *VAR_6 = FUNC_3(VAR_1);
 bool VAR_7 = VAR_5->writeback_cache;
 loff_t VAR_8;
 struct timespec64 VAR_9;

 FUNC_6(&VAR_6->lock);
 if ((VAR_4 != 0 && VAR_6->attr_version > VAR_4) ||
     FUNC_8(VAR_0, &VAR_6->state)) {
  FUNC_7(&VAR_6->lock);
  return;
 }

 VAR_9 = VAR_1->i_mtime;
 FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_8 = VAR_1->i_size;





 if (!VAR_7 || !FUNC_0(VAR_1->i_mode))
  FUNC_4(VAR_1, VAR_2->size);
 FUNC_7(&VAR_6->lock);

 if (!VAR_7 && FUNC_0(VAR_1->i_mode)) {
  bool VAR_10 = 0;

  if (VAR_8 != VAR_2->size) {
   FUNC_10(VAR_1, VAR_2->size);
   if (!VAR_5->explicit_inval_data)
    VAR_10 = 1;
  } else if (VAR_5->auto_inval_data) {
   struct timespec64 VAR_11 = {
    .tv_sec = VAR_2->mtime,
    .tv_nsec = VAR_2->mtimensec,
   };





   if (!FUNC_9(&VAR_9, &VAR_11))
    VAR_10 = 1;
  }

  if (VAR_10)
   FUNC_5(VAR_1->i_mapping);
 }
}
