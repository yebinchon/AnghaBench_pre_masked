
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int event_thres; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef size_t ssize_t ;


 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static inline ssize_t FUNC_3(struct device *VAR_0,
   struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_0);
 struct sas_ha_struct *VAR_5 = FUNC_0(VAR_4);

 VAR_5->event_thres = FUNC_2(VAR_2, ((void*)0), 10);


 if (VAR_5->event_thres < 32)
  VAR_5->event_thres = 32;

 return VAR_3;
}
