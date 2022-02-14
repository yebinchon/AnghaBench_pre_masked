
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fdomain {scalar_t__ base; } ;
struct TYPE_2__ {int host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned char*,size_t) ;
 size_t FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (struct scsi_cmnd*) ;
 size_t FUNC_4 (struct scsi_cmnd*) ;
 unsigned char* FUNC_5 (int ,int ,size_t*,size_t*) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (struct scsi_cmnd*,size_t) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 struct fdomain* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct scsi_cmnd *VAR_2)
{
 struct fdomain *VAR_3 = FUNC_10(VAR_2->device->host);
 unsigned char *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;

 while ((VAR_7 = FUNC_2(VAR_3->base + VAR_1)) > 0) {
  VAR_6 = FUNC_3(VAR_2) - FUNC_4(VAR_2);
  VAR_4 = FUNC_5(FUNC_9(VAR_2), FUNC_8(VAR_2),
        &VAR_6, &VAR_7);
  VAR_5 = VAR_4 + VAR_6;
  if (VAR_7 & 1)
   *VAR_5++ = FUNC_0(VAR_3->base + VAR_0);
  if (VAR_7 > 1)
   FUNC_1(VAR_3->base + VAR_0, VAR_5, VAR_7 >> 1);
  FUNC_7(VAR_2, FUNC_4(VAR_2) - VAR_7);
  FUNC_6(VAR_4);
 }
}
