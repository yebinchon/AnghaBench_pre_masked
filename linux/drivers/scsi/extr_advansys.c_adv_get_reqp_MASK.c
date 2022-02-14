
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct asc_board {int * adv_reqp; } ;
struct adv_dvc_var {size_t max_host_qng; struct asc_board* drv_ptr; } ;
typedef int adv_req_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static adv_req_t * FUNC_1(struct adv_dvc_var *VAR_0, u32 VAR_1)
{
 struct asc_board *VAR_2 = VAR_0->drv_ptr;

 FUNC_0(VAR_1 > VAR_0->max_host_qng);
 return &VAR_2->adv_reqp[VAR_1];
}
