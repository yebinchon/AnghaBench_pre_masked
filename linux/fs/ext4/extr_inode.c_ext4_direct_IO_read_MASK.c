
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; TYPE_2__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {struct address_space* f_mapping; } ;
struct TYPE_3__ {int s_bdev; } ;


 scalar_t__ FUNC_0 (struct kiocb*,struct inode*,int ,struct iov_iter*,int ,int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 size_t FUNC_4 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 struct address_space *VAR_3 = VAR_1->ki_filp->f_mapping;
 struct inode *VAR_4 = VAR_3->host;
 size_t VAR_5 = FUNC_4(VAR_2);
 ssize_t VAR_6;






 FUNC_2(VAR_4);
 VAR_6 = FUNC_1(VAR_3, VAR_1->ki_pos,
        VAR_1->ki_pos + VAR_5 - 1);
 if (VAR_6)
  goto out_unlock;
 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_4->i_sb->s_bdev,
       VAR_2, VAR_0, ((void*)0), ((void*)0), 0);
out_unlock:
 FUNC_3(VAR_4);
 return VAR_6;
}
