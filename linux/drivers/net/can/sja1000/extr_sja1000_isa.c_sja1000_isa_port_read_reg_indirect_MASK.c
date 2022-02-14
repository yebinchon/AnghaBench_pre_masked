
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sja1000_priv {TYPE_1__* dev; scalar_t__ reg_base; } ;
struct TYPE_2__ {size_t dev_id; } ;


 int FUNC_0 (unsigned long) ;
 int * VAR_0 ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u8 FUNC_4(const struct sja1000_priv *VAR_1,
          int VAR_2)
{
 unsigned long VAR_3, VAR_4 = (unsigned long)VAR_1->reg_base;
 u8 VAR_5;

 FUNC_2(&VAR_0[VAR_1->dev->dev_id], VAR_3);
 FUNC_1(VAR_2, VAR_4);
 VAR_5 = FUNC_0(VAR_4 + 1);
 FUNC_3(&VAR_0[VAR_1->dev->dev_id], VAR_3);

 return VAR_5;
}
