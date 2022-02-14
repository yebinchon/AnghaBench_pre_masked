
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int (* wait_for_rdy ) (struct broadsheetfb_par*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct broadsheetfb_par*) ;
 int FUNC_1 (struct broadsheetfb_par*,int ,int,int *) ;
 int FUNC_2 (struct broadsheetfb_par*) ;

__attribute__((used)) static u16 FUNC_3(struct broadsheetfb_par *VAR_1, u16 VAR_2)
{
 FUNC_1(VAR_1, VAR_0, 1, &VAR_2);
 VAR_1->board->wait_for_rdy(VAR_1);
 return FUNC_0(VAR_1);
}
