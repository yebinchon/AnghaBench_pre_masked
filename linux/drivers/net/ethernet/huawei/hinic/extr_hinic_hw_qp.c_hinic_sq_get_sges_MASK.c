
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hinic_sq_wqe {TYPE_1__* buf_descs; } ;
struct hinic_sge {int dummy; } ;
typedef int sges ;
struct TYPE_2__ {struct hinic_sge sge; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_sge*,int) ;

void FUNC_1(struct hinic_sq_wqe *VAR_1, struct hinic_sge *VAR_2,
         int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3 && VAR_4 < VAR_0; VAR_4++) {
  VAR_2[VAR_4] = VAR_1->buf_descs[VAR_4].sge;
  FUNC_0(&VAR_2[VAR_4], sizeof(VAR_2[VAR_4]));
 }
}
