
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_dvb {int (* gate_ctrl ) (struct dvb_frontend*,int) ;int pll_mutex; } ;
struct dvb_frontend {struct em28xx_dvb* sec_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct em28xx_dvb *VAR_3 = VAR_1->sec_priv;
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_2) {
  FUNC_0(&VAR_3->pll_mutex);
  VAR_4 = VAR_3->gate_ctrl(VAR_1, 1);
 } else {
  VAR_4 = VAR_3->gate_ctrl(VAR_1, 0);
  FUNC_3(&VAR_3->pll_mutex);
 }
 return VAR_4;
}
