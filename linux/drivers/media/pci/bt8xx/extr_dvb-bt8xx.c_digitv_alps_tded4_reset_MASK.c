
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_bt8xx_card {int bttv_nr; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct dvb_bt8xx_card *VAR_0)
{







 int VAR_1 = FUNC_0(VAR_0->bttv_nr, 0x08, 0x08);
 if (VAR_1 != 0)
  FUNC_3("digitv_alps_tded4: Init Error - Can't Reset DVR (%i)\n",
   VAR_1);


 FUNC_1(VAR_0->bttv_nr, 0x08, 0x08);
 FUNC_1(VAR_0->bttv_nr, 0x08, 0x00);
 FUNC_2(100);

 FUNC_1(VAR_0->bttv_nr, 0x08, 0x08);
}
