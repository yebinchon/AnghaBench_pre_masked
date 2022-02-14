
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5767_priv {int i2c_props; } ;
struct dvb_frontend {struct tea5767_priv* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, char *VAR_2)
{
 struct tea5767_priv *VAR_3 = VAR_1->tuner_priv;
 int VAR_4;

 FUNC_0(VAR_2, 0, 5);
 if (5 != (VAR_4 = FUNC_1(&VAR_3->i2c_props, VAR_2, 5))) {
  FUNC_2("i2c i/o error: rc == %d (should be 5)\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
