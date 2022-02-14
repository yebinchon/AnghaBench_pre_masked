
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_4,
       struct inode *VAR_5,
       loff_t VAR_6,
       loff_t *VAR_7,
       unsigned int VAR_8)
{
 u64 VAR_9 = FUNC_0(VAR_4) - 1;
 loff_t VAR_10 = *VAR_7;

 if ((*VAR_7 & VAR_9) == 0)
  return 0;

 if ((VAR_8 & VAR_3) ||
     VAR_6 + *VAR_7 < FUNC_1(VAR_5))
  VAR_10 &= ~VAR_9;

 if (VAR_10 == *VAR_7)
  return 0;

 if (VAR_8 & VAR_2) {
  *VAR_7 = VAR_10;
  return 0;
 }

 return (VAR_8 & VAR_3) ? -VAR_0 : -VAR_1;
}
