
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vio_dev {int dev; } ;
struct ibmvscsi_host_data {TYPE_1__* host; int host_list; int work_thread; int queue; int pool; } ;
struct TYPE_4__ {int host_lock; } ;


 int VAR_0 ;
 struct ibmvscsi_host_data* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct ibmvscsi_host_data*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct ibmvscsi_host_data*,int ) ;
 int FUNC_5 (int *,struct ibmvscsi_host_data*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct ibmvscsi_host_data*) ;

__attribute__((used)) static int FUNC_14(struct vio_dev *VAR_3)
{
 struct ibmvscsi_host_data *VAR_4 = FUNC_0(&VAR_3->dev);
 unsigned long VAR_5;

 FUNC_12(VAR_4->host);
 FUNC_7(VAR_4->host);

 FUNC_4(VAR_4, VAR_0);

 FUNC_9(VAR_4->host->host_lock, VAR_5);
 FUNC_5(&VAR_4->pool, VAR_4);
 FUNC_11(VAR_4->host->host_lock, VAR_5);

 FUNC_1(&VAR_4->queue, VAR_4,
     VAR_2);

 FUNC_2(VAR_4->work_thread);
 FUNC_13(VAR_4);

 FUNC_8(&VAR_1);
 FUNC_3(&VAR_4->host_list);
 FUNC_10(&VAR_1);

 FUNC_6(VAR_4->host);

 return 0;
}
