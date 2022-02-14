
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {scalar_t__ i_sb; } ;
struct TYPE_3__ {scalar_t__ (* remap_file_range ) (struct file*,scalar_t__,struct file*,scalar_t__,scalar_t__,unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 TYPE_2__* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct file*,struct file*) ;
 scalar_t__ FUNC_5 (struct file*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct file*,scalar_t__,struct file*,scalar_t__,scalar_t__,unsigned int) ;

loff_t FUNC_7(struct file *VAR_3, loff_t VAR_4,
      struct file *VAR_5, loff_t VAR_6,
      loff_t VAR_7, unsigned int VAR_8)
{
 loff_t VAR_9;

 FUNC_0(VAR_8 & VAR_2);






 if (FUNC_1(VAR_3)->i_sb != FUNC_1(VAR_5)->i_sb)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_3, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 if (!VAR_3->f_op->remap_file_range)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_7, 0);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, 1);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_3->f_op->remap_file_range(VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_3);
 FUNC_3(VAR_5);
 return VAR_9;
}
