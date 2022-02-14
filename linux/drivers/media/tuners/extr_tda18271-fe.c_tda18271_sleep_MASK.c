
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {int lock; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0)
{
 struct tda18271_priv *VAR_1 = VAR_0->tuner_priv;
 int VAR_2;

 FUNC_0(&VAR_1->lock);


 VAR_2 = FUNC_2(VAR_0, 1);

 FUNC_1(&VAR_1->lock);

 return VAR_2;
}
