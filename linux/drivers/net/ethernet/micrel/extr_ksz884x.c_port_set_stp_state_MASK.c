
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ksz_hw {TYPE_2__* ksz_switch; } ;
struct TYPE_4__ {TYPE_1__* port_cfg; } ;
struct TYPE_3__ {int stp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (struct ksz_hw*,int,int ,int*) ;
 int FUNC_1 (struct ksz_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_4, int VAR_5, int VAR_6)
{
 u16 VAR_7;

 FUNC_0(VAR_4, VAR_5, VAR_0, &VAR_7);
 switch (VAR_6) {
 case 132:
  VAR_7 &= ~(VAR_3 | VAR_2);
  VAR_7 |= VAR_1;
  break;
 case 129:




  VAR_7 &= ~VAR_3;
  VAR_7 |= VAR_2;
  VAR_7 |= VAR_1;
  break;
 case 130:
  VAR_7 &= ~VAR_3;
  VAR_7 |= VAR_2;
  VAR_7 &= ~VAR_1;
  break;
 case 131:
  VAR_7 |= (VAR_3 | VAR_2);
  VAR_7 &= ~VAR_1;
  break;
 case 133:




  VAR_7 &= ~(VAR_3 | VAR_2);
  VAR_7 |= VAR_1;
  break;
 case 128:
  VAR_7 |= (VAR_3 | VAR_2);
  VAR_7 |= VAR_1;
  break;
 }
 FUNC_1(VAR_4, VAR_5, VAR_0, VAR_7);
 VAR_4->ksz_switch->port_cfg[VAR_5].stp_state = VAR_6;
}
