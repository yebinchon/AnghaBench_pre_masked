
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; int * info; int func; } ;
struct octeon_droq {int cpu_id; int napi; TYPE_1__ csd; struct octeon_device* oct_dev; } ;
struct octeon_device {int dummy; } ;
typedef TYPE_1__ call_single_data_t ;


 scalar_t__ FUNC_0 (struct octeon_device*) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 struct octeon_device *VAR_2;
 struct octeon_droq *VAR_3 = VAR_1;
 int VAR_4 = FUNC_4();

 VAR_2 = VAR_3->oct_dev;

 if (FUNC_0(VAR_2) || FUNC_1(VAR_2) ||
     VAR_3->cpu_id == VAR_4) {
  FUNC_2(&VAR_3->napi);
 } else {
  call_single_data_t *VAR_5 = &VAR_3->csd;

  VAR_5->func = VAR_0;
  VAR_5->info = &VAR_3->napi;
  VAR_5->flags = 0;

  FUNC_3(VAR_3->cpu_id, VAR_5);
 }
}
