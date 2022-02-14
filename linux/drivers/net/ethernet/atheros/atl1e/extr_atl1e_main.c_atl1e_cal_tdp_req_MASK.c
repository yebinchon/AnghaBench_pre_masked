
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ protocol; } ;
struct TYPE_2__ {int nr_frags; scalar_t__ gso_type; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;
 TYPE_1__* FUNC_4 (struct sk_buff const*) ;
 int FUNC_5 (struct sk_buff const*) ;
 int FUNC_6 (struct sk_buff const*) ;

__attribute__((used)) static u16 FUNC_7(const struct sk_buff *VAR_4)
{
 int VAR_5 = 0;
 u16 VAR_6 = 1;
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_4(VAR_4)->nr_frags; VAR_5++) {
  VAR_7 = FUNC_1(&FUNC_4(VAR_4)->frags[VAR_5]);
  VAR_6 += ((VAR_7 + VAR_1 - 1) >> VAR_2);
 }

 if (FUNC_3(VAR_4)) {
  if (VAR_4->protocol == FUNC_0(VAR_0) ||
     (FUNC_4(VAR_4)->gso_type == VAR_3)) {
   VAR_8 = FUNC_5(VAR_4) +
     FUNC_6(VAR_4);
   if (VAR_8 < FUNC_2(VAR_4)) {
    VAR_6 += ((FUNC_2(VAR_4) - VAR_8 +
        VAR_1 - 1) >>
        VAR_2);
   }
  }

 }
 return VAR_6;
}
