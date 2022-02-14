
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int version; int protocol; } ;
struct TYPE_3__ {int nexthdr; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_2(struct sk_buff *VAR_0)
{
 return (FUNC_0(VAR_0)->version == 4) ?
  FUNC_0(VAR_0)->protocol : FUNC_1(VAR_0)->nexthdr;
}
