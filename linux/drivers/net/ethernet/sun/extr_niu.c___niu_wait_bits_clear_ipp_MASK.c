
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_1, unsigned long VAR_2,
         u64 VAR_3, int VAR_4, int VAR_5)
{
 while (--VAR_4 >= 0) {
  u64 VAR_6 = FUNC_0(VAR_2);

  if (!(VAR_6 & VAR_3))
   break;
  FUNC_1(VAR_5);
 }
 if (VAR_4 < 0)
  return -VAR_0;
 return 0;
}
