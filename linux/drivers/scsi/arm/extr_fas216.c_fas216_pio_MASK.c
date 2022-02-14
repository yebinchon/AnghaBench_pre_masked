
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_pointer {scalar_t__ this_residual; } ;
typedef scalar_t__ fasdmadir_t ;
struct TYPE_7__ {struct scsi_pointer SCp; } ;
struct TYPE_8__ {TYPE_1__ scsi; } ;
typedef TYPE_2__ FAS216_Info ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (struct scsi_pointer*) ;
 int FUNC_4 (struct scsi_pointer*) ;
 int FUNC_5 (struct scsi_pointer*,int ) ;

__attribute__((used)) static void FUNC_6(FAS216_Info *VAR_2, fasdmadir_t VAR_3)
{
 struct scsi_pointer *VAR_4 = &VAR_2->scsi.SCp;

 FUNC_0(VAR_2);

 if (VAR_3 == VAR_0)
  FUNC_2(VAR_2, VAR_1, FUNC_3(VAR_4));
 else
  FUNC_5(VAR_4, FUNC_1(VAR_2, VAR_1));

 if (VAR_4->this_residual == 0)
  FUNC_4(VAR_4);
}
