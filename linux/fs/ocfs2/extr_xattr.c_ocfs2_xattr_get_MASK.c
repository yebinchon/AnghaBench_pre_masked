
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_lock_holder {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_xattr_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct buffer_head**,int ,struct ocfs2_lock_holder*) ;
 int FUNC_5 (struct inode*,int ,struct ocfs2_lock_holder*,int) ;
 int FUNC_6 (struct inode*,struct buffer_head*,int,char const*,void*,size_t) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0,
      int VAR_1,
      const char *VAR_2,
      void *VAR_3,
      size_t VAR_4)
{
 int VAR_5, VAR_6;
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_lock_holder VAR_8;

 VAR_6 = FUNC_4(VAR_0, &VAR_7, 0, &VAR_8);
 if (VAR_6 < 0) {
  FUNC_3(VAR_6);
  return VAR_6;
 }
 FUNC_2(&FUNC_0(VAR_0)->ip_xattr_sem);
 VAR_5 = FUNC_6(VAR_0, VAR_7, VAR_1,
         VAR_2, VAR_3, VAR_4);
 FUNC_7(&FUNC_0(VAR_0)->ip_xattr_sem);

 FUNC_5(VAR_0, 0, &VAR_8, VAR_6);

 FUNC_1(VAR_7);

 return VAR_5;
}
