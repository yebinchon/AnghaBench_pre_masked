
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_mode; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (struct inode*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct inode*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static inline int FUNC_6(struct inode *VAR_9)
{
 if (FUNC_1(VAR_9) == ((void*)0))
  return VAR_5;

 if (!FUNC_3(VAR_9->i_mode) ||
     FUNC_5(VAR_9->i_sb, VAR_0) == VAR_6 ||
     (FUNC_4(VAR_9, VAR_2) &&
     !FUNC_5(VAR_9->i_sb, VAR_1))) {

  if (FUNC_3(VAR_9->i_mode) && FUNC_2(VAR_9))
   return VAR_4;
  return VAR_3;
 }
 if (FUNC_5(VAR_9->i_sb, VAR_0) == VAR_7)
  return VAR_4;
 if (FUNC_5(VAR_9->i_sb, VAR_0) == VAR_8)
  return VAR_5;
 FUNC_0();
}
