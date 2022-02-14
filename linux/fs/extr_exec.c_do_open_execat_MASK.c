
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_flags {int open_flag; int lookup_flags; int intent; int acc_mode; } ;
struct filename {char* name; } ;
struct file {int f_path; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct file* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (struct file*) ;
 struct file* FUNC_4 (int,struct filename*,struct open_flags*) ;
 TYPE_1__* FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static struct file *FUNC_9(int VAR_11, struct filename *VAR_12, int VAR_13)
{
 struct file *VAR_14;
 int VAR_15;
 struct open_flags VAR_16 = {
  .open_flag = VAR_8 | VAR_9 | VAR_10,
  .acc_mode = VAR_7,
  .intent = VAR_6,
  .lookup_flags = VAR_5,
 };

 if ((VAR_13 & ~(VAR_1 | VAR_0)) != 0)
  return FUNC_0(-VAR_3);
 if (VAR_13 & VAR_1)
  VAR_16.lookup_flags &= ~VAR_5;
 if (VAR_13 & VAR_0)
  VAR_16.lookup_flags |= VAR_4;

 VAR_14 = FUNC_4(VAR_11, VAR_12, &VAR_16);
 if (FUNC_1(VAR_14))
  goto out;

 VAR_15 = -VAR_2;
 if (!FUNC_2(FUNC_5(VAR_14)->i_mode))
  goto exit;

 if (FUNC_8(&VAR_14->f_path))
  goto exit;

 VAR_15 = FUNC_3(VAR_14);
 if (VAR_15)
  goto exit;

 if (VAR_12->name[0] != '\0')
  FUNC_7(VAR_14);

out:
 return VAR_14;

exit:
 FUNC_6(VAR_14);
 return FUNC_0(VAR_15);
}
