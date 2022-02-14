
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {int valid_dump; int fw_ver; int drv_ver; int epoc; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct bnx2x*,TYPE_1__) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int) ;
 int VAR_4 ;
 int FUNC_5 (int ,int) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_6 () ;

void FUNC_7(struct bnx2x *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 if (!FUNC_2(VAR_6, VAR_5))
  return;


 FUNC_4(VAR_6, VAR_5.epoc, (u32)FUNC_6());

 VAR_7 = FUNC_5(VAR_0, 1);
 FUNC_4(VAR_6, VAR_5.drv_ver, VAR_7);

 FUNC_4(VAR_6, VAR_5.fw_ver, FUNC_1(VAR_6, VAR_4));


 VAR_8 = FUNC_3(VAR_6, VAR_5.valid_dump);

 if (VAR_8 & VAR_1)
  FUNC_0(VAR_2, "A valid On-Chip MFW dump found on 1st partition\n");

 if (VAR_8 & VAR_3)
  FUNC_0(VAR_2, "A valid On-Chip MFW dump found on 2nd partition\n");
}
