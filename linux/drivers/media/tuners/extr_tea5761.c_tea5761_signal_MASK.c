
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5761_priv {int dummy; } ;
struct dvb_frontend {struct tea5761_priv* tuner_priv; } ;


 char const VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline int FUNC_1(struct dvb_frontend *VAR_1, const char *VAR_2)
{
 struct tea5761_priv *VAR_3 = VAR_1->tuner_priv;

 int VAR_4 = ((VAR_2[9] & VAR_0) << (13 - 4));

 FUNC_0("Signal strength: %d\n", VAR_4);

 return VAR_4;
}
