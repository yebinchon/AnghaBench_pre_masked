
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int flags; } ;
struct TYPE_6__ {int * eth_regs; } ;
typedef TYPE_1__ pegasus_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*,int ,struct net_device*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,struct net_device*,char*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 pegasus_t *VAR_8 = FUNC_1(VAR_7);

 if (VAR_7->flags & VAR_3) {
  VAR_8->eth_regs[VAR_1] |= VAR_5;
  FUNC_3(VAR_8, VAR_6, VAR_7, "Promiscuous mode enabled\n");
 } else if (!FUNC_0(VAR_7) || (VAR_7->flags & VAR_2)) {
  VAR_8->eth_regs[VAR_0] |= VAR_4;
  VAR_8->eth_regs[VAR_1] &= ~VAR_5;
  FUNC_2(VAR_8, VAR_6, VAR_7, "set allmulti\n");
 } else {
  VAR_8->eth_regs[VAR_0] &= ~VAR_4;
  VAR_8->eth_regs[VAR_1] &= ~VAR_5;
 }
 FUNC_4(VAR_8);
}
