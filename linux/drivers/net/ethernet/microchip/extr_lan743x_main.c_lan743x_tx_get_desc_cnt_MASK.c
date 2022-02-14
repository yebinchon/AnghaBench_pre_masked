
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct lan743x_tx {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct lan743x_tx *VAR_0,
       struct sk_buff *VAR_1)
{
 int VAR_2 = 1;
 int VAR_3 = 0;

 if (FUNC_0(VAR_1))
  VAR_2++;
 VAR_3 = FUNC_1(VAR_1)->nr_frags;
 VAR_2 += VAR_3;
 return VAR_2;
}
