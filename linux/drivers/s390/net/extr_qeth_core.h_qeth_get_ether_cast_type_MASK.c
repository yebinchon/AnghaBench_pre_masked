
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct sk_buff *VAR_3)
{
 u8 *VAR_4 = FUNC_0(VAR_3)->h_dest;

 if (FUNC_2(VAR_4))
  return FUNC_1(VAR_4) ? VAR_0 :
             VAR_1;
 return VAR_2;
}
