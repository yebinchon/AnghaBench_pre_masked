
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct rdac_dh_data* handler_data; } ;
struct request {int rq_flags; } ;
struct rdac_dh_data {scalar_t__ state; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static blk_status_t FUNC_0(struct scsi_device *VAR_4, struct request *VAR_5)
{
 struct rdac_dh_data *VAR_6 = VAR_4->handler_data;

 if (VAR_6->state != VAR_2) {
  VAR_5->rq_flags |= VAR_3;
  return VAR_0;
 }

 return VAR_1;
}
