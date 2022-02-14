
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct file*) ;
 long FUNC_8 (struct file*) ;
 int FUNC_9 (int ,struct inode*) ;
 int FUNC_10 (struct inode*) ;
 long FUNC_11 (int ,int ) ;
 long FUNC_12 (struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_13(struct file *VAR_6, unsigned int VAR_7,
    unsigned long VAR_8, unsigned int VAR_9)
{
 long VAR_10;
 struct inode *VAR_11 = FUNC_3(VAR_6);
 unsigned int VAR_12;

 if (!FUNC_5(VAR_11))
  return -VAR_1;

 VAR_10 = FUNC_8(VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_11);


 VAR_10 = -VAR_2;
 VAR_12 = FUNC_0(VAR_11->i_flags);
 if (((VAR_9 ^ VAR_12) & (VAR_4 | VAR_5)) &&
     !FUNC_1(VAR_0))
  goto unlock;

 VAR_10 = FUNC_11(FUNC_2(VAR_6), VAR_3);
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_12(VAR_6, VAR_7, VAR_8);

 FUNC_9(FUNC_10(VAR_11), VAR_11);
unlock:
 FUNC_6(VAR_11);

 FUNC_7(VAR_6);

 return VAR_10;

}
