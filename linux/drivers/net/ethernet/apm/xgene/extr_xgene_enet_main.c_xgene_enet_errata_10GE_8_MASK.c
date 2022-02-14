
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int h_proto; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_2, u32 VAR_3, u8 VAR_4)
{
 if (VAR_4 == VAR_1 && VAR_3 == VAR_0) {
  if (FUNC_1(FUNC_0(VAR_2)->h_proto) < 46)
   return 1;
 }

 return 0;
}
