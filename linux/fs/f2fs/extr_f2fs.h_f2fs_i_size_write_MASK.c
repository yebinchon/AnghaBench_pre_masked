
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct inode *VAR_2, loff_t VAR_3)
{
 bool VAR_4 = !FUNC_3(VAR_2, VAR_1);
 bool VAR_5 = FUNC_3(VAR_2, VAR_0);

 if (FUNC_1(VAR_2) == VAR_3)
  return;

 FUNC_2(VAR_2, VAR_3);
 FUNC_0(VAR_2, 1);
 if (VAR_4 || VAR_5)
  FUNC_4(VAR_2, VAR_0);
}
