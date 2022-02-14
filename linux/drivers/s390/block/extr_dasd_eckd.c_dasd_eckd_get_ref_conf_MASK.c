
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {TYPE_1__* path; } ;
struct dasd_cuir_message {scalar_t__ record_selector; } ;
struct TYPE_4__ {scalar_t__ record_selector; } ;
struct dasd_conf_data {TYPE_2__ gneq; } ;
typedef int __u8 ;
struct TYPE_3__ {struct dasd_conf_data* conf_data; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static struct dasd_conf_data *FUNC_1(struct dasd_device *VAR_0,
           __u8 VAR_1,
           struct dasd_cuir_message *VAR_2)
{
 struct dasd_conf_data *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2->record_selector == 0)
  goto out;
 for (VAR_4 = 0x80, VAR_5 = 0; VAR_4; VAR_4 >>= 1, VAR_5++) {
  VAR_3 = VAR_0->path[VAR_5].conf_data;
  if (VAR_3->gneq.record_selector ==
      VAR_2->record_selector)
   return VAR_3;
 }
out:
 return VAR_0->path[FUNC_0(VAR_1)].conf_data;
}
