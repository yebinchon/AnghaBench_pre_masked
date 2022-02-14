
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; scalar_t__ i_ino; int i_sb; } ;
struct coda_vattr {int dummy; } ;
struct coda_inode_info {int c_flags; int c_lock; int c_fid; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct coda_inode_info* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*,struct coda_vattr*) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,struct coda_vattr*) ;

int FUNC_8(struct inode *VAR_5)
{
 struct coda_vattr VAR_6;
 int VAR_7;
 int VAR_8;
 ino_t VAR_9;
 struct coda_inode_info *VAR_10 = FUNC_0(VAR_5);

 if (!VAR_10->c_flags)
  return 0;

 if (VAR_10->c_flags & (VAR_2 | VAR_1 | VAR_0)) {
  VAR_7 = FUNC_7(VAR_5->i_sb, &(VAR_10->c_fid), &VAR_6);
  if (VAR_7)
   return -VAR_3;






  VAR_8 = VAR_5->i_mode;
  VAR_9 = VAR_5->i_ino;
  FUNC_3(VAR_5, &VAR_6);

  if ((VAR_8 & VAR_4) != (VAR_5->i_mode & VAR_4)) {
   FUNC_4("inode %ld, fid %s changed type!\n",
    VAR_5->i_ino, FUNC_1(&(VAR_10->c_fid)));
  }



  if (VAR_5->i_ino != VAR_9)
   return -VAR_3;

  FUNC_2(VAR_5, VAR_0);

  FUNC_5(&VAR_10->c_lock);
  VAR_10->c_flags &= ~(VAR_2 | VAR_1 | VAR_0);
  FUNC_6(&VAR_10->c_lock);
 }
 return 0;
}
