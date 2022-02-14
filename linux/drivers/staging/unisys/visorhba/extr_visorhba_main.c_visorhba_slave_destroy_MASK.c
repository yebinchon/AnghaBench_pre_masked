
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visordisk_info {int dummy; } ;
struct scsi_device {struct visordisk_info* hostdata; } ;


 int FUNC_0 (struct visordisk_info*) ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_0)
{



 struct visordisk_info *VAR_1;

 VAR_1 = VAR_0->hostdata;
 VAR_0->hostdata = ((void*)0);
 FUNC_0(VAR_1);
}
