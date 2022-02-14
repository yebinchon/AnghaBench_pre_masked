
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xc5000_priv {int dummy; } ;
struct dvb_frontend {struct xc5000_priv* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct xc5000_priv*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, const u8 *VAR_2)
{
 struct xc5000_priv *VAR_3 = VAR_1->tuner_priv;

 int VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 u8 VAR_10[VAR_0];

 VAR_9 = 0;
 while ((VAR_2[VAR_9] != 0xFF) ||
  (VAR_2[VAR_9 + 1] != 0xFF)) {
  VAR_7 = VAR_2[VAR_9] * 256 + VAR_2[VAR_9+1];
  if (VAR_7 == 0x0000) {

   VAR_6 = FUNC_1(VAR_1);
   VAR_9 += 2;
   if (VAR_6 != 0)
    return VAR_6;
  } else if (VAR_7 & 0x8000) {

   FUNC_0(VAR_7 & 0x7FFF);
   VAR_9 += 2;
  } else {



   VAR_9 += 2;
   VAR_10[0] = VAR_2[VAR_9];
   VAR_10[1] = VAR_2[VAR_9 + 1];
   VAR_8 = 2;
   while (VAR_8 < VAR_7) {
    if ((VAR_7 - VAR_8) > VAR_0 - 2)
     VAR_5 =
      VAR_0;
    else
     VAR_5 = (VAR_7 - VAR_8 + 2);
    for (VAR_4 = 2; VAR_4 < VAR_5; VAR_4++) {
     VAR_10[VAR_4] = VAR_2[VAR_9 + VAR_8 +
      VAR_4 - 2];
    }
    VAR_6 = FUNC_2(VAR_3, VAR_10,
     VAR_5);

    if (VAR_6 != 0)
     return VAR_6;

    VAR_8 += VAR_5 - 2;
   }
   VAR_9 += VAR_7;
  }
 }
 return 0;
}
