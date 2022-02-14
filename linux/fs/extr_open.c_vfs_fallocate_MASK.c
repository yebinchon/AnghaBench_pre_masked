
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; int i_mode; } ;
struct file {int f_mode; TYPE_2__* f_op; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {long (* fallocate ) (struct file*,int,scalar_t__,scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__ s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct file*) ;
 struct inode* FUNC_8 (struct file*) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (struct file*) ;
 long FUNC_11 (struct file*,int ) ;
 long FUNC_12 (struct file*,int,scalar_t__,scalar_t__) ;

int FUNC_13(struct file *VAR_18, int VAR_19, loff_t VAR_20, loff_t VAR_21)
{
 struct inode *VAR_22 = FUNC_8(VAR_18);
 long VAR_23;

 if (VAR_20 < 0 || VAR_21 <= 0)
  return -VAR_2;


 if (VAR_19 & ~VAR_13)
  return -VAR_5;


 if ((VAR_19 & (VAR_12 | VAR_15)) ==
     (VAR_12 | VAR_15))
  return -VAR_5;


 if ((VAR_19 & VAR_12) &&
     !(VAR_19 & VAR_11))
  return -VAR_5;


 if ((VAR_19 & VAR_9) &&
     (VAR_19 & ~VAR_9))
  return -VAR_2;


 if ((VAR_19 & VAR_10) &&
     (VAR_19 & ~VAR_10))
  return -VAR_2;


 if ((VAR_19 & VAR_14) &&
     (VAR_19 & ~(VAR_14 | VAR_11)))
  return -VAR_2;

 if (!(VAR_18->f_mode & VAR_16))
  return -VAR_0;




 if ((VAR_19 & ~VAR_11) && FUNC_0(VAR_22))
  return -VAR_6;

 if (FUNC_1(VAR_22))
  return -VAR_6;




 if (FUNC_2(VAR_22))
  return -VAR_8;





 VAR_23 = FUNC_11(VAR_18, VAR_17);
 if (VAR_23)
  return VAR_23;

 if (FUNC_5(VAR_22->i_mode))
  return -VAR_7;

 if (FUNC_4(VAR_22->i_mode))
  return -VAR_3;

 if (!FUNC_6(VAR_22->i_mode) && !FUNC_3(VAR_22->i_mode))
  return -VAR_4;


 if (((VAR_20 + VAR_21) > VAR_22->i_sb->s_maxbytes) || ((VAR_20 + VAR_21) < 0))
  return -VAR_1;

 if (!VAR_18->f_op->fallocate)
  return -VAR_5;

 FUNC_9(VAR_18);
 VAR_23 = VAR_18->f_op->fallocate(VAR_18, VAR_19, VAR_20, VAR_21);
 if (VAR_23 == 0)
  FUNC_10(VAR_18);

 FUNC_7(VAR_18);
 return VAR_23;
}
