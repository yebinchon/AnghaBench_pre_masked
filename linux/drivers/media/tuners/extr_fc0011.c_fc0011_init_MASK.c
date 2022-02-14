
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fc0011_priv {TYPE_1__* i2c; int addr; } ;
struct dvb_frontend {int (* callback ) (TYPE_1__*,int ,int ,int ) ;struct fc0011_priv* tuner_priv; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_4)
{
 struct fc0011_priv *VAR_5 = VAR_4->tuner_priv;
 int VAR_6;

 if (FUNC_0(!VAR_4->callback))
  return -VAR_1;

 VAR_6 = VAR_4->callback(VAR_5->i2c, VAR_0,
      VAR_2, VAR_5->addr);
 if (VAR_6) {
  FUNC_1(&VAR_5->i2c->dev, "Power-on callback failed\n");
  return VAR_6;
 }
 VAR_6 = VAR_4->callback(VAR_5->i2c, VAR_0,
      VAR_3, VAR_5->addr);
 if (VAR_6) {
  FUNC_1(&VAR_5->i2c->dev, "Reset callback failed\n");
  return VAR_6;
 }

 return 0;
}
