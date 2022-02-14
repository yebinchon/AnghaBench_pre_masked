
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_hba {int fc_linkspeed; int lmt; scalar_t__ cfg_link_speed; } ;
struct TYPE_3__ {void* capabilities; void* speed; } ;
struct TYPE_4__ {TYPE_1__ port_speed; } ;
struct fc_rdp_port_speed_desc {void* length; TYPE_2__ info; void* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct fc_rdp_port_speed_desc *VAR_23, struct lpfc_hba *VAR_24)
{
 uint16_t VAR_25 = 0;
 uint16_t VAR_26;

 VAR_23->tag = FUNC_1(VAR_12);

 switch (VAR_24->fc_linkspeed) {
 case 133:
  VAR_26 = VAR_16;
  break;
 case 132:
  VAR_26 = VAR_17;
  break;
 case 130:
  VAR_26 = VAR_19;
  break;
 case 128:
  VAR_26 = VAR_21;
  break;
 case 135:
  VAR_26 = VAR_13;
  break;
 case 134:
  VAR_26 = VAR_15;
  break;
 case 131:
  VAR_26 = VAR_18;
  break;
 case 129:
  VAR_26 = VAR_20;
  break;
 default:
  VAR_26 = VAR_22;
  break;
 }

 VAR_23->info.port_speed.speed = FUNC_0(VAR_26);

 if (VAR_24->lmt & VAR_1)
  VAR_25 |= VAR_14;
 if (VAR_24->lmt & VAR_7)
  VAR_25 |= VAR_20;
 if (VAR_24->lmt & VAR_5)
  VAR_25 |= VAR_18;
 if (VAR_24->lmt & VAR_2)
  VAR_25 |= VAR_15;
 if (VAR_24->lmt & VAR_0)
  VAR_25 |= VAR_13;
 if (VAR_24->lmt & VAR_8)
  VAR_25 |= VAR_21;
 if (VAR_24->lmt & VAR_6)
  VAR_25 |= VAR_19;
 if (VAR_24->lmt & VAR_4)
  VAR_25 |= VAR_17;
 if (VAR_24->lmt & VAR_3)
  VAR_25 |= VAR_16;

 if (VAR_25 == 0)
  VAR_25 = VAR_10;
 if (VAR_24->cfg_link_speed != VAR_9)
  VAR_25 |= VAR_11;

 VAR_23->info.port_speed.capabilities = FUNC_0(VAR_25);
 VAR_23->length = FUNC_1(sizeof(VAR_23->info));
 return sizeof(struct fc_rdp_port_speed_desc);
}
