
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esas2r_adapter {TYPE_1__* pcid; int flags2; int fw_coredump_buff; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*,int ,scalar_t__,int ) ;
 int FUNC_3 (struct esas2r_adapter*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct esas2r_adapter *VAR_9)
{
 if (!FUNC_1(VAR_9))
  return;






 if (FUNC_6(VAR_0, &VAR_9->flags2) &&
     !FUNC_6(VAR_1, &VAR_9->flags2)) {
  FUNC_2(VAR_9,
          VAR_9->fw_coredump_buff,
          VAR_8 + 0x80000,
          VAR_2);

  FUNC_5(VAR_1, &VAR_9->flags2);
 }

 FUNC_0(VAR_0, &VAR_9->flags2);


 if (VAR_9->pcid->revision == VAR_7)
  FUNC_3(VAR_9, VAR_6,
         VAR_4);
 else
  FUNC_3(VAR_9, VAR_5,
         VAR_3);



 FUNC_4(10);
}
