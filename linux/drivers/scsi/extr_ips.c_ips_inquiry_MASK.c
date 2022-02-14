
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int scsi_cmd; } ;
typedef TYPE_1__ ips_scb_t ;
typedef int ips_ha_t ;
typedef int inquiry ;
struct TYPE_7__ {int AdditionalLength; int* Flags; int ProductRevisionLevel; int ProductId; int VendorId; int ResponseDataFormat; int Version; int DeviceTypeQualifier; int DeviceType; } ;
typedef TYPE_2__ IPS_SCSI_INQ_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(ips_ha_t * VAR_8, ips_scb_t * VAR_9)
{
 IPS_SCSI_INQ_DATA VAR_10;

 FUNC_0("ips_inquiry", 1);

 FUNC_2(&VAR_10, 0, sizeof (IPS_SCSI_INQ_DATA));

 VAR_10.DeviceType = VAR_6;
 VAR_10.DeviceTypeQualifier = VAR_2;
 VAR_10.Version = VAR_4;
 VAR_10.ResponseDataFormat = VAR_3;
 VAR_10.AdditionalLength = 31;
 VAR_10.Flags[0] = VAR_0;
 VAR_10.Flags[1] =
     VAR_7 | VAR_5 | VAR_1;
 FUNC_3(VAR_10.VendorId, "IBM     ", 8);
 FUNC_3(VAR_10.ProductId, "SERVERAID       ", 16);
 FUNC_3(VAR_10.ProductRevisionLevel, "1.00", 4);

 FUNC_1(VAR_9->scsi_cmd, &VAR_10, sizeof (VAR_10));

 return (1);
}
