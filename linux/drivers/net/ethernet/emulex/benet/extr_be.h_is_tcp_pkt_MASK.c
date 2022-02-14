
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int version; scalar_t__ protocol; } ;
struct TYPE_3__ {scalar_t__ nexthdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline u8 FUNC_2(struct sk_buff *VAR_2)
{
 u8 VAR_3 = 0;

 if (FUNC_0(VAR_2)->version == 4)
  VAR_3 = (FUNC_0(VAR_2)->protocol == VAR_0);
 else if (FUNC_0(VAR_2)->version == 6)
  VAR_3 = (FUNC_1(VAR_2)->nexthdr == VAR_1);

 return VAR_3;
}
