
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_2__ {int (* napi_fn ) (struct octeon_droq*) ;scalar_t__ poll_mode; } ;
struct octeon_droq {TYPE_1__ ops; } ;
struct octeon_device_priv {int napi_mask; int droq_tasklet; } ;
struct octeon_device {int int_status; int droq_intr; struct octeon_droq** droq; scalar_t__ priv; } ;


 int FUNC_0 (size_t) ;
 size_t FUNC_1 (struct octeon_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct octeon_droq*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct octeon_device *VAR_1)
{
 struct octeon_device_priv *VAR_2 =
  (struct octeon_device_priv *)VAR_1->priv;
 struct octeon_droq *VAR_3;
 u64 VAR_4;

 if (VAR_1->int_status & VAR_0) {
  for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1);
       VAR_4++) {
   if (!(VAR_1->droq_intr & FUNC_0(VAR_4)))
    continue;

   VAR_3 = VAR_1->droq[VAR_4];

   if (VAR_3->ops.poll_mode) {
    VAR_3->ops.napi_fn(VAR_3);
    VAR_2->napi_mask |= FUNC_0(VAR_4);
   } else {
    FUNC_3(&VAR_2->droq_tasklet);
   }
  }
 }
}
