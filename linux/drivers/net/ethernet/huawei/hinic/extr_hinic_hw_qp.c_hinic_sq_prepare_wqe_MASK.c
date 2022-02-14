
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hinic_sq_wqe {TYPE_1__* buf_descs; int task; int ctrl; } ;
struct hinic_sq {int dummy; } ;
struct hinic_sge {int dummy; } ;
struct TYPE_2__ {struct hinic_sge sge; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hinic_sq *VAR_0, u16 VAR_1,
     struct hinic_sq_wqe *VAR_2, struct hinic_sge *VAR_3,
     int VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_2->ctrl, VAR_1, VAR_4);

 FUNC_1(&VAR_2->task);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2->buf_descs[VAR_5].sge = VAR_3[VAR_5];
}
