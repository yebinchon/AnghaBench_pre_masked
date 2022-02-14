
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int (* mmio_write ) (struct broadsheetfb_par*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct broadsheetfb_par*,int ,int ) ;
 int FUNC_1 (struct broadsheetfb_par*,int ,int ) ;
 int FUNC_2 (struct broadsheetfb_par*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct broadsheetfb_par *VAR_3, u16 VAR_4,
     u16 VAR_5)
{
 VAR_3->board->mmio_write(VAR_3, VAR_1, VAR_0);
 VAR_3->board->mmio_write(VAR_3, VAR_2, VAR_4);
 VAR_3->board->mmio_write(VAR_3, VAR_2, VAR_5);

}
