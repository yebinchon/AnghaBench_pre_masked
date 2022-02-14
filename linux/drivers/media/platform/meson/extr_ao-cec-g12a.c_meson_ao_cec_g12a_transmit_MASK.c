
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct meson_ao_cec_g12a_device {int regmap_cec; } ;
struct cec_msg {int len; int* msg; } ;
struct cec_adapter {struct meson_ao_cec_g12a_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct cec_adapter *VAR_12, u8 VAR_13,
     u32 VAR_14, struct cec_msg *VAR_15)
{
 struct meson_ao_cec_g12a_device *VAR_16 = VAR_12->priv;
 unsigned int VAR_17;
 int VAR_18 = 0;
 u32 VAR_19;
 int VAR_20;


 VAR_18 = FUNC_1(VAR_16->regmap_cec, VAR_6, &VAR_19);
 if (VAR_18)
  return VAR_18;
 if (VAR_19 & VAR_7)
  return -VAR_10;


 VAR_18 = FUNC_1(VAR_16->regmap_cec, VAR_0, &VAR_19);
 if (VAR_18)
  return VAR_18;
 if (VAR_19 & VAR_1)
  return -VAR_10;

 switch (VAR_14) {
 case 128:
  VAR_17 = VAR_5;
  break;
 case 129:
  VAR_17 = VAR_4;
  break;
 case 130:
 default:
  VAR_17 = VAR_3;
  break;
 }

 for (VAR_20 = 0; VAR_20 < VAR_15->len; VAR_20++)
  VAR_18 |= FUNC_3(VAR_16->regmap_cec, VAR_9 + VAR_20,
        VAR_15->msg[VAR_20]);

 VAR_18 |= FUNC_3(VAR_16->regmap_cec, VAR_8, VAR_15->len);
 if (VAR_18)
  return -VAR_11;

 VAR_18 = FUNC_2(VAR_16->regmap_cec, VAR_0,
     VAR_1 |
     VAR_2,
     VAR_1 |
     FUNC_0(VAR_2, VAR_17));

 return VAR_18;
}
