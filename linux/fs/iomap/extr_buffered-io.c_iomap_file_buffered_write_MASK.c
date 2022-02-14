
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; TYPE_2__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct iomap_ops {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*,scalar_t__,scalar_t__,int ,struct iomap_ops const*,struct iov_iter*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct iov_iter*) ;

ssize_t
FUNC_2(struct kiocb *VAR_2, struct iov_iter *VAR_3,
  const struct iomap_ops *VAR_4)
{
 struct inode *VAR_5 = VAR_2->ki_filp->f_mapping->host;
 loff_t VAR_6 = VAR_2->ki_pos, VAR_7 = 0, VAR_8 = 0;

 while (FUNC_1(VAR_3)) {
  VAR_7 = FUNC_0(VAR_5, VAR_6, FUNC_1(VAR_3),
    VAR_0, VAR_4, VAR_3, VAR_1);
  if (VAR_7 <= 0)
   break;
  VAR_6 += VAR_7;
  VAR_8 += VAR_7;
 }

 return VAR_8 ? VAR_8 : VAR_7;
}
