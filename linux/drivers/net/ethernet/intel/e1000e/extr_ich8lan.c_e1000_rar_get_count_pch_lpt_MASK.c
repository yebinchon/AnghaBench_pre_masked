
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rar_entry_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct e1000_hw *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_2) & VAR_0;
 VAR_4 >>= VAR_1;

 switch (VAR_4) {
 case 0:

  VAR_5 = VAR_3->mac.rar_entry_count;
  break;
 case 1:

  VAR_5 = 1;
  break;
 default:

  VAR_5 = VAR_4 + 1;
  break;
 }

 return VAR_5;
}
