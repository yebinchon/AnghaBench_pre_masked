
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int (* start_cm ) (struct cnic_dev*) ;int * ulp_ops; struct cnic_dev** ulp_handle; int delete_task; } ;
struct cnic_dev {int cm_select_dev; int cm_close; int cm_abort; int cm_connect; int cm_destroy; int cm_create; struct cnic_local* cnic_priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cnic_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cnic_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct cnic_dev*) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_9)
{
 struct cnic_local *VAR_10 = VAR_9->cnic_priv;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = VAR_10->start_cm(VAR_9);

 if (VAR_11)
  goto err_out;

 FUNC_0(&VAR_10->delete_task, VAR_8);

 VAR_9->cm_create = VAR_5;
 VAR_9->cm_destroy = VAR_6;
 VAR_9->cm_connect = VAR_4;
 VAR_9->cm_abort = VAR_2;
 VAR_9->cm_close = VAR_3;
 VAR_9->cm_select_dev = VAR_7;

 VAR_10->ulp_handle[VAR_0] = VAR_9;
 FUNC_3(VAR_10->ulp_ops[VAR_0], &VAR_1);
 return 0;

err_out:
 FUNC_2(VAR_9);
 return VAR_11;
}
