
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_dir_seq; } ;


 unsigned int FUNC_0 (unsigned int*,unsigned int,unsigned int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline unsigned FUNC_2(struct inode *VAR_0)
{

 for (;;) {
  unsigned VAR_1 = VAR_0->i_dir_seq;
  if (!(VAR_1 & 1) && FUNC_0(&VAR_0->i_dir_seq, VAR_1, VAR_1 + 1) == VAR_1)
   return VAR_1;
  FUNC_1();
 }
}
