
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mnt; } ;
struct file {TYPE_2__* f_op; TYPE_1__ f_path; } ;
typedef int loff_t ;
struct TYPE_6__ {int i_mode; } ;
struct TYPE_5__ {int (* remap_file_range ) (struct file*,int,struct file*,int,int,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct file*) ;
 TYPE_3__* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*,int,int,int) ;
 int FUNC_7 (struct file*,int,struct file*,int,int,unsigned int) ;

loff_t FUNC_8(struct file *VAR_6, loff_t VAR_7,
     struct file *VAR_8, loff_t VAR_9,
     loff_t VAR_10, unsigned int VAR_11)
{
 loff_t VAR_12;

 FUNC_1(VAR_11 & ~(VAR_5 |
         VAR_4));

 VAR_12 = FUNC_5(VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_6(VAR_8, VAR_9, VAR_10, 1);
 if (VAR_12 < 0)
  goto out_drop_write;

 VAR_12 = -VAR_2;
 if (!FUNC_2(VAR_8))
  goto out_drop_write;

 VAR_12 = -VAR_3;
 if (VAR_6->f_path.mnt != VAR_8->f_path.mnt)
  goto out_drop_write;

 VAR_12 = -VAR_1;
 if (FUNC_0(FUNC_3(VAR_8)->i_mode))
  goto out_drop_write;

 VAR_12 = -VAR_0;
 if (!VAR_8->f_op->remap_file_range)
  goto out_drop_write;

 if (VAR_10 == 0) {
  VAR_12 = 0;
  goto out_drop_write;
 }

 VAR_12 = VAR_8->f_op->remap_file_range(VAR_6, VAR_7, VAR_8,
   VAR_9, VAR_10, VAR_11 | VAR_5);
out_drop_write:
 FUNC_4(VAR_8);

 return VAR_12;
}
