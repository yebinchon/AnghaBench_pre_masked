
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; int * d_inode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct dentry *VAR_4)
{
 unsigned VAR_5 = FUNC_0(VAR_4->d_flags);

 VAR_5 &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_4->d_flags, VAR_5);
 VAR_4->d_inode = ((void*)0);
 if (VAR_4->d_flags & VAR_2)
  FUNC_2(VAR_3);
}
