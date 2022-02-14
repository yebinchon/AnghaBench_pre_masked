
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ipr_hostrcb64_config_element {scalar_t__ descriptor_id; scalar_t__ type_status; size_t link_rate; int * wwid; int res_path; } ;
struct ipr_hostrcb {int ioa_cfg; } ;
typedef int buffer ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ status; int desc; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (struct ipr_hostrcb*,char*,scalar_t__,int ,int ,int ,int ,...) ;
 int * VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static void FUNC_4(struct ipr_hostrcb *VAR_10,
    struct ipr_hostrcb64_config_element *VAR_11)
{
 int VAR_12, VAR_13;
 u8 VAR_14 = VAR_11->descriptor_id & VAR_0;
 u8 VAR_15 = VAR_11->type_status & VAR_5;
 u8 VAR_16 = VAR_11->type_status & VAR_4;
 char VAR_17[VAR_2];

 if (VAR_15 == VAR_3 || VAR_14 != VAR_1)
  return;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9); VAR_12++) {
  if (VAR_9[VAR_12].type != VAR_15)
   continue;

  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {
   if (VAR_8[VAR_13].status != VAR_16)
    continue;

   FUNC_3(VAR_10, "%s %s: Resource Path=%s, Link rate=%s, WWN=%08X%08X\n",
         VAR_8[VAR_13].desc, VAR_9[VAR_12].desc,
         FUNC_2(VAR_10->ioa_cfg,
     VAR_11->res_path, VAR_17, sizeof(VAR_17)),
     VAR_7[VAR_11->link_rate & VAR_6],
     FUNC_1(VAR_11->wwid[0]),
     FUNC_1(VAR_11->wwid[1]));
   return;
  }
 }
 FUNC_3(VAR_10, "Path element=%02X: Resource Path=%s, Link rate=%s "
       "WWN=%08X%08X\n", VAR_11->type_status,
       FUNC_2(VAR_10->ioa_cfg,
   VAR_11->res_path, VAR_17, sizeof(VAR_17)),
   VAR_7[VAR_11->link_rate & VAR_6],
   FUNC_1(VAR_11->wwid[0]), FUNC_1(VAR_11->wwid[1]));
}
