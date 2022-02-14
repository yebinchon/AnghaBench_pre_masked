
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iavf_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iavf_hw*,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct iavf_hw *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  VAR_6 = FUNC_0(VAR_5, VAR_1) &
        VAR_2;
  if ((VAR_6 == VAR_4) ||
      (VAR_6 == VAR_3))
   return 0;
  FUNC_1(10, 20);
 }
 return -VAR_0;
}
