
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tty_struct {int index; TYPE_1__* driver; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int rows; int cols; } ;
struct idal_buffer {TYPE_2__ view; struct idal_buffer* rdbuf; int fs_pid; int wait; } ;
struct fs3270 {TYPE_2__ view; struct fs3270* rdbuf; int fs_pid; int wait; } ;
struct file {struct idal_buffer* private_data; } ;
struct TYPE_7__ {scalar_t__ major; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct idal_buffer*) ;
 int FUNC_1 (struct idal_buffer*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct file*) ;
 struct idal_buffer* FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 struct tty_struct* FUNC_5 () ;
 int FUNC_6 (int ) ;
 struct idal_buffer* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int *,int,int ) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (int *,int) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (struct inode*,struct file*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct tty_struct*) ;

__attribute__((used)) static int
FUNC_21(struct inode *VAR_8, struct file *VAR_9)
{
 struct fs3270 *VAR_10;
 struct idal_buffer *VAR_11;
 int VAR_12, VAR_13 = 0;

 if (FUNC_8(FUNC_2(VAR_9)) != VAR_2)
  return -VAR_1;
 VAR_12 = FUNC_9(FUNC_2(VAR_9));

 if (VAR_12 == 0) {
  struct tty_struct *VAR_14 = FUNC_5();
  if (!VAR_14 || VAR_14->driver->major != VAR_3) {
   FUNC_20(VAR_14);
   return -VAR_1;
  }
  VAR_12 = VAR_14->index;
  FUNC_20(VAR_14);
 }
 FUNC_11(&VAR_7);

 VAR_10 = (struct fs3270 *) FUNC_16(&VAR_6, VAR_12);
 if (!FUNC_0(VAR_10)) {
  FUNC_17(&VAR_10->view);
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_3();
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_1(VAR_10);
  goto out;
 }

 FUNC_10(&VAR_10->wait);
 VAR_10->fs_pid = FUNC_6(FUNC_19(VAR_5));
 VAR_13 = FUNC_14(&VAR_10->view, &VAR_6, VAR_12,
         VAR_4);
 if (VAR_13) {
  FUNC_4(&VAR_10->view);
  goto out;
 }


 VAR_11 = FUNC_7(2*VAR_10->view.rows*VAR_10->view.cols + 5, 0);
 if (FUNC_0(VAR_11)) {
  FUNC_17(&VAR_10->view);
  FUNC_15(&VAR_10->view);
  VAR_13 = FUNC_1(VAR_11);
  goto out;
 }
 VAR_10->rdbuf = VAR_11;

 VAR_13 = FUNC_13(&VAR_10->view);
 if (VAR_13) {
  FUNC_17(&VAR_10->view);
  FUNC_15(&VAR_10->view);
  goto out;
 }
 FUNC_18(VAR_8, VAR_9);
 VAR_9->private_data = VAR_10;
out:
 FUNC_12(&VAR_7);
 return VAR_13;
}
