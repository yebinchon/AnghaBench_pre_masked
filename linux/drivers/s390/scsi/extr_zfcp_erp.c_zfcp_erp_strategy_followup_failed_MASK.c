
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {int type; int sdev; int port; int adapter; } ;






 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_erp_action *VAR_0)
{
 switch (VAR_0->type) {
 case 131:
  FUNC_0(VAR_0->adapter, 0, "ersff_1");
  break;
 case 128:
  FUNC_2(VAR_0->port, 0, "ersff_2");
  break;
 case 129:
  FUNC_3(VAR_0->port, 0, "ersff_3");
  break;
 case 130:
  FUNC_1(VAR_0->sdev, 0, "ersff_4", 0);
  break;
 }
}
