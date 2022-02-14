
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_state; } ;
struct request {int rq_flags; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (int ,struct scsi_device*,char*) ;

__attribute__((used)) static blk_status_t
FUNC_1(struct scsi_device *VAR_5, struct request *VAR_6)
{
 switch (VAR_5->sdev_state) {
 case 130:
 case 128:





  FUNC_0(VAR_3, VAR_5,
       "rejecting I/O to offline device\n");
  return VAR_0;
 case 131:




  FUNC_0(VAR_3, VAR_5,
       "rejecting I/O to dead device\n");
  return VAR_0;
 case 133:
 case 132:
  return VAR_2;
 case 129:



  if (VAR_6 && !(VAR_6->rq_flags & VAR_4))
   return VAR_2;
  return VAR_1;
 default:





  if (VAR_6 && !(VAR_6->rq_flags & VAR_4))
   return VAR_0;
  return VAR_1;
 }
}
