
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {size_t gso_size; } ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline __be16 FUNC_1(struct sk_buff *VAR_1)
{
 return VAR_0[FUNC_0(VAR_1)->gso_size];
}
