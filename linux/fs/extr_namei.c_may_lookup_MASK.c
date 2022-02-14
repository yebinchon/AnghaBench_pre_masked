
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int flags; int inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct nameidata*) ;

__attribute__((used)) static inline int FUNC_2(struct nameidata *VAR_4)
{
 if (VAR_4->flags & VAR_1) {
  int VAR_5 = FUNC_0(VAR_4->inode, VAR_2|VAR_3);
  if (VAR_5 != -VAR_0)
   return VAR_5;
  if (FUNC_1(VAR_4))
   return -VAR_0;
 }
 return FUNC_0(VAR_4->inode, VAR_2);
}
