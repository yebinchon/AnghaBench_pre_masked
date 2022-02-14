
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_system_bus_device {int core; } ;
struct ps3_storage_device {int bounce_buf; int sbd; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ps3_storage_device*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 struct ps3_storage_device* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ps3_system_bus_device *VAR_0)
{
 struct ps3_storage_device *VAR_1 = FUNC_6(&VAR_0->core);
 struct Scsi_Host *VAR_2 = FUNC_1(&VAR_1->sbd);

 FUNC_5(VAR_2);
 FUNC_3(VAR_1);
 FUNC_4(VAR_2);
 FUNC_2(&VAR_1->sbd, ((void*)0));
 FUNC_0(VAR_1->bounce_buf);
 return 0;
}
