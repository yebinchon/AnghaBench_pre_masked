
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int ip_summed; } ;
struct igbvf_adapter {int flags; int hw_csum_good; int hw_csum_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct igbvf_adapter *VAR_7,
      u32 VAR_8, struct sk_buff *VAR_9)
{
 FUNC_0(VAR_9);


 if ((VAR_8 & VAR_3) ||
     (VAR_7->flags & VAR_6))
  return;


 if (VAR_8 &
     (VAR_2 | VAR_1)) {

  VAR_7->hw_csum_err++;
  return;
 }


 if (VAR_8 & (VAR_4 | VAR_5))
  VAR_9->ip_summed = VAR_0;

 VAR_7->hw_csum_good++;
}
