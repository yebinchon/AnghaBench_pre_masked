
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int func; } ;
struct TYPE_4__ {int (* read ) (struct e1000_hw*,int ,int,int*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ bus; TYPE_2__ nvm; } ;
struct igb_adapter {int netdev; int flags; struct e1000_hw hw; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct e1000_hw*,int ,int,int*) ;

__attribute__((used)) static void FUNC_3(struct igb_adapter *VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 u16 VAR_8;

 VAR_7->nvm.ops.read(VAR_7, VAR_5, 1, &VAR_8);
 switch (VAR_7->bus.func) {
 case 131:
  if (VAR_8 & VAR_1) {
   VAR_6->flags |= VAR_0;
   FUNC_1(VAR_6->netdev,
    "MAS: Enabling Media Autosense for port %d\n",
    VAR_7->bus.func);
  }
  break;
 case 130:
  if (VAR_8 & VAR_2) {
   VAR_6->flags |= VAR_0;
   FUNC_1(VAR_6->netdev,
    "MAS: Enabling Media Autosense for port %d\n",
    VAR_7->bus.func);
  }
  break;
 case 129:
  if (VAR_8 & VAR_3) {
   VAR_6->flags |= VAR_0;
   FUNC_1(VAR_6->netdev,
    "MAS: Enabling Media Autosense for port %d\n",
    VAR_7->bus.func);
  }
  break;
 case 128:
  if (VAR_8 & VAR_4) {
   VAR_6->flags |= VAR_0;
   FUNC_1(VAR_6->netdev,
    "MAS: Enabling Media Autosense for port %d\n",
    VAR_7->bus.func);
  }
  break;
 default:

  FUNC_0(VAR_6->netdev,
   "MAS: Invalid port configuration, returning\n");
  break;
 }
}
