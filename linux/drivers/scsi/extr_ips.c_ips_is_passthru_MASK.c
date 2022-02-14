
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__* cmnd; TYPE_1__* device; } ;
struct scatterlist {int offset; } ;
struct TYPE_2__ {scalar_t__ channel; scalar_t__ id; scalar_t__ lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct scatterlist* FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0("ips_is_passthru", 1);

 if (!VAR_2)
  return (0);

 if ((VAR_2->cmnd[0] == VAR_1) &&
     (VAR_2->device->channel == 0) &&
     (VAR_2->device->id == VAR_0) &&
     (VAR_2->device->lun == 0) && FUNC_5(VAR_2)) {
                struct scatterlist *VAR_4 = FUNC_5(VAR_2);
                char *VAR_5;



                FUNC_4(VAR_3);
                VAR_5 = FUNC_1(FUNC_6(VAR_4)) + VAR_4->offset;
                if (VAR_5 && VAR_5[0] == 'C' && VAR_5[1] == 'O' &&
                    VAR_5[2] == 'P' && VAR_5[3] == 'P') {
                        FUNC_2(VAR_5 - VAR_4->offset);
                        FUNC_3(VAR_3);
                        return 1;
                }
                FUNC_2(VAR_5 - VAR_4->offset);
                FUNC_3(VAR_3);
 }
 return 0;
}
