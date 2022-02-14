
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct file* file; } ;
struct splice_desc {size_t total_len; unsigned int flags; TYPE_1__ u; int pos; } ;
struct pipe_inode_info {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int splice_actor ;
typedef int loff_t ;


 int FUNC_0 (struct pipe_inode_info*,struct splice_desc*,int *) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*) ;

ssize_t FUNC_3(struct pipe_inode_info *VAR_0, struct file *VAR_1,
    loff_t *VAR_2, size_t VAR_3, unsigned int VAR_4,
    splice_actor *VAR_5)
{
 ssize_t VAR_6;
 struct splice_desc VAR_7 = {
  .total_len = VAR_3,
  .flags = VAR_4,
  .pos = *VAR_2,
  .u.file = VAR_1,
 };

 FUNC_1(VAR_0);
 VAR_6 = FUNC_0(VAR_0, &VAR_7, VAR_5);
 FUNC_2(VAR_0);

 return VAR_6;
}
