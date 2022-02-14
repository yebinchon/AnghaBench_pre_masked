
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* driver; } ;
struct tty_port {int flags; int blocked_open; int count; int open_wait; } ;
struct slgt_info {int lock; struct tty_port port; } ;
struct file {int f_flags; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (struct file*) ;
 scalar_t__ FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (struct tty_struct*) ;
 int FUNC_14 (struct tty_port*) ;
 scalar_t__ FUNC_15 (struct tty_port*) ;
 int FUNC_16 (struct tty_port*) ;
 int FUNC_17 (struct tty_port*,int) ;
 int FUNC_18 (struct tty_struct*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_19(struct tty_struct *VAR_8, struct file *VAR_9,
      struct slgt_info *VAR_10)
{
 FUNC_3(VAR_7, VAR_6);
 int VAR_11;
 bool VAR_12 = 0;
 unsigned long VAR_13;
 int VAR_14;
 struct tty_port *VAR_15 = &VAR_10->port;

 FUNC_2(("%s block_til_ready\n", VAR_8->driver->name));

 if (VAR_9->f_flags & VAR_3 || FUNC_12(VAR_8)) {

  FUNC_17(VAR_15, 1);
  return 0;
 }

 if (FUNC_1(VAR_8))
  VAR_12 = 1;
 VAR_11 = 0;
 FUNC_4(&VAR_15->open_wait, &VAR_7);

 FUNC_9(&VAR_10->lock, VAR_13);
 VAR_15->count--;
 FUNC_10(&VAR_10->lock, VAR_13);
 VAR_15->blocked_open++;

 while (1) {
  if (FUNC_0(VAR_8) && FUNC_15(VAR_15))
   FUNC_16(VAR_15);

  FUNC_7(VAR_4);

  if (FUNC_11(VAR_9) || !FUNC_15(VAR_15)) {
   VAR_11 = (VAR_15->flags & VAR_0) ?
     -VAR_1 : -VAR_2;
   break;
  }

  VAR_14 = FUNC_14(VAR_15);
  if (VAR_12 || VAR_14)
   break;

  if (FUNC_8(VAR_6)) {
   VAR_11 = -VAR_2;
   break;
  }

  FUNC_2(("%s block_til_ready wait\n", VAR_8->driver->name));
  FUNC_18(VAR_8);
  FUNC_6();
  FUNC_13(VAR_8);
 }

 FUNC_7(VAR_5);
 FUNC_5(&VAR_15->open_wait, &VAR_7);

 if (!FUNC_11(VAR_9))
  VAR_15->count++;
 VAR_15->blocked_open--;

 if (!VAR_11)
  FUNC_17(VAR_15, 1);

 FUNC_2(("%s block_til_ready ready, rc=%d\n", VAR_8->driver->name, VAR_11));
 return VAR_11;
}
