
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * scsi_cmd; } ;
typedef TYPE_1__ ips_scb_t ;
struct TYPE_8__ {int pcidev; } ;
typedef TYPE_2__ ips_ha_t ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(ips_ha_t * VAR_1, ips_scb_t * VAR_2)
{
 FUNC_1("ipsintr_done", 2);

 if (!VAR_2) {
  FUNC_0(VAR_0, VAR_1->pcidev,
      "Spurious interrupt; scb NULL.\n");

  return;
 }

 if (VAR_2->scsi_cmd == ((void*)0)) {

  FUNC_0(VAR_0, VAR_1->pcidev,
      "Spurious interrupt; scsi_cmd not set.\n");

  return;
 }

 FUNC_2(VAR_1, VAR_2);
}
