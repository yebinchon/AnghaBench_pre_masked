
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_tgt {int dummy; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 scalar_t__ FUNC_1 (struct snic_tgt*) ;
 struct snic_tgt* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct scsi_device *VAR_1)
{
 struct snic_tgt *VAR_2 = FUNC_2(FUNC_0(VAR_1));

 if (!VAR_2 || FUNC_1(VAR_2))
  return -VAR_0;

 return 0;
}
