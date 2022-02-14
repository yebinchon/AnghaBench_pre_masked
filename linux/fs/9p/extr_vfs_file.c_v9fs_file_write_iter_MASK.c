
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct file {int private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ nrpages; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (TYPE_1__*,unsigned long,unsigned long) ;
 int FUNC_5 (int ,int,struct iov_iter*,int*) ;
 int FUNC_6 (struct inode*,int) ;

__attribute__((used)) static ssize_t
FUNC_7(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 struct file *VAR_3 = VAR_1->ki_filp;
 ssize_t VAR_4;
 loff_t VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 <= 0)
  return VAR_4;

 VAR_5 = VAR_1->ki_pos;
 VAR_4 = FUNC_5(VAR_3->private_data, VAR_1->ki_pos, VAR_2, &VAR_6);
 if (VAR_4 > 0) {
  struct inode *VAR_7 = FUNC_0(VAR_3);
  loff_t VAR_8;
  unsigned long VAR_9, VAR_10;
  VAR_9 = VAR_5 >> VAR_0;
  VAR_10 = (VAR_5 + VAR_4 - 1) >> VAR_0;
  if (VAR_7->i_mapping && VAR_7->i_mapping->nrpages)
   FUNC_4(VAR_7->i_mapping,
            VAR_9, VAR_10);
  VAR_1->ki_pos += VAR_4;
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_1->ki_pos > VAR_8) {
   FUNC_3(VAR_7, VAR_1->ki_pos - VAR_8);




   FUNC_6(VAR_7, VAR_1->ki_pos);
  }
  return VAR_4;
 }
 return VAR_6;
}
