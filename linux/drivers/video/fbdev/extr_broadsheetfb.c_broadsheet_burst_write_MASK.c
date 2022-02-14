
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {TYPE_1__* board; } ;
struct TYPE_2__ {scalar_t__ mmio_write; } ;


 int FUNC_0 (struct broadsheetfb_par*,int,int *) ;
 int FUNC_1 (struct broadsheetfb_par*,int,int *) ;

__attribute__((used)) static void FUNC_2(struct broadsheetfb_par *VAR_0, int VAR_1,
       u16 *VAR_2)
{
 if (VAR_0->board->mmio_write)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
