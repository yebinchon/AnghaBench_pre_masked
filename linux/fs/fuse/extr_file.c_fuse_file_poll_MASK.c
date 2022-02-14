
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fuse_poll_out {int revents; } ;
struct fuse_poll_in {int flags; int events; int kh; int fh; } ;
struct fuse_file {int nodeid; int poll_wait; int kh; int fh; struct fuse_conn* fc; } ;
struct fuse_conn {int no_poll; } ;
struct file {struct fuse_file* private_data; } ;
typedef int poll_table ;
typedef int outarg ;
typedef int inarg ;
typedef int __poll_t ;
struct TYPE_8__ {int in_numargs; int out_numargs; TYPE_2__* out_args; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_7__ {int size; struct fuse_poll_out* value; } ;
struct TYPE_6__ {int size; struct fuse_poll_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fuse_conn*,struct fuse_file*) ;
 int FUNC_3 (struct fuse_conn*,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file*,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;

__poll_t FUNC_8(struct file *VAR_6, poll_table *VAR_7)
{
 struct fuse_file *VAR_8 = VAR_6->private_data;
 struct fuse_conn *VAR_9 = VAR_8->fc;
 struct fuse_poll_in VAR_10 = { .fh = VAR_8->fh, .kh = VAR_8->kh };
 struct fuse_poll_out VAR_11;
 FUNC_0(VAR_5);
 int VAR_12;

 if (VAR_9->no_poll)
  return VAR_0;

 FUNC_6(VAR_6, &VAR_8->poll_wait, VAR_7);
 VAR_10.events = FUNC_4(FUNC_5(VAR_7));





 if (FUNC_7(&VAR_8->poll_wait)) {
  VAR_10.flags |= VAR_4;
  FUNC_2(VAR_9, VAR_8);
 }

 VAR_5.opcode = VAR_3;
 VAR_5.nodeid = VAR_8->nodeid;
 VAR_5.in_numargs = 1;
 VAR_5.in_args[0].size = sizeof(VAR_10);
 VAR_5.in_args[0].value = &VAR_10;
 VAR_5.out_numargs = 1;
 VAR_5.out_args[0].size = sizeof(VAR_11);
 VAR_5.out_args[0].value = &VAR_11;
 VAR_12 = FUNC_3(VAR_9, &VAR_5);

 if (!VAR_12)
  return FUNC_1(VAR_11.revents);
 if (VAR_12 == -VAR_1) {
  VAR_9->no_poll = 1;
  return VAR_0;
 }
 return VAR_2;
}
