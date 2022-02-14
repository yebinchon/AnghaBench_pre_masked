
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int* cmnd; TYPE_1__* device; } ;
struct TYPE_5__ {int this_id; int boot_ldrv; scalar_t__ read_ldidmap; scalar_t__ support_random_del; scalar_t__ boot_ldrv_enabled; } ;
typedef TYPE_2__ adapter_t ;
struct TYPE_4__ {int id; } ;







__attribute__((used)) static inline int
FUNC_0(adapter_t *VAR_0, struct scsi_cmnd *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->device->id;

 if ( VAR_3 > VAR_0->this_id )
  VAR_3--;

 VAR_4 = (VAR_2 * 15) + VAR_3;





 if( VAR_0->boot_ldrv_enabled ) {
  if( VAR_4 == 0 ) {
   VAR_4 = VAR_0->boot_ldrv;
  }
  else {
   if( VAR_4 <= VAR_0->boot_ldrv ) {
    VAR_4--;
   }
  }
 }
 if (VAR_0->support_random_del && VAR_0->read_ldidmap )
  switch (VAR_1->cmnd[0]) {
  case 130:
  case 128:
  case 131:
  case 129:
   VAR_4 += 0x80;
  }

 return VAR_4;
}
