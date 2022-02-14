
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_1, loff_t VAR_2,
          loff_t VAR_3)
{
 loff_t VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_2 < VAR_4) {
  loff_t VAR_5 = VAR_4 - VAR_2;
  if (VAR_3 < VAR_5)
   VAR_5 = VAR_3;
  FUNC_0(VAR_1, VAR_2, VAR_5);
  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;
 }
 if (VAR_3 >= VAR_0) {
  loff_t VAR_6 = FUNC_1(VAR_3, VAR_0);
  FUNC_3(VAR_1, VAR_2, VAR_2 + VAR_6 - 1);
  VAR_2 += VAR_6;
  VAR_3 -= VAR_6;
 }
 if (VAR_3)
  FUNC_0(VAR_1, VAR_2, VAR_3);
}
