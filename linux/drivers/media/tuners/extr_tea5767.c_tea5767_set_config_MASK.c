
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5767_priv {int ctrl; } ;
struct dvb_frontend {struct tea5767_priv* tuner_priv; } ;


 int FUNC_0 (int *,void*,int) ;

__attribute__((used)) static int FUNC_1 (struct dvb_frontend *VAR_0, void *VAR_1)
{
 struct tea5767_priv *VAR_2 = VAR_0->tuner_priv;

 FUNC_0(&VAR_2->ctrl, VAR_1, sizeof(VAR_2->ctrl));

 return 0;
}
