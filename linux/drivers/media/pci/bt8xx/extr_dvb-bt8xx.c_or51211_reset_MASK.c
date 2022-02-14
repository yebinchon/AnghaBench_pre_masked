
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct dvb_bt8xx_card {int bttv_nr; } ;
struct TYPE_2__ {struct dvb_bt8xx_card* priv; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct dvb_frontend * VAR_0)
{
 struct dvb_bt8xx_card *VAR_1 = VAR_0->dvb->priv;
 int VAR_2 = FUNC_0(VAR_1->bttv_nr, 0x001F, 0x001F);
 if (VAR_2 != 0)
  FUNC_3("or51211: Init Error - Can't Reset DVR (%i)\n", VAR_2);
 FUNC_1(VAR_1->bttv_nr, 0x001F, 0x0000);
 FUNC_2(20);

 FUNC_1(VAR_1->bttv_nr, 0x0001F, 0x0001);

 FUNC_2(500);
}
