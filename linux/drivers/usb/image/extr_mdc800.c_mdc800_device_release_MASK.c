
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; int io_lock; scalar_t__ open; int download_urb; int write_urb; int irq_urb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (struct inode* VAR_3, struct file *VAR_4)
{
 int VAR_5=0;

 FUNC_0(&VAR_2->io_lock);
 if (VAR_2->open && (VAR_2->state != VAR_1))
 {
  FUNC_2(VAR_2->irq_urb);
  FUNC_2(VAR_2->write_urb);
  FUNC_2(VAR_2->download_urb);
  VAR_2->open=0;
 }
 else
 {
  VAR_5=-VAR_0;
 }

 FUNC_1(&VAR_2->io_lock);
 return VAR_5;
}
