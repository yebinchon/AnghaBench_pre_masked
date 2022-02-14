
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; int i_mode; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct inode*,struct inode*,scalar_t__,scalar_t__*,unsigned int) ;
 int FUNC_8 (struct file*,scalar_t__,struct file*,scalar_t__,scalar_t__*,unsigned int) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,scalar_t__,struct inode*,scalar_t__,scalar_t__,int*) ;

int FUNC_12(struct file *VAR_6, loff_t VAR_7,
      struct file *VAR_8, loff_t VAR_9,
      loff_t *VAR_10, unsigned int VAR_11)
{
 struct inode *VAR_12 = FUNC_4(VAR_6);
 struct inode *VAR_13 = FUNC_4(VAR_8);
 bool VAR_14 = (VAR_12 == VAR_13);
 int VAR_15;


 if (FUNC_0(VAR_13))
  return -VAR_3;

 if (FUNC_1(VAR_12) || FUNC_1(VAR_13))
  return -VAR_4;


 if (FUNC_2(VAR_12->i_mode) || FUNC_2(VAR_13->i_mode))
  return -VAR_2;
 if (!FUNC_3(VAR_12->i_mode) || !FUNC_3(VAR_13->i_mode))
  return -VAR_1;


 if (*VAR_10 == 0) {
  loff_t VAR_16 = FUNC_9(VAR_12);

  if ((VAR_11 & VAR_5) || VAR_7 == VAR_16)
   return 0;
  if (VAR_7 > VAR_16)
   return -VAR_1;
  *VAR_10 = VAR_16 - VAR_7;
  if (*VAR_10 == 0)
   return 0;
 }


 VAR_15 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
   VAR_11);
 if (VAR_15)
  return VAR_15;


 FUNC_10(VAR_12);
 if (!VAR_14)
  FUNC_10(VAR_13);

 VAR_15 = FUNC_6(VAR_12->i_mapping,
   VAR_7, VAR_7 + *VAR_10 - 1);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_6(VAR_13->i_mapping,
   VAR_9, VAR_9 + *VAR_10 - 1);
 if (VAR_15)
  return VAR_15;




 if (VAR_11 & VAR_5) {
  bool VAR_17 = 0;

  VAR_15 = FUNC_11(VAR_12, VAR_7,
    VAR_13, VAR_9, *VAR_10, &VAR_17);
  if (VAR_15)
   return VAR_15;
  if (!VAR_17)
   return -VAR_0;
 }

 VAR_15 = FUNC_7(VAR_12, VAR_13, VAR_9, VAR_10,
   VAR_11);
 if (VAR_15)
  return VAR_15;


 if (!(VAR_11 & VAR_5))
  VAR_15 = FUNC_5(VAR_8);

 return VAR_15;
}
