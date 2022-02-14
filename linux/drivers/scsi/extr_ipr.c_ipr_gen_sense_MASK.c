
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ipr_resource_entry {int dummy; } ;
struct TYPE_13__ {scalar_t__ failing_lba; } ;
struct TYPE_12__ {scalar_t__ failing_lba_hi; scalar_t__ failing_lba_lo; } ;
struct TYPE_14__ {TYPE_6__ dasd; TYPE_5__ vset; } ;
struct TYPE_11__ {scalar_t__ ioasc; scalar_t__ ioasc_specific; } ;
struct ipr_ioasa {TYPE_7__ u; TYPE_4__ hdr; } ;
struct TYPE_9__ {struct ipr_ioasa ioasa; } ;
struct ipr_cmnd {TYPE_3__* scsi_cmd; TYPE_2__ s; } ;
struct TYPE_10__ {int* sense_buffer; int result; TYPE_1__* device; } ;
struct TYPE_8__ {struct ipr_resource_entry* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct ipr_resource_entry*) ;
 int FUNC_5 (int*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ipr_cmnd *VAR_6)
{
 u32 VAR_7;
 u8 *VAR_8 = VAR_6->scsi_cmd->sense_buffer;
 struct ipr_resource_entry *VAR_9 = VAR_6->scsi_cmd->device->hostdata;
 struct ipr_ioasa *VAR_10 = &VAR_6->s.ioasa;
 u32 VAR_11 = FUNC_3(VAR_10->hdr.ioasc);

 FUNC_5(VAR_8, 0, VAR_5);

 if (VAR_11 >= VAR_2)
  return;

 VAR_6->scsi_cmd->result = VAR_4;

 if (FUNC_4(VAR_9) &&
     VAR_11 == VAR_3 &&
     VAR_10->u.vset.failing_lba_hi != 0) {
  VAR_8[0] = 0x72;
  VAR_8[1] = FUNC_1(VAR_11);
  VAR_8[2] = FUNC_0(VAR_11);
  VAR_8[3] = FUNC_2(VAR_11);

  VAR_8[7] = 12;
  VAR_8[8] = 0;
  VAR_8[9] = 0x0A;
  VAR_8[10] = 0x80;

  VAR_7 = FUNC_3(VAR_10->u.vset.failing_lba_hi);

  VAR_8[12] = (VAR_7 & 0xff000000) >> 24;
  VAR_8[13] = (VAR_7 & 0x00ff0000) >> 16;
  VAR_8[14] = (VAR_7 & 0x0000ff00) >> 8;
  VAR_8[15] = VAR_7 & 0x000000ff;

  VAR_7 = FUNC_3(VAR_10->u.vset.failing_lba_lo);

  VAR_8[16] = (VAR_7 & 0xff000000) >> 24;
  VAR_8[17] = (VAR_7 & 0x00ff0000) >> 16;
  VAR_8[18] = (VAR_7 & 0x0000ff00) >> 8;
  VAR_8[19] = VAR_7 & 0x000000ff;
 } else {
  VAR_8[0] = 0x70;
  VAR_8[2] = FUNC_1(VAR_11);
  VAR_8[12] = FUNC_0(VAR_11);
  VAR_8[13] = FUNC_2(VAR_11);


  if ((FUNC_1(VAR_11) == 0x05) &&
      (FUNC_3(VAR_10->hdr.ioasc_specific) & VAR_1)) {
   VAR_8[7] = 10;


   if (FUNC_0(VAR_11) == 0x24)
    VAR_8[15] = 0xC0;
   else
    VAR_8[15] = 0x80;

   VAR_8[16] =
       ((VAR_0 &
         FUNC_3(VAR_10->hdr.ioasc_specific)) >> 8) & 0xff;
   VAR_8[17] =
       (VAR_0 &
        FUNC_3(VAR_10->hdr.ioasc_specific)) & 0xff;
  } else {
   if (VAR_11 == VAR_3) {
    if (FUNC_4(VAR_9))
     VAR_7 = FUNC_3(VAR_10->u.vset.failing_lba_lo);
    else
     VAR_7 = FUNC_3(VAR_10->u.dasd.failing_lba);

    VAR_8[0] |= 0x80;
    VAR_8[3] = (VAR_7 & 0xff000000) >> 24;
    VAR_8[4] = (VAR_7 & 0x00ff0000) >> 16;
    VAR_8[5] = (VAR_7 & 0x0000ff00) >> 8;
    VAR_8[6] = VAR_7 & 0x000000ff;
   }

   VAR_8[7] = 6;
  }
 }
}
