
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {int flags; int * trans_skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct channel*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct channel *VAR_1)
{
 if (VAR_1->trans_skb == ((void*)0))
  return FUNC_0(VAR_1);
 if (VAR_1->flags & VAR_0) {
  FUNC_1(VAR_1->trans_skb);
  return FUNC_0(VAR_1);
 }
 return 0;
}
