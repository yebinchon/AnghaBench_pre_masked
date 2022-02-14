
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {unsigned int gso_size; int nr_frags; int * frags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_4(struct sk_buff *VAR_1)
{
 int VAR_2 = VAR_0 - 1;
 unsigned int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3 += FUNC_1(&FUNC_3(VAR_1)->frags[VAR_4]);




 if (((VAR_3 + FUNC_2(VAR_1)) < (FUNC_3(VAR_1)->gso_size +
     FUNC_0(VAR_1))) || (VAR_3 < FUNC_3(VAR_1)->gso_size))
  return 1;


 for (VAR_4 = 0; VAR_4 < (FUNC_3(VAR_1)->nr_frags - VAR_2 - 1); VAR_4++) {
  VAR_3 -= FUNC_1(&FUNC_3(VAR_1)->frags[VAR_4]);
  VAR_3 += FUNC_1(&FUNC_3(VAR_1)->frags[VAR_4 + VAR_2]);

  if (VAR_3 < FUNC_3(VAR_1)->gso_size)
   return 1;
 }

 return 0;
}
