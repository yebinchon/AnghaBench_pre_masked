
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txfcb {int vlctl; int flags; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_1, struct txfcb *VAR_2)
{
 VAR_2->flags |= VAR_0;
 VAR_2->vlctl = FUNC_0(FUNC_1(VAR_1));
}
