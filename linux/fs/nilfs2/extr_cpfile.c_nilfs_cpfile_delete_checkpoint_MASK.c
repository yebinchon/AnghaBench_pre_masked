
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_cpinfo {scalar_t__ ci_cno; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int ci ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct inode*,scalar_t__*,struct nilfs_cpinfo*,int,int) ;
 scalar_t__ FUNC_2 (struct nilfs_cpinfo*) ;

int FUNC_3(struct inode *VAR_2, __u64 VAR_3)
{
 struct nilfs_cpinfo VAR_4;
 __u64 VAR_5 = VAR_3;
 ssize_t VAR_6;

 VAR_6 = FUNC_1(VAR_2, &VAR_5, &VAR_4, sizeof(VAR_4), 1);
 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_6 == 0 || VAR_4.ci_cno != VAR_3)
  return -VAR_1;
 else if (FUNC_2(&VAR_4))
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_3 + 1);
}
