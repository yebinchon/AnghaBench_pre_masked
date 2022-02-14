
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int (* mmio_read ) (struct broadsheetfb_par*) ;} ;


 int FUNC_0 (struct broadsheetfb_par*) ;
 int FUNC_1 (struct broadsheetfb_par*) ;

__attribute__((used)) static u16 FUNC_2(struct broadsheetfb_par *VAR_0)
{
 if (VAR_0->board->mmio_read)
  return VAR_0->board->mmio_read(VAR_0);
 else
  return FUNC_0(VAR_0);
}
