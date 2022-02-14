
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct be_adapter {int vlan_prio_bmap; int recommended_prio_bits; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline u16 FUNC_2(struct be_adapter *VAR_1,
         struct sk_buff *VAR_2)
{
 u8 VAR_3;
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = FUNC_1(VAR_2);

 if (!(VAR_1->vlan_prio_bmap & (1 << VAR_3)))
  VAR_4 = (VAR_4 & ~VAR_0) |
    VAR_1->recommended_prio_bits;

 return VAR_4;
}
