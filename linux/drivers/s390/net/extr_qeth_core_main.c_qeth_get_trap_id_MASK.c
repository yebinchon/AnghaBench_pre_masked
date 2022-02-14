
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysinfo_3_2_2 {TYPE_2__* vm; int lpar_number; } ;
struct sysinfo_2_2_2 {TYPE_2__* vm; int lpar_number; } ;
struct qeth_trap_id {int vmname; int lparnr; int devno; int ssid; int chpid; } ;
struct TYPE_3__ {int chpid; } ;
struct qeth_card {TYPE_1__ info; } ;
struct ccw_dev_id {int devno; int ssid; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct ccw_dev_id*) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct sysinfo_3_2_2*,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct qeth_card *VAR_1, struct qeth_trap_id *VAR_2)
{
 unsigned long VAR_3 = FUNC_4(VAR_0);
 struct sysinfo_2_2_2 *VAR_4 = (struct sysinfo_2_2_2 *)VAR_3;
 struct sysinfo_3_2_2 *VAR_5 = (struct sysinfo_3_2_2 *)VAR_3;
 struct ccw_dev_id VAR_6;
 int VAR_7;

 VAR_2->chpid = VAR_1->info.chpid;
 FUNC_2(FUNC_0(VAR_1), &VAR_6);
 VAR_2->ssid = VAR_6.ssid;
 VAR_2->devno = VAR_6.devno;
 if (!VAR_3)
  return;
 VAR_7 = FUNC_6(((void*)0), 0, 0, 0);
 if ((VAR_7 >= 2) && (FUNC_6(VAR_4, 2, 2, 2) == 0))
  VAR_2->lparnr = VAR_4->lpar_number;
 if ((VAR_7 >= 3) && (FUNC_6(VAR_5, 3, 2, 2) == 0)) {
  FUNC_1(VAR_5->vm[0].name, sizeof(VAR_5->vm[0].name));
  FUNC_5(VAR_2->vmname, VAR_5->vm[0].name, sizeof(VAR_2->vmname));
 }
 FUNC_3(VAR_3);
 return;
}
