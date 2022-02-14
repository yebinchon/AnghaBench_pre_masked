
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int gso_size; } ;
struct TYPE_3__ {int len; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_3(struct sk_buff *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0)->gso_size + sizeof(struct udphdr);

 FUNC_2(VAR_0)->len = FUNC_0(VAR_1);
}
