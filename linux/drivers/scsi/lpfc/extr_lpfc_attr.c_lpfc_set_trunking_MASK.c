
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_9__ {int set_trunk_mode; } ;
struct TYPE_10__ {TYPE_1__ un; } ;
struct TYPE_11__ {TYPE_2__ mqe; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


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
 int FUNC_0 (int ,int *,unsigned long) ;
 int FUNC_1 (char*,int ,unsigned long*) ;
 int VAR_10 ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_4__*,int ,int ,int,int ) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_11, char *VAR_12)
{
 LPFC_MBOXQ_t *VAR_13 = ((void*)0);
 unsigned long VAR_14 = 0;
 char *VAR_15 = 0;
 int VAR_16 = 0;

 if (!FUNC_8("enable", VAR_12,
     FUNC_7("enable"))) {
  VAR_15 = VAR_12 + FUNC_7("enable") + 1;
  VAR_16 = FUNC_1(VAR_15, 0, &VAR_14);
  if (VAR_16)
   return VAR_16;
 } else if (!FUNC_8("disable", VAR_12,
     FUNC_7("disable"))) {
  VAR_14 = 0;
 } else {
  return -VAR_0;
 }

 switch (VAR_14) {
 case 0:
  VAR_14 = 0x0;
  break;
 case 2:
  VAR_14 = 0x1;
  break;
 case 4:
  VAR_14 = 0x2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_11, VAR_3, VAR_4,
   "0070 Set trunk mode with val %ld ", VAR_14);

 VAR_13 = FUNC_5(VAR_11->mbox_mem_pool, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_3(VAR_11, VAR_13, VAR_6,
    VAR_5,
    12, VAR_7);

 FUNC_0(VAR_10,
        &VAR_13->u.mqe.un.set_trunk_mode,
        VAR_14);
 VAR_16 = FUNC_4(VAR_11, VAR_13, VAR_8);
 if (VAR_16)
  FUNC_2(VAR_11, VAR_3, VAR_4,
    "0071 Set trunk mode failed with status: %d",
    VAR_16);
 if (VAR_16 != VAR_9)
  FUNC_6(VAR_13, VAR_11->mbox_mem_pool);

 return 0;
}
