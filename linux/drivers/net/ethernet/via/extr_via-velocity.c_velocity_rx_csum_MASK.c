
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int ip_summed; } ;
struct TYPE_2__ {int CSM; } ;
struct rx_desc {TYPE_1__ rdesc1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct rx_desc *VAR_6, struct sk_buff *VAR_7)
{
 FUNC_0(VAR_7);

 if (VAR_6->rdesc1.CSM & VAR_1) {
  if (VAR_6->rdesc1.CSM & VAR_2) {
   if ((VAR_6->rdesc1.CSM & VAR_3) ||
     (VAR_6->rdesc1.CSM & VAR_5)) {
    if (!(VAR_6->rdesc1.CSM & VAR_4))
     return;
   }
   VAR_7->ip_summed = VAR_0;
  }
 }
}
