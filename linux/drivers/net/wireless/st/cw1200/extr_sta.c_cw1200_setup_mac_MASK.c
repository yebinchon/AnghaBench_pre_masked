
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_rcpi_rssi_threshold {int rssiRcpiMode; int rollingAverageCount; } ;
struct wsm_configuration {int dpdData_size; int dpdData; int * dot11StationId; } ;
struct cw1200_common {int cqm_use_rssi; TYPE_1__* sdd; int sdd_path; int pdev; int * mac_addr; } ;
struct TYPE_2__ {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__**,int ,int ) ;
 int FUNC_3 (struct cw1200_common*,struct wsm_configuration*) ;
 int FUNC_4 (struct cw1200_common*,struct wsm_rcpi_rssi_threshold*) ;

int FUNC_5(struct cw1200_common *VAR_4)
{
 int VAR_5 = 0;
 struct wsm_rcpi_rssi_threshold VAR_6 = {
  .rssiRcpiMode = VAR_2 |
  VAR_1 |
  VAR_0,
  .rollingAverageCount = 16,
 };

 struct wsm_configuration VAR_7 = {
  .dot11StationId = &VAR_4->mac_addr[0],
 };




 if (VAR_6.rssiRcpiMode & VAR_3)
  VAR_4->cqm_use_rssi = 1;

 if (!VAR_4->sdd) {
  VAR_5 = FUNC_2(&VAR_4->sdd, VAR_4->sdd_path, VAR_4->pdev);
  if (VAR_5) {
   FUNC_1("Can't load sdd file %s.\n", VAR_4->sdd_path);
   return VAR_5;
  }
  FUNC_0(VAR_4);
 }

 VAR_7.dpdData = VAR_4->sdd->data;
 VAR_7.dpdData_size = VAR_4->sdd->size;
 VAR_5 = FUNC_3(VAR_4, &VAR_7);
 if (VAR_5)
  return VAR_5;


 FUNC_4(VAR_4, &VAR_6);

 return 0;
}
