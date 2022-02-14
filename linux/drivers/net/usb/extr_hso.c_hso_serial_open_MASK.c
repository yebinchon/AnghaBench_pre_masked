
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {struct hso_serial* driver_data; int index; } ;
struct TYPE_4__ {int count; } ;
struct hso_serial {scalar_t__ magic; TYPE_2__* parent; TYPE_1__ port; int unthrottle_tasklet; int rx_state; int minor; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int mutex; int interface; int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tty_struct*,int *) ;
 struct hso_serial* FUNC_2 (int ) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (struct tty_struct*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_11 (TYPE_1__*,struct tty_struct*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct tty_struct *VAR_7, struct file *VAR_8)
{
 struct hso_serial *VAR_9 = FUNC_2(VAR_7->index);
 int VAR_10;


 if (VAR_9 == ((void*)0) || VAR_9->magic != VAR_2) {
  FUNC_0(1);
  VAR_7->driver_data = ((void*)0);
  FUNC_3(0x1, "Failed to open port\n");
  return -VAR_0;
 }

 FUNC_8(&VAR_9->parent->mutex);
 VAR_10 = FUNC_12(VAR_9->parent->interface);
 if (VAR_10 < 0)
  goto err_out;

 FUNC_3(0x1, "Opening %d\n", VAR_9->minor);


 VAR_7->driver_data = VAR_9;
 FUNC_11(&VAR_9->port, VAR_7);


 VAR_9->port.count++;
 if (VAR_9->port.count == 1) {
  VAR_9->rx_state = VAR_3;

  FUNC_1(VAR_7, ((void*)0));
  FUNC_10(&VAR_9->unthrottle_tasklet,
        (void (*)(unsigned long))VAR_6,
        (unsigned long)VAR_9);
  VAR_10 = FUNC_5(VAR_9->parent, VAR_1);
  if (VAR_10) {
   FUNC_6(VAR_9->parent);
   VAR_9->port.count--;
  } else {
   FUNC_7(&VAR_9->parent->ref);
  }
 } else {
  FUNC_3(0x1, "Port was already open\n");
 }

 FUNC_13(VAR_9->parent->interface);


 if (VAR_10)
  FUNC_4(VAR_7, VAR_5 | VAR_4, 0);
err_out:
 FUNC_9(&VAR_9->parent->mutex);
 return VAR_10;
}
