
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ default_vid; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {int active_vlans; struct fm10k_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct fm10k_intfc *VAR_1, u16 VAR_2)
{
 struct fm10k_hw *VAR_3 = &VAR_1->hw;
 u16 VAR_4 = VAR_3->mac.default_vid;
 u16 VAR_5 = VAR_2 < VAR_4 ? VAR_4 : VAR_0;

 VAR_2 = FUNC_0(VAR_1->active_vlans, VAR_5, ++VAR_2);

 return VAR_2;
}
