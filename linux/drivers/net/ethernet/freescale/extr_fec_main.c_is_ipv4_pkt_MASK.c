
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline bool FUNC_2(struct sk_buff *VAR_1)
{
 return VAR_1->protocol == FUNC_0(VAR_0) && FUNC_1(VAR_1)->version == 4;
}
