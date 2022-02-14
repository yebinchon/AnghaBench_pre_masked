
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {scalar_t__ dest; } ;
struct sk_buff {scalar_t__ len; scalar_t__ protocol; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 struct udphdr* FUNC_3 (struct sk_buff*) ;

bool FUNC_4(struct sk_buff *VAR_5)
{
 struct udphdr *VAR_6;

 VAR_6 = FUNC_3(VAR_5);
 return VAR_5->len >= VAR_4 &&
  VAR_5->len <= VAR_3 &&
  FUNC_2(VAR_5->protocol == FUNC_0(VAR_0)) &&
  FUNC_1(VAR_5)->protocol == VAR_1 &&
  VAR_6->dest == FUNC_0(VAR_2);
}
