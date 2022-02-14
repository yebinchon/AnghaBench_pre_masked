
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct MPT3SAS_ADAPTER {scalar_t__ remove_host; scalar_t__ is_driver_loading; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,...) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 struct MPT3SAS_ADAPTER* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct scsi_cmnd *VAR_3)
{
 struct MPT3SAS_ADAPTER *VAR_4 = FUNC_3(VAR_3->device->host);
 int VAR_5, VAR_6;

 FUNC_0(VAR_4, "attempting host reset! scmd(%p)\n", VAR_3);
 FUNC_2(VAR_3);

 if (VAR_4->is_driver_loading || VAR_4->remove_host) {
  FUNC_0(VAR_4, "Blocking the host reset\n");
  VAR_5 = VAR_0;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 VAR_5 = (VAR_6 < 0) ? VAR_0 : VAR_2;
out:
 FUNC_0(VAR_4, "host reset: %s scmd(%p)\n",
   VAR_5 == VAR_2 ? "SUCCESS" : "FAILED", VAR_3);

 return VAR_5;
}
