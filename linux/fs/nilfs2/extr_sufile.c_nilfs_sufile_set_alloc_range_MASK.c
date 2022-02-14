
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_sufile_info {scalar_t__ allocmax; scalar_t__ allocmin; } ;
struct inode {int dummy; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct nilfs_sufile_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct inode *VAR_1, __u64 VAR_2, __u64 VAR_3)
{
 struct nilfs_sufile_info *VAR_4 = FUNC_1(VAR_1);
 __u64 VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_2(&FUNC_0(VAR_1)->mi_sem);
 VAR_5 = FUNC_3(VAR_1);

 if (VAR_2 <= VAR_3 && VAR_3 < VAR_5) {
  VAR_4->allocmin = VAR_2;
  VAR_4->allocmax = VAR_3;
  VAR_6 = 0;
 }
 FUNC_4(&FUNC_0(VAR_1)->mi_sem);
 return VAR_6;
}
