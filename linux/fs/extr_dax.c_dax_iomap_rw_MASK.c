
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; TYPE_1__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct iomap_ops {int dummy; } ;
struct inode {int i_rwsem; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct address_space* f_mapping; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*,scalar_t__,scalar_t__,unsigned int,struct iomap_ops const*,struct iov_iter*,int ) ;
 scalar_t__ FUNC_1 (struct iov_iter*) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

ssize_t
FUNC_5(struct kiocb *VAR_3, struct iov_iter *VAR_4,
  const struct iomap_ops *VAR_5)
{
 struct address_space *VAR_6 = VAR_3->ki_filp->f_mapping;
 struct inode *VAR_7 = VAR_6->host;
 loff_t VAR_8 = VAR_3->ki_pos, VAR_9 = 0, VAR_10 = 0;
 unsigned VAR_11 = 0;

 if (FUNC_2(VAR_4) == VAR_1) {
  FUNC_4(&VAR_7->i_rwsem);
  VAR_11 |= VAR_0;
 } else {
  FUNC_3(&VAR_7->i_rwsem);
 }

 while (FUNC_1(VAR_4)) {
  VAR_9 = FUNC_0(VAR_7, VAR_8, FUNC_1(VAR_4), VAR_11, VAR_5,
    VAR_4, VAR_2);
  if (VAR_9 <= 0)
   break;
  VAR_8 += VAR_9;
  VAR_10 += VAR_9;
 }

 VAR_3->ki_pos += VAR_10;
 return VAR_10 ? VAR_10 : VAR_9;
}
