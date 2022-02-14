
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_sq_wqe {int dummy; } ;
struct hinic_sq {int wq; } ;
struct hinic_hw_wqe {struct hinic_sq_wqe sq_wqe; } ;


 scalar_t__ FUNC_0 (struct hinic_hw_wqe*) ;
 struct hinic_hw_wqe* FUNC_1 (int ,unsigned int,int *) ;

struct hinic_sq_wqe *FUNC_2(struct hinic_sq *VAR_0,
          unsigned int VAR_1, u16 *VAR_2)
{
 struct hinic_hw_wqe *VAR_3 = FUNC_1(VAR_0->wq, VAR_1,
          VAR_2);

 if (FUNC_0(VAR_3))
  return ((void*)0);

 return &VAR_3->sq_wqe;
}
