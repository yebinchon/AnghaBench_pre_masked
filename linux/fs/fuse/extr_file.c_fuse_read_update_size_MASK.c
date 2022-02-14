
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {scalar_t__ i_size; } ;
struct fuse_inode {scalar_t__ attr_version; int lock; int state; } ;
struct fuse_conn {int attr_version; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_1, loff_t VAR_2,
      u64 VAR_3)
{
 struct fuse_conn *VAR_4 = FUNC_1(VAR_1);
 struct fuse_inode *VAR_5 = FUNC_2(VAR_1);

 FUNC_4(&VAR_5->lock);
 if (VAR_3 == VAR_5->attr_version && VAR_2 < VAR_1->i_size &&
     !FUNC_6(VAR_0, &VAR_5->state)) {
  VAR_5->attr_version = FUNC_0(&VAR_4->attr_version);
  FUNC_3(VAR_1, VAR_2);
 }
 FUNC_5(&VAR_5->lock);
}
