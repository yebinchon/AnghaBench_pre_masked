
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_device {TYPE_1__* dev_ops; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct TYPE_2__ {int (* flush_dyn_mac_table ) (struct ksz_device*,int) ;} ;


 int FUNC_0 (struct ksz_device*,int) ;

void FUNC_1(struct dsa_switch *VAR_0, int VAR_1)
{
 struct ksz_device *VAR_2 = VAR_0->priv;

 VAR_2->dev_ops->flush_dyn_mac_table(VAR_2, VAR_1);
}
