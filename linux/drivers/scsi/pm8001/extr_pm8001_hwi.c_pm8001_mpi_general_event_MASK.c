
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;
struct general_event_resp {int * inb_IOMB_payload; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,...) ;

int FUNC_3(struct pm8001_hba_info *VAR_1 , void *VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 struct general_event_resp *VAR_5 =
  (struct general_event_resp *)(VAR_2 + 4);
 VAR_3 = FUNC_1(VAR_5->status);
 FUNC_0(VAR_1,
  FUNC_2(" status = 0x%x\n", VAR_3));
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_1,
   FUNC_2("inb_IOMB_payload[0x%x] 0x%x,\n", VAR_4,
   VAR_5->inb_IOMB_payload[VAR_4]));
 return 0;
}
