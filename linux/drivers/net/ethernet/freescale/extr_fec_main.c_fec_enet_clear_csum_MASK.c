
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; scalar_t__ csum_offset; scalar_t__ csum_start; scalar_t__ head; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ __sum16 ;
struct TYPE_2__ {scalar_t__ check; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_1, struct net_device *VAR_2)
{

 if (VAR_1->ip_summed != VAR_0)
  return 0;

 if (FUNC_3(FUNC_2(VAR_1, 0)))
  return -1;

 if (FUNC_1(VAR_1))
  FUNC_0(VAR_1)->check = 0;
 *(__sum16 *)(VAR_1->head + VAR_1->csum_start + VAR_1->csum_offset) = 0;

 return 0;
}
