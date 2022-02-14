
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {scalar_t__ asc; scalar_t__ sense_key; scalar_t__ ascq; } ;
struct TYPE_2__ {int errno; scalar_t__ sense; scalar_t__ asc; scalar_t__ ascq; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_1(struct scsi_sense_hdr *VAR_2)
{
 int VAR_3,VAR_4 = 0;


 if (FUNC_0(VAR_2) &&
     VAR_2->asc != 0) {
  for (VAR_3 = 0; VAR_1[VAR_3].errno != 0; VAR_3++) {
   if (VAR_1[VAR_3].sense == VAR_2->sense_key &&
       VAR_1[VAR_3].asc == VAR_2->asc &&
       VAR_1[VAR_3].ascq == VAR_2->ascq) {
    VAR_4 = -VAR_1[VAR_3].errno;
    break;
   }
  }
 }
 if (VAR_4 == 0)
  VAR_4 = -VAR_0;
 return VAR_4;
}
