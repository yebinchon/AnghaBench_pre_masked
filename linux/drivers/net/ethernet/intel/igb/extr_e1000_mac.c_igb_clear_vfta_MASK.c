
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* write_vfta ) (struct e1000_hw*,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int ,int ) ;

void FUNC_1(struct e1000_hw *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = VAR_0; VAR_2--;)
  VAR_1->mac.ops.write_vfta(VAR_1, VAR_2, 0);
}
