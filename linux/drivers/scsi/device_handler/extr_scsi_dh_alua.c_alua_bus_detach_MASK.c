
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct alua_dh_data* handler_data; } ;
struct alua_port_group {int kref; int lock; } ;
struct alua_dh_data {int node; int pg_lock; int * sdev; int pg; } ;


 int FUNC_0 (struct alua_dh_data*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 struct alua_port_group* FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct scsi_device *VAR_1)
{
 struct alua_dh_data *VAR_2 = VAR_1->handler_data;
 struct alua_port_group *VAR_3;

 FUNC_6(&VAR_2->pg_lock);
 VAR_3 = FUNC_5(VAR_2->pg, FUNC_3(&VAR_2->pg_lock));
 FUNC_4(VAR_2->pg, ((void*)0));
 VAR_2->sdev = ((void*)0);
 FUNC_8(&VAR_2->pg_lock);
 if (VAR_3) {
  FUNC_7(&VAR_3->lock);
  FUNC_2(&VAR_2->node);
  FUNC_9(&VAR_3->lock);
  FUNC_1(&VAR_3->kref, VAR_0);
 }
 VAR_1->handler_data = ((void*)0);
 FUNC_0(VAR_2);
}
