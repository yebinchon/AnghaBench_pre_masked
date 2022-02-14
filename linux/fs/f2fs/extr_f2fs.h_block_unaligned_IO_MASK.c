
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {unsigned long ki_pos; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_blkbits; } ;
typedef unsigned long loff_t ;


 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct iov_iter*) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0,
    struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0->i_blkbits);
 unsigned int VAR_4 = (1 << VAR_3) - 1;
 loff_t VAR_5 = VAR_1->ki_pos;
 unsigned long VAR_6 = VAR_5 | FUNC_1(VAR_2);

 return VAR_6 & VAR_4;
}
