
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static inline int FUNC_4(struct inode *VAR_3)
{
 if (FUNC_0(VAR_3->i_mode) || FUNC_1(VAR_3->i_mode) ||
     FUNC_3(VAR_3, VAR_2))
  return VAR_1 | VAR_0;
 else if (FUNC_2(VAR_3))
  return VAR_0;
 return 0;
}
