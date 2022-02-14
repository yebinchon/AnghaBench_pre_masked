
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
struct work_struct {int dummy; } ;
struct octeon_device {struct cavium_wq* check_db_wq; } ;
struct TYPE_2__ {int work; } ;
struct cavium_wq {TYPE_1__ wk; int wq; } ;
struct cavium_wk {size_t ctxul; scalar_t__ ctxptr; } ;


 int FUNC_0 (struct octeon_device*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_0)
{
 struct cavium_wk *VAR_1 = (struct cavium_wk *)VAR_0;
 struct octeon_device *VAR_2 = (struct octeon_device *)VAR_1->ctxptr;
 u64 VAR_3 = VAR_1->ctxul;
 struct cavium_wq *VAR_4 = &VAR_2->check_db_wq[VAR_3];
 u32 VAR_5 = 10;

 FUNC_0(VAR_2, VAR_3);
 FUNC_2(VAR_4->wq, &VAR_4->wk.work, FUNC_1(VAR_5));
}
