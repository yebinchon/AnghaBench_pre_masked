
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;







__attribute__((used)) static inline u8 FUNC_0(struct ixgbe_adapter *VAR_2)
{
 switch (VAR_2->hw.mac.type) {
 case 133:
 case 132:
 case 131:
  return VAR_0;
 case 130:
 case 129:
 case 128:
  return VAR_1;
 default:
  return 0;
 }
}
