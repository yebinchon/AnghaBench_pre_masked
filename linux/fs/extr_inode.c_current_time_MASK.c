
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct timespec64*) ;
 struct timespec64 FUNC_2 (struct timespec64,struct inode*) ;
 scalar_t__ FUNC_3 (int) ;

struct timespec64 FUNC_4(struct inode *VAR_0)
{
 struct timespec64 VAR_1;

 FUNC_1(&VAR_1);

 if (FUNC_3(!VAR_0->i_sb)) {
  FUNC_0(1, "current_time() called with uninitialized super_block in the inode");
  return VAR_1;
 }

 return FUNC_2(VAR_1, VAR_0);
}
