
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct technologic_priv {int io_lock; } ;
struct sja1000_priv {scalar_t__ reg_base; struct technologic_priv* priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u8 FUNC_4(const struct sja1000_priv *VAR_0, int VAR_1)
{
 struct technologic_priv *VAR_2 = VAR_0->priv;
 unsigned long VAR_3;
 u8 VAR_4;

 FUNC_2(&VAR_2->io_lock, VAR_3);
 FUNC_1(VAR_1, VAR_0->reg_base + 0);
 VAR_4 = FUNC_0(VAR_0->reg_base + 2);
 FUNC_3(&VAR_2->io_lock, VAR_3);

 return VAR_4;
}
