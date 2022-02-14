
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc {int is_otg; int dev; TYPE_1__* platdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ci_hdrc*,int ,int) ;
 int FUNC_2 (struct ci_hdrc*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ci_hdrc *VAR_6)
{
 if (VAR_6->platdata->flags & VAR_1)
  VAR_6->is_otg = 0;
 else
  VAR_6->is_otg = (FUNC_1(VAR_6, VAR_0,
    VAR_2 | VAR_3)
     == (VAR_2 | VAR_3));
 if (VAR_6->is_otg) {
  FUNC_0(VAR_6->dev, "It is OTG capable controller\n");

  FUNC_2(VAR_6, VAR_4 | VAR_5,
       VAR_5);
 }
}
