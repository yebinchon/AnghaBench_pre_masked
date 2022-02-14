
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {TYPE_1__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ mmu_private; } ;
struct TYPE_3__ {struct address_space* f_mapping; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct kiocb*,struct inode*,struct iov_iter*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct address_space*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct inode *VAR_4 = VAR_2->ki_filp->f_mapping->host;
 struct address_space *VAR_5 = VAR_2->ki_filp->f_mapping;
 ssize_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3);

 if (VAR_7 == VAR_0) {
  if (FUNC_0(VAR_4)->mmu_private < FUNC_3(VAR_3))
   return 0;
 }
 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_3, VAR_1);

 if ((VAR_6 < 0) && (VAR_7 & VAR_0))
  FUNC_2(VAR_5, FUNC_3(VAR_3));
 return VAR_6;
}
