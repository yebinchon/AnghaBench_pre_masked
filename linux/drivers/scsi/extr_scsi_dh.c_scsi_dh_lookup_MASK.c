
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int dummy; } ;


 struct scsi_device_handler* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static struct scsi_device_handler *FUNC_3(const char *VAR_0)
{
 struct scsi_device_handler *VAR_1;

 if (!VAR_0 || FUNC_2(VAR_0) == 0)
  return ((void*)0);

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) {
  FUNC_1("scsi_dh_%s", VAR_0);
  VAR_1 = FUNC_0(VAR_0);
 }

 return VAR_1;
}
