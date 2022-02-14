
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int (* napi_fn ) (struct octeon_droq*) ;scalar_t__ poll_mode; } ;
struct octeon_droq {TYPE_2__ ops; struct octeon_device* oct_dev; } ;
struct octeon_device_priv {int droq_tasklet; } ;
struct octeon_device {TYPE_1__* pci_dev; scalar_t__ priv; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct octeon_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct octeon_droq*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
int FUNC_4(struct octeon_droq *VAR_2, u64 VAR_3)
{
 struct octeon_device *VAR_4 = VAR_2->oct_dev;
 struct octeon_device_priv *VAR_5 =
     (struct octeon_device_priv *)VAR_4->priv;

 if (VAR_2->ops.poll_mode) {
  VAR_2->ops.napi_fn(VAR_2);
 } else {
  if (VAR_3 & VAR_1) {
   if (FUNC_0(VAR_4))
    FUNC_1(&VAR_4->pci_dev->dev,
     "should not come here should not get rx when poll mode = 0 for vf\n");
   FUNC_3(&VAR_5->droq_tasklet);
   return 1;
  }

  if (VAR_3 & VAR_0)
   return 0;
 }

 return 0;
}
