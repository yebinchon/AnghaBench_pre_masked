
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int (* mmio_write ) (struct broadsheetfb_par*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct broadsheetfb_par*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct broadsheetfb_par *VAR_1, int VAR_2,
       u16 *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = (VAR_3[VAR_4] & 0x0F) << 4;
  VAR_5 |= (VAR_3[VAR_4] & 0x0F00) << 4;
  VAR_1->board->mmio_write(VAR_1, VAR_0, VAR_5);
 }

}
