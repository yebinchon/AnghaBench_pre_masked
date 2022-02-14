
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release_swfw_sync ) (struct e1000_hw*,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ func; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_1__ bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct e1000_hw*,int ) ;

__attribute__((used)) static void FUNC_1(struct e1000_hw *VAR_7)
{
 u16 VAR_8 = VAR_3;

 if (VAR_7->bus.func == VAR_0)
  VAR_8 = VAR_4;
 else if (VAR_7->bus.func == VAR_1)
  VAR_8 = VAR_5;
 else if (VAR_7->bus.func == VAR_2)
  VAR_8 = VAR_6;

 VAR_7->mac.ops.release_swfw_sync(VAR_7, VAR_8);
}
