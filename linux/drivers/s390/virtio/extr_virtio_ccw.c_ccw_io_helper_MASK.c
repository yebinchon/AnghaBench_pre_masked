
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_ccw_device {int curr_io; int err; int io_lock; int wait_q; int cdev; } ;
struct ccw1 {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ccw1*,int,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct virtio_ccw_device*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct virtio_ccw_device *VAR_2,
    struct ccw1 *VAR_3, __u32 VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 int VAR_7 = VAR_4 & VAR_1;

 FUNC_4(&VAR_2->io_lock);
 do {
  FUNC_6(FUNC_3(VAR_2->cdev), VAR_6);
  VAR_5 = FUNC_0(VAR_2->cdev, VAR_3, VAR_4, 0, 0);
  if (!VAR_5) {
   if (!VAR_2->curr_io)
    VAR_2->err = 0;
   VAR_2->curr_io |= VAR_7;
  }
  FUNC_7(FUNC_3(VAR_2->cdev), VAR_6);
  FUNC_1();
 } while (VAR_5 == -VAR_0);
 FUNC_8(VAR_2->wait_q, FUNC_2(VAR_2, VAR_7) == 0);
 VAR_5 = VAR_5 ? VAR_5 : VAR_2->err;
 FUNC_5(&VAR_2->io_lock);
 return VAR_5;
}
