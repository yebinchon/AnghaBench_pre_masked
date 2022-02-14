
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct m88rs6000t_dev {TYPE_1__* client; int regmap; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct m88rs6000t_dev* tuner_priv; } ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct m88rs6000t_dev*,int,int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct m88rs6000t_dev*,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_0)
{
 struct m88rs6000t_dev *VAR_1 = VAR_0->tuner_priv;
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;
 int VAR_3;
 s32 VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_0(&VAR_1->client->dev,
   "frequency=%d symbol_rate=%d\n",
   VAR_2->frequency, VAR_2->symbol_rate);

 if (VAR_2->symbol_rate < 5000000)
  VAR_4 = 3000;
 else
  VAR_4 = 0;

 VAR_5 = VAR_2->frequency + VAR_4;

 VAR_6 = (VAR_5 + 500) / 1000;
 VAR_3 = FUNC_3(VAR_1, VAR_6);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_1(VAR_1, VAR_2->symbol_rate / 1000, VAR_4);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_4(VAR_1->regmap, 0x00, 0x01);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_4(VAR_1->regmap, 0x00, 0x00);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_2(VAR_0);
err:
 if (VAR_3)
  FUNC_0(&VAR_1->client->dev, "failed=%d\n", VAR_3);
 return VAR_3;
}
