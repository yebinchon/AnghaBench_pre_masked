
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_channel {int irq_desc; } ;
struct irq_data {int dummy; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (int,struct cpumask const*) ;
 struct cpumask* FUNC_1 (struct irq_data*) ;
 struct irq_data* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static inline bool FUNC_4(struct mlx5e_channel *VAR_0)
{
 int VAR_1 = FUNC_3();
 const struct cpumask *VAR_2;
 struct irq_data *VAR_3;

 VAR_3 = FUNC_2(VAR_0->irq_desc);
 VAR_2 = FUNC_1(VAR_3);
 return FUNC_0(VAR_1, VAR_2);
}
