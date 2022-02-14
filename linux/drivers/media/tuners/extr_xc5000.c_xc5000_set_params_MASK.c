
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xc5000_priv {int mode; } ;
struct dvb_frontend {struct xc5000_priv* tuner_priv; } ;


 int VAR_0 ;



 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 scalar_t__ FUNC_4 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1)
{
 struct xc5000_priv *VAR_2 = VAR_1->tuner_priv;

 if (FUNC_4(VAR_1, 0) != 0) {
  FUNC_0(1, "Unable to load firmware and init tuner\n");
  return -VAR_0;
 }

 switch (VAR_2->mode) {
 case 128:
  return FUNC_1(VAR_1);
 case 130:
  return FUNC_2(VAR_1);
 case 129:
  return FUNC_3(VAR_1);
 }

 return 0;
}
