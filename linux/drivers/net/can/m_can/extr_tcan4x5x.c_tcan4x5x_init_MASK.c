
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcan4x5x_priv {int regmap; } ;
struct m_can_classdev {struct tcan4x5x_priv* device_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct m_can_classdev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct tcan4x5x_priv*) ;
 int FUNC_3 (struct m_can_classdev*) ;
 int FUNC_4 (struct m_can_classdev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct m_can_classdev *VAR_5)
{
 struct tcan4x5x_priv *VAR_6 = VAR_5->device_data;
 int VAR_7;

 FUNC_2(VAR_6);

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_5, VAR_2,
          VAR_1);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6->regmap, VAR_0,
     VAR_4, VAR_3);
 if (VAR_7)
  return VAR_7;


 FUNC_0(VAR_5);

 return VAR_7;
}
