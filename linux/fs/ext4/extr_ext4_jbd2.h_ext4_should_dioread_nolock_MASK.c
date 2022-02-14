
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct inode *VAR_2)
{
 if (!FUNC_3(VAR_2->i_sb, VAR_0))
  return 0;
 if (!FUNC_0(VAR_2->i_mode))
  return 0;
 if (!(FUNC_2(VAR_2, VAR_1)))
  return 0;
 if (FUNC_1(VAR_2))
  return 0;
 return 1;
}
