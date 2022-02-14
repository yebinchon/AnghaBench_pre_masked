
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_3, u32 VAR_4, u8 VAR_5)
{
 if (VAR_5 == VAR_2 &&
     VAR_4 >= (VAR_0 + 1) &&
     VAR_4 <= (VAR_0 + 4) &&
     VAR_3->protocol == FUNC_0(VAR_1))
  return 1;

 return 0;
}
