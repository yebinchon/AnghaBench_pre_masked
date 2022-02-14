
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fiemap_extent_info {int dummy; } ;
typedef int __u64 ;
struct TYPE_2__ {int xattr_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct fiemap_extent_info*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct inode *VAR_1, struct fiemap_extent_info *VAR_2,
        __u64 VAR_3, __u64 VAR_4)
{
 if (FUNC_3(VAR_1)) {
  int VAR_5;

  FUNC_2(&FUNC_0(VAR_1)->xattr_sem);
  VAR_5 = FUNC_3(VAR_1);
  FUNC_4(&FUNC_0(VAR_1)->xattr_sem);
  if (VAR_5)
   return 0;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_0);
}
