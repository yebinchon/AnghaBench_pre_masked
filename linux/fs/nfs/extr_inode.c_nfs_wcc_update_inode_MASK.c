
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct nfs_fattr {int valid; int size; int pre_size; int mtime; int pre_mtime; int ctime; int pre_ctime; int change_attr; int pre_change_attr; } ;
struct inode {int i_mode; void* i_mtime; void* i_ctime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 struct timespec FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (struct timespec*,int *) ;
 void* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct inode *VAR_9, struct nfs_fattr *VAR_10)
{
 struct timespec VAR_11;

 if ((VAR_10->valid & VAR_3)
   && (VAR_10->valid & VAR_0)
   && FUNC_3(VAR_9, VAR_10->pre_change_attr)) {
  FUNC_4(VAR_9, VAR_10->change_attr);
  if (FUNC_0(VAR_9->i_mode))
   FUNC_6(VAR_9, VAR_8);
 }

 VAR_11 = FUNC_8(VAR_9->i_ctime);
 if ((VAR_10->valid & VAR_4)
   && (VAR_10->valid & VAR_1)
   && FUNC_9(&VAR_11, &VAR_10->pre_ctime)) {
  VAR_9->i_ctime = FUNC_10(VAR_10->ctime);
 }

 VAR_11 = FUNC_8(VAR_9->i_mtime);
 if ((VAR_10->valid & VAR_5)
   && (VAR_10->valid & VAR_2)
   && FUNC_9(&VAR_11, &VAR_10->pre_mtime)) {
  VAR_9->i_mtime = FUNC_10(VAR_10->mtime);
  if (FUNC_0(VAR_9->i_mode))
   FUNC_6(VAR_9, VAR_8);
 }
 if ((VAR_10->valid & VAR_6)
   && (VAR_10->valid & VAR_7)
   && FUNC_1(VAR_9) == FUNC_7(VAR_10->pre_size)
   && !FUNC_5(VAR_9)) {
  FUNC_2(VAR_9, FUNC_7(VAR_10->size));
 }
}
