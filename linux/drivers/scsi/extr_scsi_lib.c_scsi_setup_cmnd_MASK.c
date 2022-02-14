
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cmnd {int sc_data_direction; } ;
struct request {int dummy; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct scsi_cmnd* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct scsi_device*,struct request*) ;
 int FUNC_5 (struct scsi_device*,struct request*) ;

__attribute__((used)) static blk_status_t FUNC_6(struct scsi_device *VAR_4,
  struct request *VAR_5)
{
 struct scsi_cmnd *VAR_6 = FUNC_0(VAR_5);

 if (!FUNC_1(VAR_5))
  VAR_6->sc_data_direction = VAR_1;
 else if (FUNC_3(VAR_5) == VAR_3)
  VAR_6->sc_data_direction = VAR_2;
 else
  VAR_6->sc_data_direction = VAR_0;

 if (FUNC_2(VAR_5))
  return FUNC_5(VAR_4, VAR_5);
 else
  return FUNC_4(VAR_4, VAR_5);
}
