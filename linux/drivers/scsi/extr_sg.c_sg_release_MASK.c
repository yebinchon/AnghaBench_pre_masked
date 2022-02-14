
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_5__ {scalar_t__ open_cnt; int exclude; int open_rel_lock; int open_wait; int device; } ;
struct TYPE_4__ {int f_ref; TYPE_2__* parentdp; } ;
typedef TYPE_1__ Sg_fd ;
typedef TYPE_2__ Sg_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*,char*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_3, struct file *VAR_4)
{
 Sg_device *VAR_5;
 Sg_fd *VAR_6;

 if ((!(VAR_6 = (Sg_fd *) VAR_4->private_data)) || (!(VAR_5 = VAR_6->parentdp)))
  return -VAR_0;
 FUNC_0(3, FUNC_5(VAR_1, VAR_5, "sg_release\n"));

 FUNC_2(&VAR_5->open_rel_lock);
 FUNC_4(VAR_5->device);
 FUNC_1(&VAR_6->f_ref, VAR_2);
 VAR_5->open_cnt--;



 if (VAR_5->exclude) {
  VAR_5->exclude = 0;
  FUNC_7(&VAR_5->open_wait);
 } else if (0 == VAR_5->open_cnt) {
  FUNC_6(&VAR_5->open_wait);
 }
 FUNC_3(&VAR_5->open_rel_lock);
 return 0;
}
