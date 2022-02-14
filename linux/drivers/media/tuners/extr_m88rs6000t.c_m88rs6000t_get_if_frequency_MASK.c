
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct m88rs6000t_dev {TYPE_1__* client; } ;
struct dvb_frontend {struct m88rs6000t_dev* tuner_priv; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct m88rs6000t_dev *VAR_2 = VAR_0->tuner_priv;

 FUNC_0(&VAR_2->client->dev, "\n");

 *VAR_1 = 0;
 return 0;
}
