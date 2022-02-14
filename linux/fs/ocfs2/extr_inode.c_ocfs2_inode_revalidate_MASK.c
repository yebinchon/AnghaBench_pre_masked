
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int ip_flags; int ip_lock; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int *,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,unsigned long long,unsigned long long) ;

int FUNC_8(struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;

 FUNC_7(VAR_3,
  VAR_3 ? (unsigned long long)FUNC_0(VAR_3)->ip_blkno : 0ULL,
  VAR_3 ? (unsigned long long)FUNC_0(VAR_3)->ip_flags : 0);

 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto bail;
 }

 FUNC_5(&FUNC_0(VAR_3)->ip_lock);
 if (FUNC_0(VAR_3)->ip_flags & VAR_1) {
  FUNC_6(&FUNC_0(VAR_3)->ip_lock);
  VAR_4 = -VAR_0;
  goto bail;
 }
 FUNC_6(&FUNC_0(VAR_3)->ip_lock);



 VAR_4 = FUNC_3(VAR_3, ((void*)0), 0);
 if (VAR_4 < 0) {
  if (VAR_4 != -VAR_0)
   FUNC_2(VAR_4);
  goto bail;
 }
 FUNC_4(VAR_3, 0);
bail:
 return VAR_4;
}
