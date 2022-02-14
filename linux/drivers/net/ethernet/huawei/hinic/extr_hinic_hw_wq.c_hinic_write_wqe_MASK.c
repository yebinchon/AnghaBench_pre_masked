
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_wq {int wqebb_size; int max_wqe_size; int * shadow_wqe; int * shadow_idx; } ;
struct hinic_hw_wqe {int dummy; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct hinic_wq*,struct hinic_hw_wqe*) ;
 int FUNC_2 (struct hinic_wq*,void*,int,int ) ;
 scalar_t__ FUNC_3 (struct hinic_wq*,struct hinic_hw_wqe*) ;

void FUNC_4(struct hinic_wq *VAR_0, struct hinic_hw_wqe *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3, VAR_4;
 void *VAR_5;
 u16 VAR_6;

 if (FUNC_3(VAR_0, VAR_1)) {
  VAR_3 = FUNC_1(VAR_0, VAR_1);

  VAR_6 = VAR_0->shadow_idx[VAR_3];
  VAR_4 = FUNC_0(VAR_2, VAR_0->wqebb_size) / VAR_0->wqebb_size;
  VAR_5 = &VAR_0->shadow_wqe[VAR_3 * VAR_0->max_wqe_size];

  FUNC_2(VAR_0, VAR_5, VAR_4, VAR_6);
 }
}
