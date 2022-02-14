
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (struct inode*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static inline void FUNC_3(struct inode *VAR_0, __le32 *VAR_1, __le32 *VAR_2)
{
 unsigned long VAR_3 = 0, VAR_4 = 0;
 unsigned long VAR_5;

 for ( ; VAR_1 < VAR_2 ; VAR_1++) {
  VAR_5 = FUNC_1(*VAR_1);
  if (VAR_5) {
   *VAR_1 = 0;

   if (VAR_4 == 0)
    goto free_this;
   else if (VAR_3 == VAR_5 - VAR_4)
    VAR_4++;
   else {
    FUNC_0 (VAR_0, VAR_3, VAR_4);
    FUNC_2(VAR_0);
   free_this:
    VAR_3 = VAR_5;
    VAR_4 = 1;
   }
  }
 }
 if (VAR_4 > 0) {
  FUNC_0 (VAR_0, VAR_3, VAR_4);
  FUNC_2(VAR_0);
 }
}
