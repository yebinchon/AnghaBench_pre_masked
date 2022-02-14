
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct alua_dh_data {int init_error; int init_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct scsi_device*,struct alua_dh_data*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_2, struct alua_dh_data *VAR_3)
{
 int VAR_4 = VAR_0, VAR_5;

 FUNC_2(&VAR_3->init_mutex);
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 != VAR_1)
  VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_5);
 VAR_3->init_error = VAR_4;
 FUNC_3(&VAR_3->init_mutex);
 return VAR_4;
}
