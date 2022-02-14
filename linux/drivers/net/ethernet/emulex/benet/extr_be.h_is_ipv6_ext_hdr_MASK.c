
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int version; } ;
struct TYPE_3__ {int nexthdr; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline bool FUNC_3(struct sk_buff *VAR_0)
{
 if (FUNC_0(VAR_0)->version == 6)
  return FUNC_1(FUNC_2(VAR_0)->nexthdr);
 else
  return 0;
}
