
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct inode*,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_4, struct inode *VAR_5)
{
 unsigned int VAR_6 = VAR_3 | VAR_1 | VAR_0 | VAR_2;

 FUNC_0(VAR_5, VAR_4->i_flags & VAR_6, VAR_6);
}
