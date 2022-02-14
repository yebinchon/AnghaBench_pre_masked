
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcan4x5x_priv {scalar_t__ reg_offset; int regmap; } ;
struct m_can_classdev {struct tcan4x5x_priv* device_data; } ;


 int FUNC_0 (int ,scalar_t__,int *) ;

__attribute__((used)) static u32 FUNC_1(struct m_can_classdev *VAR_0, int VAR_1)
{
 struct tcan4x5x_priv *VAR_2 = VAR_0->device_data;
 u32 VAR_3;

 FUNC_0(VAR_2->regmap, VAR_2->reg_offset + VAR_1, &VAR_3);

 return VAR_3;
}
