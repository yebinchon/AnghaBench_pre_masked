
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct inode {scalar_t__ i_ino; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3,
  struct writeback_control *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2, "hfsplus_write_inode: %lu\n", VAR_3->i_ino);

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->i_ino >= VAR_0 ||
     VAR_3->i_ino == VAR_1)
  return FUNC_1(VAR_3);
 else
  return FUNC_3(VAR_3);
}
