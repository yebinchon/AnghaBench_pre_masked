
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct alua_dh_data* handler_data; } ;
struct alua_dh_data {int dummy; } ;


 int FUNC_0 (struct scsi_device*,struct alua_dh_data*) ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_0)
{
 struct alua_dh_data *VAR_1 = VAR_0->handler_data;

 FUNC_0(VAR_0, VAR_1);
}
