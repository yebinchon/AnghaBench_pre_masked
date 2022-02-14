
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct ppp {int dummy; } ;
struct channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ppp*) ;
 int FUNC_3 (struct ppp*,struct sk_buff*,struct channel*) ;
 int FUNC_4 (struct ppp*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_6(struct ppp *VAR_1, struct sk_buff *VAR_2, struct channel *VAR_3)
{

 if (VAR_2->len > 0) {
  FUNC_5(VAR_2);






   FUNC_4(VAR_1, VAR_2);
 } else {
  FUNC_1(VAR_2);
  FUNC_2(VAR_1);
 }
}
