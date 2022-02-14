
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct TYPE_3__ {scalar_t__ rd_idx; scalar_t__ wr_idx; int read_queue; } ;
struct TYPE_4__ {TYPE_1__ rds; } ;
struct fmdev {TYPE_2__ rx; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;

int FUNC_1(struct fmdev *VAR_1, struct file *VAR_2,
    struct poll_table_struct *VAR_3)
{
 FUNC_0(VAR_2, &VAR_1->rx.rds.read_queue, VAR_3);
 if (VAR_1->rx.rds.rd_idx != VAR_1->rx.rds.wr_idx)
  return 0;

 return -VAR_0;
}
