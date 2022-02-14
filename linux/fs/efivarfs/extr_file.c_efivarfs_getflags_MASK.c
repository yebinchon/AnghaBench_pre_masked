
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct inode *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4 = 0;

 VAR_3 = VAR_2->i_flags;
 if (VAR_3 & VAR_1)
  VAR_4 |= VAR_0;
 return VAR_4;
}
