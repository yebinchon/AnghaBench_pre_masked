
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* addr; } ;
struct pch_gbe_hw {TYPE_2__* reg; TYPE_1__ mac; } ;
struct pch_gbe_adapter {int netdev; } ;
struct TYPE_4__ {int PAUSE_PKT5; int PAUSE_PKT4; int PAUSE_PKT3; int PAUSE_PKT2; int PAUSE_PKT1; int PAUSE_REQ; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ) ;
 struct pch_gbe_adapter* FUNC_3 (struct pch_gbe_hw*) ;

__attribute__((used)) static void FUNC_4(struct pch_gbe_hw *VAR_5)
{
 struct pch_gbe_adapter *VAR_6 = FUNC_3(VAR_5);
 unsigned long VAR_7, VAR_8;


 VAR_7 = VAR_5->mac.addr[1];
 VAR_7 = (VAR_7 << 8) | VAR_5->mac.addr[0];
 VAR_7 = VAR_1 | (VAR_7 << 16);

 VAR_8 = VAR_5->mac.addr[5];
 VAR_8 = (VAR_8 << 8) | VAR_5->mac.addr[4];
 VAR_8 = (VAR_8 << 8) | VAR_5->mac.addr[3];
 VAR_8 = (VAR_8 << 8) | VAR_5->mac.addr[2];

 FUNC_1(VAR_0, &VAR_5->reg->PAUSE_PKT1);
 FUNC_1(VAR_7, &VAR_5->reg->PAUSE_PKT2);
 FUNC_1(VAR_8, &VAR_5->reg->PAUSE_PKT3);
 FUNC_1(VAR_2, &VAR_5->reg->PAUSE_PKT4);
 FUNC_1(VAR_3, &VAR_5->reg->PAUSE_PKT5);


 FUNC_1(VAR_4, &VAR_5->reg->PAUSE_REQ);

 FUNC_2(VAR_6->netdev,
     "PAUSE_PKT1-5 reg : 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x\n",
     FUNC_0(&VAR_5->reg->PAUSE_PKT1),
     FUNC_0(&VAR_5->reg->PAUSE_PKT2),
     FUNC_0(&VAR_5->reg->PAUSE_PKT3),
     FUNC_0(&VAR_5->reg->PAUSE_PKT4),
     FUNC_0(&VAR_5->reg->PAUSE_PKT5));

 return;
}
