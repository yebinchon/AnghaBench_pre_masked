
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,unsigned long*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 unsigned long FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct inode *VAR_1, u64 VAR_2, u64 *VAR_3)
{
 unsigned long VAR_4 = 0;
 u64 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, &VAR_4);
 if (FUNC_4(VAR_7))
  return VAR_7;

 VAR_5 = (u64)FUNC_1(VAR_1) *
    FUNC_2(VAR_1);
 VAR_6 = VAR_5 * VAR_4;

 if (VAR_2 == VAR_6 &&
   FUNC_3(VAR_1, VAR_4))
  VAR_6 += VAR_5;

 if (VAR_2 > VAR_6)
  return -VAR_0;

 *VAR_3 = VAR_6;
 return 0;
}
