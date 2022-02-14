
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct esp_lun_data* hostdata; } ;
struct esp_lun_data {scalar_t__ hold; int num_tagged; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_0, void *VAR_1)
{
 struct esp_lun_data *VAR_2 = VAR_0->hostdata;

 FUNC_0(VAR_2->num_tagged);
 VAR_2->hold = 0;
}
