
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fbtft_par {int dummy; } ;
struct TYPE_2__ {int xs; int ys_page; int xe; int ye_page; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fbtft_par *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 VAR_0.xs = VAR_2;
 VAR_0.ys_page = VAR_3 / 8;
 VAR_0.xe = VAR_4;
 VAR_0.ye_page = VAR_5 / 8;
}
