
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ksz_device {TYPE_1__* dev_ops; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct TYPE_2__ {int (* r_phy ) (struct ksz_device*,int,int,int*) ;} ;


 int FUNC_0 (struct ksz_device*,int,int,int*) ;

int FUNC_1(struct dsa_switch *VAR_0, int VAR_1, int VAR_2)
{
 struct ksz_device *VAR_3 = VAR_0->priv;
 u16 VAR_4 = 0xffff;

 VAR_3->dev_ops->r_phy(VAR_3, VAR_1, VAR_2, &VAR_4);

 return VAR_4;
}
