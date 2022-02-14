
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ imm_struct ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_1, char *VAR_2, int VAR_3)
{
 imm_struct *VAR_4 = FUNC_0(VAR_1);

 if ((VAR_3 > 5) && (FUNC_3(VAR_2, "mode=", 5) == 0)) {
  VAR_4->mode = FUNC_2(VAR_2 + 5, ((void*)0), 0);
  return VAR_3;
 }
 FUNC_1("imm /proc: invalid variable\n");
 return -VAR_0;
}
