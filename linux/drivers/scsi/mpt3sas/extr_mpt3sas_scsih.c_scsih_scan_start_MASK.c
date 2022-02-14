
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {int start_scan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*) ;
 struct MPT3SAS_ADAPTER* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_4(struct Scsi_Host *VAR_2)
{
 struct MPT3SAS_ADAPTER *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;
 if (VAR_0 != -1 && VAR_0 != 0)
  FUNC_1(VAR_3, VAR_0);

 if (VAR_1 > 0)
  return;

 VAR_3->start_scan = 1;
 VAR_4 = FUNC_2(VAR_3);

 if (VAR_4 != 0)
  FUNC_0(VAR_3, "port enable: FAILED\n");
}
