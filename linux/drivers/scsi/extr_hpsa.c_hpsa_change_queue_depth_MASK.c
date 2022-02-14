
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hpsa_scsi_dev_t* hostdata; } ;
struct hpsa_scsi_dev_t {int queue_depth; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_1, int VAR_2)
{
 struct hpsa_scsi_dev_t *VAR_3 = VAR_1->hostdata;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_2 < 1)
  VAR_2 = 1;
 else if (VAR_2 > VAR_3->queue_depth)
  VAR_2 = VAR_3->queue_depth;

 return FUNC_0(VAR_1, VAR_2);
}
