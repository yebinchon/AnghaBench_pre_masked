
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sas_ha_struct {scalar_t__ lldd_ha; } ;
struct mvs_prv_info {size_t n_host; struct mvs_info** mvi; } ;
struct mvs_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* tune_interrupt ) (struct mvs_info*,unsigned int) ;} ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 unsigned int VAR_2 ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char const*,char*,unsigned int*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (struct mvs_info*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_3,
   struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7 = 0;
 struct mvs_info *VAR_8 = ((void*)0);
 struct Scsi_Host *VAR_9 = FUNC_1(VAR_3);
 struct sas_ha_struct *VAR_10 = FUNC_0(VAR_9);
 u8 VAR_11, VAR_12;
 if (VAR_5 == ((void*)0))
  return VAR_6;

 if (FUNC_3(VAR_5, "%u", &VAR_7) != 1)
  return -VAR_0;

 if (VAR_7 >= 0x10000) {
  FUNC_2("interrupt coalescing timer %d us is"
   "too long\n", VAR_7);
  return FUNC_4(VAR_5);
 }

 VAR_2 = VAR_7;

 VAR_12 = ((struct mvs_prv_info *)VAR_10->lldd_ha)->n_host;
 VAR_8 = ((struct mvs_prv_info *)VAR_10->lldd_ha)->mvi[0];

 if (FUNC_6(!VAR_8))
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_8 = ((struct mvs_prv_info *)VAR_10->lldd_ha)->mvi[VAR_11];
  if (VAR_1->tune_interrupt)
   VAR_1->tune_interrupt(VAR_8,
    VAR_2);
 }
 FUNC_2("set interrupt coalescing time to %d us\n",
  VAR_2);
 return FUNC_4(VAR_5);
}
