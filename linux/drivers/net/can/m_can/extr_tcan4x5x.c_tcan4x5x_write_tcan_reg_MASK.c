
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcan4x5x_priv {int regmap; } ;
struct m_can_classdev {struct tcan4x5x_priv* device_data; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct m_can_classdev *VAR_0,
       int VAR_1, int VAR_2)
{
 struct tcan4x5x_priv *VAR_3 = VAR_0->device_data;

 return FUNC_0(VAR_3->regmap, VAR_1, VAR_2);
}
