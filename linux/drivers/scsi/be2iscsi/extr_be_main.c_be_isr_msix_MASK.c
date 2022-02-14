
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct be_queue_info {int id; } ;
struct be_eq_obj {int iopoll; struct beiscsi_hba* phba; struct be_queue_info q; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int,int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct beiscsi_hba *VAR_3;
 struct be_queue_info *VAR_4;
 struct be_eq_obj *VAR_5;

 VAR_5 = VAR_2;
 VAR_4 = &VAR_5->q;

 VAR_3 = VAR_5->phba;

 FUNC_0(VAR_3, VAR_4->id, 1, 0, 0, 1);
 FUNC_1(&VAR_5->iopoll);

 return VAR_0;
}
