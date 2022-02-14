
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct vfsmount* mnt; } ;
struct vfsmount {int f_mode; TYPE_1__ f_path; } ;
struct pid_namespace {int bacct; } ;
struct fs_pin {int dummy; } ;
struct filename {int dummy; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;
struct bsd_acct_struct {int lock; int pin; int done; int work; struct pid_namespace* ns; int needcheck; struct vfsmount* file; int count; } ;
struct TYPE_4__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct vfsmount*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vfsmount*) ;
 int FUNC_5 (struct vfsmount*) ;
 int VAR_8 ;
 int FUNC_6 (int *,int) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_7 (struct vfsmount*) ;
 struct vfsmount* FUNC_8 (struct filename*,int,int ) ;
 int FUNC_9 (struct vfsmount*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int VAR_11 ;
 int FUNC_12 (struct bsd_acct_struct*) ;
 struct bsd_acct_struct* FUNC_13 (int,int ) ;
 struct vfsmount* FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct vfsmount*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,struct vfsmount*) ;
 int FUNC_20 (struct fs_pin*) ;
 int FUNC_21 () ;
 struct pid_namespace* FUNC_22 (int ) ;
 struct fs_pin* FUNC_23 (int *,int *) ;

__attribute__((used)) static int FUNC_24(struct filename *VAR_12)
{
 struct file *VAR_13;
 struct vfsmount *VAR_14, *VAR_15;
 struct pid_namespace *VAR_16 = FUNC_22(VAR_10);
 struct bsd_acct_struct *VAR_17;
 struct fs_pin *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_13(sizeof(struct bsd_acct_struct), VAR_4);
 if (!VAR_17)
  return -VAR_2;


 VAR_13 = FUNC_8(VAR_12, VAR_7|VAR_5|VAR_6, 0);
 if (FUNC_1(VAR_13)) {
  FUNC_12(VAR_17);
  return FUNC_2(VAR_13);
 }

 if (!FUNC_3(FUNC_7(VAR_13)->i_mode)) {
  FUNC_12(VAR_17);
  FUNC_9(VAR_13, ((void*)0));
  return -VAR_0;
 }

 if (!(VAR_13->f_mode & VAR_3)) {
  FUNC_12(VAR_17);
  FUNC_9(VAR_13, ((void*)0));
  return -VAR_1;
 }
 VAR_15 = FUNC_14(&VAR_13->f_path);
 if (FUNC_1(VAR_15)) {
  FUNC_12(VAR_17);
  FUNC_9(VAR_13, ((void*)0));
  return FUNC_2(VAR_15);
 }
 VAR_19 = FUNC_5(VAR_15);
 if (VAR_19) {
  FUNC_15(VAR_15);
  FUNC_12(VAR_17);
  FUNC_9(VAR_13, ((void*)0));
  return VAR_19;
 }
 VAR_14 = VAR_13->f_path.mnt;
 VAR_13->f_path.mnt = VAR_15;

 FUNC_6(&VAR_17->count, 1);
 FUNC_11(&VAR_17->pin, VAR_8);
 VAR_17->file = VAR_13;
 VAR_17->needcheck = VAR_11;
 VAR_17->ns = VAR_16;
 FUNC_16(&VAR_17->lock);
 FUNC_0(&VAR_17->work, VAR_9);
 FUNC_10(&VAR_17->done);
 FUNC_17(&VAR_17->lock, 1);
 FUNC_19(&VAR_17->pin, VAR_14);

 FUNC_21();
 VAR_18 = FUNC_23(&VAR_16->bacct, &VAR_17->pin);
 FUNC_18(&VAR_17->lock);
 FUNC_20(VAR_18);
 FUNC_4(VAR_14);
 FUNC_15(VAR_14);
 return 0;
}
