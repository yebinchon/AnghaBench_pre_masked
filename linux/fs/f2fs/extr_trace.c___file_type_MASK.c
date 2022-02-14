
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_ino; int i_mode; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_7, pid_t VAR_8)
{
 if (FUNC_4(VAR_7))
  return VAR_0;
 else if (FUNC_5(VAR_7))
  return VAR_6;
 else if (FUNC_3(VAR_7->i_mode))
  return VAR_1;
 else if (VAR_7->i_ino == FUNC_2(FUNC_0(VAR_7)))
  return VAR_4;
 else if (VAR_7->i_ino == FUNC_1(FUNC_0(VAR_7)))
  return VAR_2;
 else if (VAR_8)
  return VAR_5;
 else
  return VAR_3;
}
