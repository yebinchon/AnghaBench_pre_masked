
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hp_sw_dh_data* handler_data; } ;
struct hp_sw_dh_data {scalar_t__ path_state; } ;
typedef int (* activate_complete ) (void*,int) ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hp_sw_dh_data*) ;
 int FUNC_1 (struct scsi_device*,struct hp_sw_dh_data*) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_2,
    activate_complete VAR_3, void *VAR_4)
{
 int VAR_5 = VAR_1;
 struct hp_sw_dh_data *VAR_6 = VAR_2->handler_data;

 VAR_5 = FUNC_1(VAR_2, VAR_6);

 if (VAR_5 == VAR_1 && VAR_6->path_state == VAR_0)
  VAR_5 = FUNC_0(VAR_6);

 if (VAR_3)
  VAR_3(VAR_4, VAR_5);
 return 0;
}
