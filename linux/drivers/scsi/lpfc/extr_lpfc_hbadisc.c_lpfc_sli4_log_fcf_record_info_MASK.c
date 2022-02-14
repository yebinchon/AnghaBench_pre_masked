
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lpfc_hba {int dummy; } ;
struct fcf_record {int fip_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct fcf_record*) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_29,
         struct fcf_record *VAR_30,
         uint16_t VAR_31,
         uint16_t VAR_32)
{
 FUNC_1(VAR_29, VAR_0, VAR_1,
   "2764 READ_FCF_RECORD:\n"
   "\tFCF_Index     : x%x\n"
   "\tFCF_Avail     : x%x\n"
   "\tFCF_Valid     : x%x\n"
   "\tFCF_SOL       : x%x\n"
   "\tFIP_Priority  : x%x\n"
   "\tMAC_Provider  : x%x\n"
   "\tLowest VLANID : x%x\n"
   "\tFCF_MAC Addr  : x%x:%x:%x:%x:%x:%x\n"
   "\tFabric_Name   : x%x:%x:%x:%x:%x:%x:%x:%x\n"
   "\tSwitch_Name   : x%x:%x:%x:%x:%x:%x:%x:%x\n"
   "\tNext_FCF_Index: x%x\n",
   FUNC_0(VAR_11, VAR_30),
   FUNC_0(VAR_10, VAR_30),
   FUNC_0(VAR_13, VAR_30),
   FUNC_0(VAR_12, VAR_30),
   VAR_30->fip_priority,
   FUNC_0(VAR_20, VAR_30),
   VAR_31,
   FUNC_0(VAR_14, VAR_30),
   FUNC_0(VAR_15, VAR_30),
   FUNC_0(VAR_16, VAR_30),
   FUNC_0(VAR_17, VAR_30),
   FUNC_0(VAR_18, VAR_30),
   FUNC_0(VAR_19, VAR_30),
   FUNC_0(VAR_2, VAR_30),
   FUNC_0(VAR_3, VAR_30),
   FUNC_0(VAR_4, VAR_30),
   FUNC_0(VAR_5, VAR_30),
   FUNC_0(VAR_6, VAR_30),
   FUNC_0(VAR_7, VAR_30),
   FUNC_0(VAR_8, VAR_30),
   FUNC_0(VAR_9, VAR_30),
   FUNC_0(VAR_21, VAR_30),
   FUNC_0(VAR_22, VAR_30),
   FUNC_0(VAR_23, VAR_30),
   FUNC_0(VAR_24, VAR_30),
   FUNC_0(VAR_25, VAR_30),
   FUNC_0(VAR_26, VAR_30),
   FUNC_0(VAR_27, VAR_30),
   FUNC_0(VAR_28, VAR_30),
   VAR_32);
}
