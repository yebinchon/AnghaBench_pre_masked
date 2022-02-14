
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_2__ {int date; int revision; int serial_number; int model_number; int vendor_name; } ;
struct fc_rdp_opd_sfp_desc {void* length; TYPE_1__ opd_info; void* tag; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct fc_rdp_opd_sfp_desc *VAR_6,
        uint8_t *VAR_7, struct lpfc_vport *VAR_8)
{
 VAR_6->tag = FUNC_0(VAR_0);
 FUNC_1(VAR_6->opd_info.vendor_name, &VAR_7[VAR_2], 16);
 FUNC_1(VAR_6->opd_info.model_number, &VAR_7[VAR_3], 16);
 FUNC_1(VAR_6->opd_info.serial_number, &VAR_7[VAR_5], 16);
 FUNC_1(VAR_6->opd_info.revision, &VAR_7[VAR_4], 4);
 FUNC_1(VAR_6->opd_info.date, &VAR_7[VAR_1], 8);
 VAR_6->length = FUNC_0(sizeof(VAR_6->opd_info));
 return sizeof(struct fc_rdp_opd_sfp_desc);
}
