
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fdomain {scalar_t__ chip; scalar_t__ base; } ;
struct TYPE_2__ {int host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned char*,size_t) ;
 size_t FUNC_3 (struct scsi_cmnd*) ;
 size_t FUNC_4 (struct scsi_cmnd*) ;
 unsigned char* FUNC_5 (int ,int ,size_t*,size_t*) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (struct scsi_cmnd*,size_t) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 struct fdomain* FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_11(struct scsi_cmnd *VAR_3)
{
 struct fdomain *VAR_4 = FUNC_10(VAR_3->device->host);

 int VAR_5 = VAR_4->chip == VAR_2 ? 0x800 : 0x2000;
 unsigned char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;

 while ((VAR_9 = VAR_5 - FUNC_0(VAR_4->base + VAR_1)) > 512) {
  VAR_8 = FUNC_3(VAR_3) - FUNC_4(VAR_3);
  if (VAR_9 + VAR_8 > FUNC_3(VAR_3)) {
   VAR_9 = FUNC_3(VAR_3) - VAR_8;
   if (VAR_9 == 0)
    break;
  }
  VAR_6 = FUNC_5(FUNC_9(VAR_3), FUNC_8(VAR_3),
        &VAR_8, &VAR_9);
  VAR_7 = VAR_6 + VAR_8;
  if (VAR_9 & 1)
   FUNC_1(*VAR_7++, VAR_4->base + VAR_0);
  if (VAR_9 > 1)
   FUNC_2(VAR_4->base + VAR_0, VAR_7, VAR_9 >> 1);
  FUNC_7(VAR_3, FUNC_4(VAR_3) - VAR_9);
  FUNC_6(VAR_6);
 }
}
