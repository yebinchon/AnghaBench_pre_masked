
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct w5100_mmio_priv {int reg_lock; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct w5100_mmio_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, u32 VAR_3)
{
 struct w5100_mmio_priv *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 u16 VAR_6;

 FUNC_0(&VAR_4->reg_lock, VAR_5);
 FUNC_4(VAR_2, VAR_0, VAR_3);
 VAR_6 = FUNC_3(VAR_2, VAR_1) << 8;
 VAR_6 |= FUNC_3(VAR_2, VAR_1);
 FUNC_1(&VAR_4->reg_lock, VAR_5);

 return VAR_6;
}
