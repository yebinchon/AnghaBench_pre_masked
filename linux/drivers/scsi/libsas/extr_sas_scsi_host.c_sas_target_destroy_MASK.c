
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {struct domain_device* hostdata; } ;
struct domain_device {int dummy; } ;


 int FUNC_0 (struct domain_device*) ;

void FUNC_1(struct scsi_target *VAR_0)
{
 struct domain_device *VAR_1 = VAR_0->hostdata;

 if (!VAR_1)
  return;

 VAR_0->hostdata = ((void*)0);
 FUNC_0(VAR_1);
}
