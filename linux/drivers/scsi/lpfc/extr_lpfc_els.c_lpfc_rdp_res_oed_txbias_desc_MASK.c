
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct lpfc_hba {int sfp_alarm; int sfp_warning; } ;
struct TYPE_2__ {void* function_flags; void* lo_warning; void* hi_warning; void* lo_alarm; void* hi_alarm; } ;
struct fc_rdp_oed_sfp_desc {void* length; TYPE_1__ oed_info; void* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_hba *VAR_13,
        struct fc_rdp_oed_sfp_desc *VAR_14,
        uint8_t *VAR_15)
{
 uint32_t VAR_16 = 0;

 VAR_14->tag = FUNC_0(VAR_2);

 VAR_14->oed_info.hi_alarm = VAR_15[VAR_9];
 VAR_14->oed_info.lo_alarm = VAR_15[VAR_11];
 VAR_14->oed_info.hi_warning = VAR_15[VAR_10];
 VAR_14->oed_info.lo_warning = VAR_15[VAR_12];

 if (VAR_13->sfp_alarm & VAR_0)
  VAR_16 |= VAR_5;
 if (VAR_13->sfp_alarm & VAR_1)
  VAR_16 |= VAR_7;
 if (VAR_13->sfp_warning & VAR_0)
  VAR_16 |= VAR_6;
 if (VAR_13->sfp_warning & VAR_1)
  VAR_16 |= VAR_8;

 VAR_16 |= ((0xf & VAR_3) << VAR_4);
 VAR_14->oed_info.function_flags = FUNC_0(VAR_16);
 VAR_14->length = FUNC_0(sizeof(VAR_14->oed_info));
 return sizeof(struct fc_rdp_oed_sfp_desc);
}
