
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5767_priv {int dummy; } ;
struct dvb_frontend {struct tea5767_priv* tuner_priv; } ;


 char const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline int FUNC_1(struct dvb_frontend *VAR_2, const char *VAR_3)
{
 struct tea5767_priv *VAR_4 = VAR_2->tuner_priv;

 int VAR_5 = VAR_3[2] & VAR_0;

 FUNC_0("Radio ST GET = %02x\n", VAR_5);

 return (VAR_5 ? VAR_1 : 0);
}
