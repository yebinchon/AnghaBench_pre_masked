
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int max_cmds; TYPE_9__* pcidev; int active; } ;
typedef TYPE_1__ ips_ha_t ;
struct TYPE_11__ {int irq; } ;


 int FUNC_0 (int ,TYPE_9__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_1__** VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(int VAR_6)
{
 ips_ha_t *VAR_7;

 VAR_7 = VAR_4[VAR_6];

 FUNC_1("ips_init_phase2", 1);
 if (!VAR_7->active) {
  VAR_4[VAR_6] = ((void*)0);
  return -1;
 }


 if (FUNC_7(VAR_7->pcidev->irq, VAR_3, VAR_0, VAR_5, VAR_7)) {
  FUNC_0(VAR_1, VAR_7->pcidev,
      "Unable to install interrupt handler\n");
  return FUNC_3(VAR_7, VAR_6);
 }




 VAR_7->max_cmds = 1;
 if (!FUNC_4(VAR_7)) {
  FUNC_0(VAR_1, VAR_7->pcidev,
      "Unable to allocate a CCB\n");
  FUNC_2(VAR_7->pcidev->irq, VAR_7);
  return FUNC_3(VAR_7, VAR_6);
 }

 if (!FUNC_6(VAR_7)) {
  FUNC_0(VAR_1, VAR_7->pcidev,
      "Unable to initialize controller\n");
  FUNC_2(VAR_7->pcidev->irq, VAR_7);
  return FUNC_3(VAR_7, VAR_6);
 }

 FUNC_5(VAR_7, 1);


 if (!FUNC_4(VAR_7)) {
  FUNC_0(VAR_1, VAR_7->pcidev,
      "Unable to allocate CCBs\n");
  FUNC_2(VAR_7->pcidev->irq, VAR_7);
  return FUNC_3(VAR_7, VAR_6);
 }

 return VAR_2;
}
