
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ngene_channel {TYPE_1__* dev; } ;
struct dvb_frontend {struct ngene_channel* analog_demod_priv; } ;
struct TYPE_2__ {int pll_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct ngene_channel *VAR_2 = VAR_0->analog_demod_priv;

 if (VAR_1)
  FUNC_0(&VAR_2->dev->pll_mutex);
 else
  FUNC_1(&VAR_2->dev->pll_mutex);
}
