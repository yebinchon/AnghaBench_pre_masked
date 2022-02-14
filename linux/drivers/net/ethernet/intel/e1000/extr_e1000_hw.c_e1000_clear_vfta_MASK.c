
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct e1000_hw *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {




  VAR_4 = (VAR_3 == VAR_5) ? VAR_6 : 0;
  FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4);
  FUNC_0();
 }
}
