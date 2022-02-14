
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ mmu_private; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct kiocb*,struct inode*,struct iov_iter*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct address_space*,scalar_t__) ;
 size_t FUNC_3 (struct iov_iter*) ;
 scalar_t__ FUNC_4 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct address_space *VAR_5 = VAR_4->f_mapping;
 struct inode *VAR_6 = VAR_5->host;
 size_t VAR_7 = FUNC_3(VAR_3);
 loff_t VAR_8 = VAR_2->ki_pos;
 ssize_t VAR_9;

 if (FUNC_4(VAR_3) == VAR_0) {
  loff_t VAR_10 = VAR_8 + VAR_7;
  if (FUNC_0(VAR_6)->mmu_private < VAR_10)
   return 0;
 }





 VAR_9 = FUNC_1(VAR_2, VAR_6, VAR_3, VAR_1);
 if (VAR_9 < 0 && FUNC_4(VAR_3) == VAR_0)
  FUNC_2(VAR_5, VAR_8 + VAR_7);

 return VAR_9;
}
