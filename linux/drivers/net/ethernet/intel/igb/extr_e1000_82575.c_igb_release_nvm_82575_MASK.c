
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* release_swfw_sync ) (struct e1000_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int ) ;

__attribute__((used)) static void FUNC_2(struct e1000_hw *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_1->mac.ops.release_swfw_sync(VAR_1, VAR_0);
}
