
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct dvb_bt8xx_card {int bttv_nr; } ;
struct TYPE_2__ {struct dvb_bt8xx_card* priv; } ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0)
{
 struct dvb_bt8xx_card *VAR_1 = VAR_0->dvb->priv;

 FUNC_0(VAR_1->bttv_nr, 1, 0);

 return 0;
}
