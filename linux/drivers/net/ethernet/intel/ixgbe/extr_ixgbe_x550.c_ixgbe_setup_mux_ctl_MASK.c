
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_6, VAR_0);

 if (VAR_6->bus.lan_id) {
  VAR_7 &= ~(VAR_5 | VAR_3);
  VAR_7 |= VAR_4;
 }
 VAR_7 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_6, VAR_0, VAR_7);
 FUNC_1(VAR_6);
}
