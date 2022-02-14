
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {scalar_t__ id; int lock; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,int ,int ,int ) ;
 int FUNC_4 (struct dvb_frontend*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_1)
{
 struct tda18271_priv *VAR_2 = VAR_1->tuner_priv;
 int VAR_3;

 FUNC_0(&VAR_2->lock);


 VAR_3 = FUNC_3(VAR_1, 0, 0, 0);
 if (FUNC_5(VAR_3))
  goto fail;


 VAR_3 = FUNC_2(VAR_1);
 if (FUNC_5(VAR_3))
  goto fail;

 if (VAR_2->id == VAR_0)
  FUNC_4(VAR_1);
fail:
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
