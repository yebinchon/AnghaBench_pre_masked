
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc27xx_fgu_data {int battery; int lock; scalar_t__ base; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (int ,scalar_t__,int,int) ;
 int FUNC_5 (struct sc27xx_fgu_data*,int,int) ;
 int FUNC_6 (struct sc27xx_fgu_data*,int*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct sc27xx_fgu_data *VAR_6 = VAR_5;
 int VAR_7, VAR_8;
 u32 VAR_9;

 FUNC_0(&VAR_6->lock);

 VAR_7 = FUNC_3(VAR_6->regmap, VAR_6->base + VAR_2,
     &VAR_9);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_4(VAR_6->regmap, VAR_6->base + VAR_1,
     VAR_9, VAR_9);
 if (VAR_7)
  goto out;





 if (!(VAR_9 & VAR_3))
  goto out;

 VAR_7 = FUNC_6(VAR_6, &VAR_8);
 if (VAR_7)
  goto out;

 FUNC_5(VAR_6, VAR_8, 1);

out:
 FUNC_1(&VAR_6->lock);

 FUNC_2(VAR_6->battery);
 return VAR_0;
}
