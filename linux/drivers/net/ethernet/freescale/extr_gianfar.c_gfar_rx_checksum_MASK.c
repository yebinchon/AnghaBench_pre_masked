
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; } ;
struct rxfcb {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_4, struct rxfcb *VAR_5)
{




 if ((FUNC_0(VAR_5->flags) & VAR_2) ==
     (VAR_1 | VAR_3))
  VAR_4->ip_summed = VAR_0;
 else
  FUNC_1(VAR_4);
}
