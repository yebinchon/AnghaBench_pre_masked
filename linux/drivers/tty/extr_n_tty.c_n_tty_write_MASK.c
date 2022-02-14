
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int termios_rwsem; int flags; scalar_t__ fasync; int write_wait; TYPE_3__* ops; struct n_tty_data* disc_data; TYPE_2__* link; } ;
struct n_tty_data {int output_lock; } ;
struct file {TYPE_1__* f_op; } ;
typedef int ssize_t ;
struct TYPE_6__ {int (* write ) (struct tty_struct*,unsigned char const*,size_t) ;int (* flush_chars ) (struct tty_struct*) ;} ;
struct TYPE_5__ {int count; } ;
struct TYPE_4__ {scalar_t__ write; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tty_struct*) ;
 scalar_t__ FUNC_8 (int,struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*,unsigned char const*,size_t) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct tty_struct*) ;
 int FUNC_14 (struct tty_struct*,unsigned char const*,size_t) ;
 int FUNC_15 (struct tty_struct*) ;
 scalar_t__ FUNC_16 (struct file*) ;
 scalar_t__ FUNC_17 (struct tty_struct*,struct file*) ;
 int FUNC_18 (int *) ;
 int VAR_8 ;
 int FUNC_19 (int *,int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static ssize_t FUNC_20(struct tty_struct *VAR_10, struct file *VAR_11,
      const unsigned char *VAR_12, size_t VAR_13)
{
 const unsigned char *VAR_14 = VAR_12;
 FUNC_0(VAR_8, VAR_9);
 int VAR_15;
 ssize_t VAR_16 = 0;


 if (FUNC_1(VAR_10) && VAR_11->f_op->write != VAR_7) {
  VAR_16 = FUNC_15(VAR_10);
  if (VAR_16)
   return VAR_16;
 }

 FUNC_4(&VAR_10->termios_rwsem);


 FUNC_7(VAR_10);

 FUNC_3(&VAR_10->write_wait, &VAR_8);
 while (1) {
  if (FUNC_12(VAR_6)) {
   VAR_16 = -VAR_2;
   break;
  }
  if (FUNC_16(VAR_11) || (VAR_10->link && !VAR_10->link->count)) {
   VAR_16 = -VAR_1;
   break;
  }
  if (FUNC_2(VAR_10)) {
   while (VAR_13 > 0) {
    ssize_t VAR_17 = FUNC_9(VAR_10, VAR_14, VAR_13);
    if (VAR_17 < 0) {
     if (VAR_17 == -VAR_0)
      break;
     VAR_16 = VAR_17;
     goto break_out;
    }
    VAR_14 += VAR_17;
    VAR_13 -= VAR_17;
    if (VAR_13 == 0)
     break;
    VAR_15 = *VAR_14;
    if (FUNC_8(VAR_15, VAR_10) < 0)
     break;
    VAR_14++; VAR_13--;
   }
   if (VAR_10->ops->flush_chars)
    VAR_10->ops->flush_chars(VAR_10);
  } else {
   struct n_tty_data *VAR_18 = VAR_10->disc_data;

   while (VAR_13 > 0) {
    FUNC_5(&VAR_18->output_lock);
    VAR_15 = VAR_10->ops->write(VAR_10, VAR_14, VAR_13);
    FUNC_6(&VAR_18->output_lock);
    if (VAR_15 < 0) {
     VAR_16 = VAR_15;
     goto break_out;
    }
    if (!VAR_15)
     break;
    VAR_14 += VAR_15;
    VAR_13 -= VAR_15;
   }
  }
  if (!VAR_13)
   break;
  if (FUNC_17(VAR_10, VAR_11)) {
   VAR_16 = -VAR_0;
   break;
  }
  FUNC_18(&VAR_10->termios_rwsem);

  FUNC_19(&VAR_8, VAR_4, VAR_3);

  FUNC_4(&VAR_10->termios_rwsem);
 }
break_out:
 FUNC_10(&VAR_10->write_wait, &VAR_8);
 if (VAR_13 && VAR_10->fasync)
  FUNC_11(VAR_5, &VAR_10->flags);
 FUNC_18(&VAR_10->termios_rwsem);
 return (VAR_14 - VAR_12) ? VAR_14 - VAR_12 : VAR_16;
}
