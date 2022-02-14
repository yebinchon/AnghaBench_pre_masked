
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct alua_dh_data* handler_data; } ;
struct alua_port_group {int kref; } ;
struct alua_dh_data {int pg; } ;


 int FUNC_0 (struct alua_port_group*,struct scsi_device*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct alua_port_group* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct scsi_device *VAR_1, bool VAR_2)
{
 struct alua_dh_data *VAR_3 = VAR_1->handler_data;
 struct alua_port_group *VAR_4;

 FUNC_4();
 VAR_4 = FUNC_3(VAR_3->pg);
 if (!VAR_4 || !FUNC_1(&VAR_4->kref)) {
  FUNC_5();
  return;
 }
 FUNC_5();

 FUNC_0(VAR_4, VAR_1, ((void*)0), VAR_2);
 FUNC_2(&VAR_4->kref, VAR_0);
}
