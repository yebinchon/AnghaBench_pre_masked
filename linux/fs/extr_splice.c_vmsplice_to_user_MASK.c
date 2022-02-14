
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct iov_iter* data; } ;
struct splice_desc {unsigned int flags; scalar_t__ total_len; TYPE_1__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct iov_iter {int dummy; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 long FUNC_0 (struct pipe_inode_info*,struct splice_desc*,int ) ;
 struct pipe_inode_info* FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (struct pipe_inode_info*) ;
 int VAR_1 ;
 int FUNC_4 (struct pipe_inode_info*) ;

__attribute__((used)) static long FUNC_5(struct file *VAR_2, struct iov_iter *VAR_3,
        unsigned int VAR_4)
{
 struct pipe_inode_info *VAR_5 = FUNC_1(VAR_2);
 struct splice_desc VAR_6 = {
  .total_len = FUNC_2(VAR_3),
  .flags = VAR_4,
  .u.data = VAR_3
 };
 long VAR_7 = 0;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_6.total_len) {
  FUNC_3(VAR_5);
  VAR_7 = FUNC_0(VAR_5, &VAR_6, VAR_1);
  FUNC_4(VAR_5);
 }

 return VAR_7;
}
