
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ipr_hostrcb64_fabric_desc {scalar_t__ path_state; int res_path; } ;
struct ipr_hostrcb {int ioa_cfg; } ;
typedef int buffer ;
struct TYPE_4__ {scalar_t__ active; scalar_t__ state; int desc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (struct ipr_hostrcb*,char*,int ,int ,int ) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_4(struct ipr_hostrcb *VAR_5,
      struct ipr_hostrcb64_fabric_desc *VAR_6)
{
 int VAR_7, VAR_8;
 u8 VAR_9 = VAR_6->path_state;
 u8 VAR_10 = VAR_9 & VAR_1;
 u8 VAR_11 = VAR_9 & VAR_2;
 char VAR_12[VAR_0];

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  if (VAR_3[VAR_7].active != VAR_10)
   continue;

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
   if (VAR_4[VAR_8].state != VAR_11)
    continue;

   FUNC_3(VAR_5, "%s %s: Resource Path=%s\n",
         VAR_3[VAR_7].desc, VAR_4[VAR_8].desc,
         FUNC_2(VAR_5->ioa_cfg,
      VAR_6->res_path,
      VAR_12, sizeof(VAR_12)));
   return;
  }
 }

 FUNC_1("Path state=%02X Resource Path=%s\n", VAR_9,
  FUNC_2(VAR_5->ioa_cfg, VAR_6->res_path,
        VAR_12, sizeof(VAR_12)));
}
