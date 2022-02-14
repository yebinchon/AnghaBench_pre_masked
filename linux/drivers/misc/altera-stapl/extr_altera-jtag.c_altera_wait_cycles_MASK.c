
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_jtag {int jtag_state; } ;
struct altera_state {struct altera_jtag js; } ;
typedef long s32 ;
typedef enum altera_jtag_state { ____Placeholder_altera_jtag_state } altera_jtag_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct altera_state*,int) ;

int FUNC_2(struct altera_state *VAR_5,
     s32 VAR_6,
     enum altera_jtag_state VAR_7)
{
 struct altera_jtag *VAR_8 = &VAR_5->js;
 int VAR_9;
 s32 VAR_10;
 int VAR_11 = 0;

 if (VAR_8->jtag_state != VAR_7)
  VAR_11 = FUNC_1(VAR_5, VAR_7);

 if (VAR_11 == 0) {




  VAR_9 = (VAR_7 == VAR_1) ? VAR_3 : VAR_4;

  for (VAR_10 = 0L; VAR_10 < VAR_6; VAR_10++)
   FUNC_0(VAR_9, VAR_2, VAR_0);

 }

 return VAR_11;
}
