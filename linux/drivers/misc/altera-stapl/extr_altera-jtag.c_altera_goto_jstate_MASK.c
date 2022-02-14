
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct altera_jtag {int jtag_state; } ;
struct altera_state {struct altera_jtag js; } ;
typedef enum altera_jtag_state { ____Placeholder_altera_jtag_state } altera_jtag_state ;
struct TYPE_2__ {size_t tms_high; size_t tms_low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct altera_state*) ;
 int* VAR_12 ;
 TYPE_1__* VAR_13 ;

int FUNC_2(struct altera_state *VAR_14,
     enum altera_jtag_state VAR_15)
{
 struct altera_jtag *VAR_16 = &VAR_14->js;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0;

 if (VAR_16->jtag_state == VAR_5)

  FUNC_1(VAR_14);

 if (VAR_16->jtag_state == VAR_15) {





  if ((VAR_15 == VAR_3) || (VAR_15 == VAR_1) ||
   (VAR_15 == VAR_0) || (VAR_15 == VAR_7) ||
    (VAR_15 == VAR_6)) {
   FUNC_0(VAR_11, VAR_9, VAR_4);
  } else if (VAR_15 == VAR_8)
   FUNC_0(VAR_10, VAR_9, VAR_4);

 } else {
  while ((VAR_16->jtag_state != VAR_15) && (VAR_18 < 9)) {

   VAR_17 = (VAR_12[VAR_16->jtag_state] &
       (1 << VAR_15))
       ? VAR_10 : VAR_11;


   FUNC_0(VAR_17, VAR_9, VAR_4);

   if (VAR_17)
    VAR_16->jtag_state =
     VAR_13[VAR_16->jtag_state].tms_high;
   else
    VAR_16->jtag_state =
     VAR_13[VAR_16->jtag_state].tms_low;

   ++VAR_18;
  }
 }

 if (VAR_16->jtag_state != VAR_15)
  VAR_19 = -VAR_2;

 return VAR_19;
}
