
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int v2p_mailbox; } ;
struct TYPE_4__ {TYPE_1__ vf; } ;
struct e1000_hw {TYPE_2__ dev_spec; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct e1000_hw *VAR_1)
{
 u32 VAR_2 = FUNC_1(FUNC_0(0));

 VAR_2 |= VAR_1->dev_spec.vf.v2p_mailbox;
 VAR_1->dev_spec.vf.v2p_mailbox |= VAR_2 & VAR_0;

 return VAR_2;
}
