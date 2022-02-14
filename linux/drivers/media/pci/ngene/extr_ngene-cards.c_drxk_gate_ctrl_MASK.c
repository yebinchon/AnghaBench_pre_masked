
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ngene_channel {int (* gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__* dev; } ;
struct dvb_frontend {struct ngene_channel* sec_priv; } ;
struct TYPE_2__ {int pll_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct ngene_channel *VAR_2 = VAR_0->sec_priv;
 int VAR_3;

 if (VAR_1) {
  FUNC_0(&VAR_2->dev->pll_mutex);
  VAR_3 = VAR_2->gate_ctrl(VAR_0, 1);
 } else {
  VAR_3 = VAR_2->gate_ctrl(VAR_0, 0);
  FUNC_3(&VAR_2->dev->pll_mutex);
 }
 return VAR_3;
}
