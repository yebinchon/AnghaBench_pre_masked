
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_4__ {int max_commands; } ;
struct TYPE_6__ {char* fw_version; TYPE_2__* host; TYPE_1__ product_info; } ;
typedef TYPE_3__ adapter_t ;
struct TYPE_5__ {int max_id; int max_channel; scalar_t__ max_lun; } ;


 int FUNC_0 (char*,char*,char*,int,int,int,int) ;

const char *
FUNC_1(struct Scsi_Host *VAR_0)
{
 static char VAR_1[512];
 adapter_t *VAR_2;

 VAR_2 = (adapter_t *)VAR_0->hostdata;

 FUNC_0 (VAR_1,
   "LSI Logic MegaRAID %s %d commands %d targs %d chans %d luns",
   VAR_2->fw_version, VAR_2->product_info.max_commands,
   VAR_2->host->max_id, VAR_2->host->max_channel,
   (u32)VAR_2->host->max_lun);
 return VAR_1;
}
