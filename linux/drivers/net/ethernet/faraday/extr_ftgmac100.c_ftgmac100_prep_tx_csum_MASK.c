
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ protocol; } ;
struct TYPE_2__ {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_4, u32 *VAR_5)
{
 if (VAR_4->protocol == FUNC_0(VAR_0)) {
  u8 VAR_6 = FUNC_1(VAR_4)->protocol;

  *VAR_5 |= VAR_1;
  switch(VAR_6) {
  case 129:
   *VAR_5 |= VAR_2;
   return 1;
  case 128:
   *VAR_5 |= VAR_3;
   return 1;
  case 130:
   return 1;
  }
 }
 return FUNC_2(VAR_4) == 0;
}
