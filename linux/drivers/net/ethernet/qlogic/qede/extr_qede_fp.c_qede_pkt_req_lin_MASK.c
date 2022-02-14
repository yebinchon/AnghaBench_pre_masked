
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_3, u8 VAR_4)
{
 int VAR_5 = VAR_0 - 1;

 if (VAR_4 & VAR_2) {
  int VAR_6;

  VAR_6 = FUNC_0(VAR_3, VAR_4 & VAR_1);


  if (FUNC_1(VAR_3) > VAR_6)
   VAR_5--;
 }

 return (FUNC_2(VAR_3)->nr_frags > VAR_5);
}
