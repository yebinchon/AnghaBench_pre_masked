
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_bus {int fw_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct qtnf_bus*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct qtnf_bus*,char*,int ) ;
 int FUNC_3 (struct qtnf_bus*,int ) ;

int FUNC_4(struct qtnf_bus *VAR_5)
{
 int VAR_6;

 VAR_5->fw_state = VAR_1;
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  FUNC_0("failed to attach core\n");
 } else {
  FUNC_3(VAR_5, VAR_0);
  FUNC_2(VAR_5, "mps", VAR_2);
  FUNC_2(VAR_5, "msi_enabled", VAR_3);
  FUNC_2(VAR_5, "shm_stats", VAR_4);
 }

 return VAR_6;
}
