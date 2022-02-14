
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct file* file; } ;
struct splice_desc {int flags; int len; int total_len; int pos; TYPE_2__ u; } ;
struct pipe_inode_info {int nrbufs; } ;
struct pipe_buffer {int offset; int page; } ;
struct file {TYPE_1__* f_op; } ;
typedef int loff_t ;
struct TYPE_3__ {int (* sendpage ) (struct file*,int ,int ,int ,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int (*) (struct file*,int ,int ,int ,int *,int)) ;
 int FUNC_1 (struct file*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct pipe_inode_info *VAR_4,
       struct pipe_buffer *VAR_5, struct splice_desc *VAR_6)
{
 struct file *VAR_7 = VAR_6->u.file;
 loff_t VAR_8 = VAR_6->pos;
 int VAR_9;

 if (!FUNC_0(VAR_7->f_op->sendpage))
  return -VAR_0;

 VAR_9 = (VAR_6->flags & VAR_3) ? VAR_1 : 0;

 if (VAR_6->len < VAR_6->total_len && VAR_4->nrbufs > 1)
  VAR_9 |= VAR_2;

 return VAR_7->f_op->sendpage(VAR_7, VAR_5->page, VAR_5->offset,
        VAR_6->len, &VAR_8, VAR_9);
}
