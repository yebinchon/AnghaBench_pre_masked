
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sja1000_priv {TYPE_1__* dev; scalar_t__ reg_base; } ;
struct TYPE_2__ {size_t dev_id; } ;


 int * VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(const struct sja1000_priv *VAR_1,
      int VAR_2, u8 VAR_3)
{
 unsigned long VAR_4, VAR_5 = (unsigned long)VAR_1->reg_base;

 FUNC_1(&VAR_0[VAR_1->dev->dev_id], VAR_4);
 FUNC_0(VAR_2, VAR_5);
 FUNC_0(VAR_3, VAR_5 + 1);
 FUNC_2(&VAR_0[VAR_1->dev->dev_id], VAR_4);
}
