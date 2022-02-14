
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_3)
{
 u8 VAR_4 = FUNC_1(VAR_3)->protocol;

 if (!FUNC_0(VAR_0))
  return 0;

 return VAR_4 == VAR_1 || VAR_4 == VAR_2;
}
