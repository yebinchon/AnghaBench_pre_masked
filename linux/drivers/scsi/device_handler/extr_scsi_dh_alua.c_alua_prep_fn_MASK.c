
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct alua_dh_data* handler_data; } ;
struct request {int rq_flags; } ;
struct alua_port_group {unsigned char state; } ;
struct alua_dh_data {int pg; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 struct alua_port_group* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static blk_status_t FUNC_3(struct scsi_device *VAR_4, struct request *VAR_5)
{
 struct alua_dh_data *VAR_6 = VAR_4->handler_data;
 struct alua_port_group *VAR_7;
 unsigned char VAR_8 = 129;

 FUNC_1();
 VAR_7 = FUNC_0(VAR_6->pg);
 if (VAR_7)
  VAR_8 = VAR_7->state;
 FUNC_2();

 switch (VAR_8) {
 case 129:
 case 131:
 case 130:
  return VAR_1;
 case 128:
  return VAR_2;
 default:
  VAR_5->rq_flags |= VAR_3;
  return VAR_0;
 }
}
