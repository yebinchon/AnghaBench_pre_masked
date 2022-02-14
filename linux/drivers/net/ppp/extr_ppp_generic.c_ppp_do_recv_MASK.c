
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ppp {int closing; } ;
struct channel {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ppp*,struct sk_buff*,struct channel*) ;
 int FUNC_2 (struct ppp*) ;
 int FUNC_3 (struct ppp*) ;

__attribute__((used)) static inline void
FUNC_4(struct ppp *VAR_0, struct sk_buff *VAR_1, struct channel *VAR_2)
{
 FUNC_2(VAR_0);
 if (!VAR_0->closing)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_1);
 FUNC_3(VAR_0);
}
