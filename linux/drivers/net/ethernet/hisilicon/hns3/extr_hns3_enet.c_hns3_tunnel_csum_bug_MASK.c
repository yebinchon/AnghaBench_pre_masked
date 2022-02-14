
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union l4_hdr_info {TYPE_1__* udp; int hdr; } ;
struct sk_buff {int encapsulation; } ;
struct TYPE_2__ {scalar_t__ dest; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_1)
{
 union l4_hdr_info VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (!(!VAR_1->encapsulation &&
       VAR_2>dest == FUNC_0(VAR_0)))
  return 0;

 FUNC_1(VAR_1);

 return 1;
}
