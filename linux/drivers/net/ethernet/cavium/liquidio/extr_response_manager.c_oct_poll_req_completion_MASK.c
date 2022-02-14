
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_3__ {int work; } ;
struct cavium_wq {TYPE_1__ wk; int wq; } ;
struct octeon_device {TYPE_2__* response_list; struct cavium_wq dma_comp_wq; } ;
struct cavium_wk {scalar_t__ ctxptr; } ;
struct TYPE_4__ {int pending_req_count; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_1)
{
 struct cavium_wk *VAR_2 = (struct cavium_wk *)VAR_1;
 struct octeon_device *VAR_3 = (struct octeon_device *)VAR_2->ctxptr;
 struct cavium_wq *VAR_4 = &VAR_3->dma_comp_wq;

 FUNC_1(VAR_3, 0);

 if (FUNC_0(&VAR_3->response_list
   [VAR_0].pending_req_count))
  FUNC_3(VAR_4->wq, &VAR_4->wk.work, FUNC_2(1));
}
