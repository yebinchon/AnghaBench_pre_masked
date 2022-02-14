
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_jtag {scalar_t__ jtag_state; } ;
struct altera_state {struct altera_jtag js; } ;
typedef int s32 ;
typedef enum altera_jtag_state { ____Placeholder_altera_jtag_state } altera_jtag_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct altera_state*,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct altera_state *VAR_1,
   s32 VAR_2, enum altera_jtag_state VAR_3)
{
 struct altera_jtag *VAR_4 = &VAR_1->js;
 int VAR_5 = 0;

 if ((VAR_4->jtag_state != VAR_0) &&
     (VAR_4->jtag_state != VAR_3))
  VAR_5 = FUNC_0(VAR_1, VAR_3);

 if (VAR_5 == 0)

  FUNC_1(VAR_2);

 return VAR_5;
}
