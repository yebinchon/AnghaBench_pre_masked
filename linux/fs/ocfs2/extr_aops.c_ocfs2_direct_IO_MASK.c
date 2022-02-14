
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {scalar_t__ count; } ;
struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef int get_block_t ;
struct TYPE_6__ {int ip_dyn_features; } ;
struct TYPE_5__ {int s_bdev; } ;
struct TYPE_4__ {struct inode* host; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct kiocb*,struct inode*,int ,struct iov_iter*,int *,int ,int *,int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct iov_iter*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (struct ocfs2_super*) ;

__attribute__((used)) static ssize_t FUNC_6(struct kiocb *VAR_5, struct iov_iter *VAR_6)
{
 struct file *VAR_7 = VAR_5->ki_filp;
 struct inode *VAR_8 = VAR_7->f_mapping->host;
 struct ocfs2_super *VAR_9 = FUNC_1(VAR_8->i_sb);
 get_block_t *VAR_10;





 if (FUNC_0(VAR_8)->ip_dyn_features & VAR_0)
  return 0;


 if (VAR_5->ki_pos + VAR_6->count > FUNC_3(VAR_8) &&
     !FUNC_5(VAR_9))
  return 0;

 if (FUNC_4(VAR_6) == VAR_1)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_3;

 return FUNC_2(VAR_5, VAR_8, VAR_8->i_sb->s_bdev,
        VAR_6, VAR_10,
        VAR_2, ((void*)0), 0);
}
