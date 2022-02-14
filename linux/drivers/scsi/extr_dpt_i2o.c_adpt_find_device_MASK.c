
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct adpt_device {scalar_t__ tid; scalar_t__ scsi_lun; struct adpt_device* next_lun; } ;
struct TYPE_5__ {TYPE_1__* channel; } ;
typedef TYPE_2__ adpt_hba ;
struct TYPE_4__ {struct adpt_device** device; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct adpt_device* FUNC_0(adpt_hba* VAR_1, u32 VAR_2, u32 VAR_3, u64 VAR_4)
{
 struct adpt_device* VAR_5;

 if(VAR_2 < 0 || VAR_2 >= VAR_0)
  return ((void*)0);

 VAR_5 = VAR_1->channel[VAR_2].device[VAR_3];
 if(!VAR_5 || VAR_5->tid == 0) {
  return ((void*)0);
 }


 if(VAR_5->scsi_lun == VAR_4){
  return VAR_5;
 }


 for(VAR_5=VAR_5->next_lun ; VAR_5 ; VAR_5 = VAR_5->next_lun){
  if(VAR_5->scsi_lun == VAR_4){
   return VAR_5;
  }
 }
 return ((void*)0);
}
