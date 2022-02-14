
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xc5000_priv {int chip_id; int xtal_khz; } ;
struct dvb_frontend {struct xc5000_priv* tuner_priv; } ;




 int FUNC_0 (struct xc5000_priv*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct xc5000_priv *VAR_1 = VAR_0->tuner_priv;
 int VAR_2 = 0;

 switch (VAR_1->chip_id) {
 default:
 case 129:

  break;
 case 128:
  switch (VAR_1->xtal_khz) {
  default:
  case 32000:

   break;
  case 31875:

   VAR_2 = FUNC_0(VAR_1, 0x000f, 0x8081);
   break;
  }
  break;
 }
 return VAR_2;
}
