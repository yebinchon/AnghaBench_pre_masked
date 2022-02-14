
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_ao_cec_g12a_device {int regmap_cec; TYPE_1__* data; int regmap; } ;
struct cec_adapter {struct meson_ao_cec_g12a_device* priv; } ;
struct TYPE_2__ {scalar_t__ ctrl2_setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct meson_ao_cec_g12a_device*,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct cec_adapter *VAR_10, bool VAR_11)
{
 struct meson_ao_cec_g12a_device *VAR_12 = VAR_10->priv;

 FUNC_1(VAR_12, 0);

 FUNC_2(VAR_12->regmap, VAR_7,
      VAR_8, VAR_8);

 if (!VAR_11)
  return 0;


 FUNC_2(VAR_12->regmap, VAR_7,
      VAR_6 |
      VAR_4,
      FUNC_0(VAR_6,
          VAR_5) |
      FUNC_0(VAR_4, 7));


 FUNC_2(VAR_12->regmap, VAR_7,
      VAR_9,
      VAR_9);


 FUNC_2(VAR_12->regmap, VAR_7,
      VAR_2,
       FUNC_0(VAR_2,
           VAR_3));


 FUNC_2(VAR_12->regmap, VAR_7,
      VAR_8, 0);

 if (VAR_12->data->ctrl2_setup)
  FUNC_3(VAR_12->regmap_cec, VAR_0,
        FUNC_0(VAR_1, 2));

 FUNC_1(VAR_12, 1);

 return 0;
}
