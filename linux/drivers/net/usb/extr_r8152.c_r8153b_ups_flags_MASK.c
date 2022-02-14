
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int speed_duplex; scalar_t__ ctap_short_off; scalar_t__ _250m_ckdiv; scalar_t__ eee_plloff_giga; scalar_t__ eee_plloff_100; scalar_t__ _10m_ckdiv; scalar_t__ eee_cmod_lv; scalar_t__ eee_ckdiv; scalar_t__ flow_control; scalar_t__ eee; scalar_t__ aldps; scalar_t__ green; } ;
struct r8152 {TYPE_1__ ups_info; } ;






 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct r8152*,int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct r8152 *VAR_13)
{
 u32 VAR_14 = 0;

 if (VAR_13->ups_info.green)
  VAR_14 |= VAR_11;

 if (VAR_13->ups_info.aldps)
  VAR_14 |= VAR_7;

 if (VAR_13->ups_info.eee)
  VAR_14 |= VAR_8;

 if (VAR_13->ups_info.flow_control)
  VAR_14 |= VAR_10;

 if (VAR_13->ups_info.eee_ckdiv)
  VAR_14 |= VAR_9;

 if (VAR_13->ups_info.eee_cmod_lv)
  VAR_14 |= VAR_3;

 if (VAR_13->ups_info._10m_ckdiv)
  VAR_14 |= VAR_6;

 if (VAR_13->ups_info.eee_plloff_100)
  VAR_14 |= VAR_4;

 if (VAR_13->ups_info.eee_plloff_giga)
  VAR_14 |= VAR_5;

 if (VAR_13->ups_info._250m_ckdiv)
  VAR_14 |= VAR_1;

 if (VAR_13->ups_info.ctap_short_off)
  VAR_14 |= VAR_2;

 switch (VAR_13->ups_info.speed_duplex) {
 case 128:
  VAR_14 |= FUNC_1(1);
  break;
 case 129:
  VAR_14 |= FUNC_1(2);
  break;
 case 130:
  VAR_14 |= FUNC_1(3);
  break;
 case 131:
  VAR_14 |= FUNC_1(4);
  break;
 case 132:
  VAR_14 |= FUNC_1(5);
  break;
 case 133:
  VAR_14 |= FUNC_1(6);
  break;
 case 134:
  VAR_14 |= FUNC_1(7);
  break;
 case 135:
  VAR_14 |= FUNC_1(8);
  break;
 case 136:
  VAR_14 |= FUNC_1(9);
  break;
 default:
  break;
 }

 FUNC_0(VAR_13, VAR_0, VAR_12, VAR_14);
}
