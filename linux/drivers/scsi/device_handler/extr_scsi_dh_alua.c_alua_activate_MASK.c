
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct alua_dh_data* handler_data; } ;
struct alua_queue_data {void* callback_data; int (* callback_fn ) (void*,int) ;} ;
struct alua_port_group {int kref; } ;
struct alua_dh_data {int init_error; int init_mutex; int pg; } ;
typedef int (* activate_complete ) (void*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct alua_port_group*,struct scsi_device*,struct alua_queue_data*,int) ;
 int FUNC_1 (struct alua_queue_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct alua_queue_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct alua_port_group* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct scsi_device *VAR_5,
   activate_complete VAR_6, void *VAR_7)
{
 struct alua_dh_data *VAR_8 = VAR_5->handler_data;
 int VAR_9 = VAR_2;
 struct alua_queue_data *VAR_10;
 struct alua_port_group *VAR_11;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_0);
 if (!VAR_10) {
  VAR_9 = VAR_3;
  goto out;
 }
 VAR_10->callback_fn = VAR_6;
 VAR_10->callback_data = VAR_7;

 FUNC_5(&VAR_8->init_mutex);
 FUNC_8();
 VAR_11 = FUNC_7(VAR_8->pg);
 if (!VAR_11 || !FUNC_2(&VAR_11->kref)) {
  FUNC_9();
  FUNC_1(VAR_10);
  VAR_9 = VAR_8->init_error;
  FUNC_6(&VAR_8->init_mutex);
  goto out;
 }
 FUNC_9();
 FUNC_6(&VAR_8->init_mutex);

 if (FUNC_0(VAR_11, VAR_5, VAR_10, 1))
  VAR_6 = ((void*)0);
 else
  VAR_9 = VAR_1;
 FUNC_3(&VAR_11->kref, VAR_4);
out:
 if (VAR_6)
  VAR_6(VAR_7, VAR_9);
 return 0;
}
