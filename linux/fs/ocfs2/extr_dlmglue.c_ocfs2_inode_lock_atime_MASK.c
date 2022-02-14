
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct buffer_head**,int) ;
 int FUNC_3 (struct inode*,int ) ;
 scalar_t__ FUNC_4 (struct inode*,struct vfsmount*) ;
 int FUNC_5 (struct inode*,struct buffer_head**,int) ;
 int FUNC_6 (struct inode*,struct buffer_head*) ;

int FUNC_7(struct inode *VAR_1,
     struct vfsmount *VAR_2,
     int *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4)
  VAR_5 = FUNC_2(VAR_1, ((void*)0), 0);
 else
  VAR_5 = FUNC_5(VAR_1, ((void*)0), 0);

 if (VAR_5 < 0) {
  if (VAR_5 != -VAR_0)
   FUNC_1(VAR_5);
  return VAR_5;
 }





 if (FUNC_4(VAR_1, VAR_2)) {
  struct buffer_head *VAR_6 = ((void*)0);

  FUNC_3(VAR_1, 0);
  if (VAR_4)
   VAR_5 = FUNC_2(VAR_1, &VAR_6, 1);
  else
   VAR_5 = FUNC_5(VAR_1, &VAR_6, 1);

  if (VAR_5 < 0) {
   if (VAR_5 != -VAR_0)
    FUNC_1(VAR_5);
   return VAR_5;
  }
  *VAR_3 = 1;
  if (FUNC_4(VAR_1, VAR_2))
   FUNC_6(VAR_1, VAR_6);
  FUNC_0(VAR_6);
 } else
  *VAR_3 = 0;

 return VAR_5;
}
