
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_2(struct sk_buff *VAR_4)
{
 if (FUNC_0(VAR_4)) {
  if (FUNC_1(VAR_4)->gso_type & VAR_0)
   return VAR_2;
  else
   return VAR_3;
 }
 return VAR_1;
}
