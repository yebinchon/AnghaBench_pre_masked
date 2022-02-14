
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct alua_dh_data* handler_data; } ;
struct alua_dh_data {int init_error; int init_mutex; int node; struct scsi_device* sdev; int pg; int pg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct scsi_device*,struct alua_dh_data*) ;
 int FUNC_2 (struct alua_dh_data*) ;
 struct alua_dh_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct scsi_device *VAR_4)
{
 struct alua_dh_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5) , VAR_0);
 if (!VAR_5)
  return VAR_2;
 FUNC_6(&VAR_5->pg_lock);
 FUNC_5(VAR_5->pg, ((void*)0));
 VAR_5->init_error = VAR_3;
 VAR_5->sdev = VAR_4;
 FUNC_0(&VAR_5->node);

 FUNC_4(&VAR_5->init_mutex);
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 != VAR_3 && VAR_6 != VAR_1)
  goto failed;

 VAR_4->handler_data = VAR_5;
 return VAR_3;
failed:
 FUNC_2(VAR_5);
 return VAR_6;
}
