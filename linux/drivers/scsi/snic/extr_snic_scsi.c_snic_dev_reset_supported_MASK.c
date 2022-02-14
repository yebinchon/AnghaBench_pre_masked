
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ typ; } ;
struct snic_tgt {TYPE_1__ tdata; } ;
struct scsi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 struct snic_tgt* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct scsi_device *VAR_1)
{
 struct snic_tgt *VAR_2 = FUNC_1(FUNC_0(VAR_1));

 if (VAR_2->tdata.typ == VAR_0)
  return 0;

 return 1;
}
