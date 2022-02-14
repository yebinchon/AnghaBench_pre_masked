
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int (* set_ctl ) (struct broadsheetfb_par*,int ,int) ;int (* set_hdb ) (struct broadsheetfb_par*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_1 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_2 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_3 (struct broadsheetfb_par*,int) ;
 int FUNC_4 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_5 (struct broadsheetfb_par*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct broadsheetfb_par *VAR_3, int VAR_4,
     u16 *VAR_5)
{
 int VAR_6;
 u16 VAR_7;

 VAR_3->board->set_ctl(VAR_3, VAR_0, 0);
 VAR_3->board->set_ctl(VAR_3, VAR_1, 1);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_3->board->set_ctl(VAR_3, VAR_2, 0);
  VAR_7 = (VAR_5[VAR_6] & 0x0F) << 4;
  VAR_7 |= (VAR_5[VAR_6] & 0x0F00) << 4;
  VAR_3->board->set_hdb(VAR_3, VAR_7);
  VAR_3->board->set_ctl(VAR_3, VAR_2, 1);
 }

 VAR_3->board->set_ctl(VAR_3, VAR_0, 1);
}
