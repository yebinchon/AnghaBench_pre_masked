
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ksz_hw {TYPE_2__* ksz_switch; scalar_t__ io; } ;
struct TYPE_4__ {TYPE_1__* port_cfg; } ;
struct TYPE_3__ {int member; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_3, int VAR_4, u8 VAR_5)
{
 u32 VAR_6;
 u8 VAR_7;

 FUNC_0(VAR_4, VAR_6);
 VAR_6 += VAR_0;

 VAR_7 = FUNC_1(VAR_3->io + VAR_6);
 VAR_7 &= ~VAR_2;
 VAR_7 |= (VAR_5 & VAR_1);
 FUNC_2(VAR_7, VAR_3->io + VAR_6);

 VAR_3->ksz_switch->port_cfg[VAR_4].member = VAR_5;
}
