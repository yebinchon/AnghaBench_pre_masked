
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
typedef int handle_t ;


 int * FUNC_0 (int ,unsigned int,int,int,int) ;

__attribute__((used)) static inline handle_t *FUNC_1(struct inode *VAR_0,
          unsigned int VAR_1, int VAR_2,
          int VAR_3, int VAR_4)
{
 return FUNC_0(VAR_0->i_sb, VAR_1, VAR_2, VAR_3,
           VAR_4);
}
