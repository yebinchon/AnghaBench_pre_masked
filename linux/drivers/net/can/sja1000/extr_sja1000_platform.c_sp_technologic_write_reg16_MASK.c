
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct technologic_priv {int io_lock; } ;
struct sja1000_priv {scalar_t__ reg_base; struct technologic_priv* priv; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(const struct sja1000_priv *VAR_0,
           int VAR_1, u8 VAR_2)
{
 struct technologic_priv *VAR_3 = VAR_0->priv;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->io_lock, VAR_4);
 FUNC_0(VAR_1, VAR_0->reg_base + 0);
 FUNC_0(VAR_2, VAR_0->reg_base + 2);
 FUNC_2(&VAR_3->io_lock, VAR_4);
}
