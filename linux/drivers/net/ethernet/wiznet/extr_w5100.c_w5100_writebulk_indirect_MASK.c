
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct w5100_mmio_priv {int reg_lock; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct w5100_mmio_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, u32 VAR_3,
        const u8 *VAR_4, int VAR_5)
{
 struct w5100_mmio_priv *VAR_6 = FUNC_3(VAR_2);
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6->reg_lock, VAR_7);
 FUNC_4(VAR_2, VAR_0, VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  FUNC_0(VAR_2, VAR_1, *VAR_4++);

 FUNC_2(&VAR_6->reg_lock, VAR_7);

 return 0;
}
