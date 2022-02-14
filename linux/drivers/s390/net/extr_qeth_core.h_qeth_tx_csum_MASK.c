
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ protocol; } ;
struct TYPE_3__ {scalar_t__ nexthdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_3, u8 *VAR_4, int VAR_5)
{
 *VAR_4 |= VAR_1;
 if ((VAR_5 == 4 && FUNC_0(VAR_3)->protocol == VAR_0) ||
     (VAR_5 == 6 && FUNC_1(VAR_3)->nexthdr == VAR_0))
  *VAR_4 |= VAR_2;
}
