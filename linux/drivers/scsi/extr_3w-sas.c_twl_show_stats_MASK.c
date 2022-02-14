
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_4__ {int posted_request_count; int max_posted_request_count; int sgl_entries; int max_sgl_entries; int sector_count; int max_sector_count; int num_resets; int aen_count; TYPE_1__* host; } ;
struct TYPE_3__ {int host_lock; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 char* VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_2);
 TW_Device_Extension *VAR_6 = (TW_Device_Extension *)VAR_5->hostdata;
 unsigned long VAR_7 = 0;
 ssize_t VAR_8;

 FUNC_2(VAR_6->host->host_lock, VAR_7);
 VAR_8 = FUNC_1(VAR_4, VAR_0, "3w-sas Driver version: %s\n"
         "Current commands posted:   %4d\n"
         "Max commands posted:       %4d\n"
         "Last sgl length:           %4d\n"
         "Max sgl length:            %4d\n"
         "Last sector count:         %4d\n"
         "Max sector count:          %4d\n"
         "SCSI Host Resets:          %4d\n"
         "AEN's:                     %4d\n",
         VAR_1,
         VAR_6->posted_request_count,
         VAR_6->max_posted_request_count,
         VAR_6->sgl_entries,
         VAR_6->max_sgl_entries,
         VAR_6->sector_count,
         VAR_6->max_sector_count,
         VAR_6->num_resets,
         VAR_6->aen_count);
 FUNC_3(VAR_6->host->host_lock, VAR_7);
 return VAR_8;
}
