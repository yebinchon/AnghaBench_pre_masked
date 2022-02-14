
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {scalar_t__ family; scalar_t__ is_mobility; } ;
struct radeon_regs {int ppll_ref_div; int ppll_div_3; int clk_cntl_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct radeonfb_info*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct radeonfb_info*) ;
 int FUNC_8 (struct radeonfb_info*) ;

__attribute__((used)) static void FUNC_9(struct radeonfb_info *VAR_24, struct radeon_regs *VAR_25)
{
 int VAR_26;

 FUNC_5(20);


 if (VAR_24->is_mobility) {







  if ((VAR_25->ppll_ref_div == (FUNC_0(VAR_13) & VAR_14)) &&
      (VAR_25->ppll_div_3 == (FUNC_0(VAR_9) &
       (VAR_12 | VAR_11)))) {



   FUNC_4(VAR_3,
    VAR_25->clk_cntl_index & VAR_10,
    ~VAR_10);
   FUNC_8(VAR_24);
   FUNC_7(VAR_24);
              return;
  }
 }


 FUNC_3(VAR_20, VAR_21, ~VAR_22);


 FUNC_3(VAR_8,
  VAR_15 | VAR_5 | VAR_17,
  ~(VAR_15 | VAR_5 | VAR_17));


 FUNC_4(VAR_3,
  VAR_25->clk_cntl_index & VAR_10,
  ~VAR_10);
 FUNC_8(VAR_24);
 FUNC_7(VAR_24);


 if (FUNC_1(VAR_24) ||
     VAR_24->family == VAR_0 ||
     VAR_24->family == VAR_1 ||
     VAR_24->family == VAR_2) {
  if (VAR_25->ppll_ref_div & VAR_18) {



   FUNC_3(VAR_13, VAR_25->ppll_ref_div, 0);
  } else {

   FUNC_3(VAR_13,
    (VAR_25->ppll_ref_div << VAR_19),
    ~VAR_18);
  }
 } else
  FUNC_3(VAR_13, VAR_25->ppll_ref_div, ~VAR_14);


 FUNC_3(VAR_9, VAR_25->ppll_div_3, ~VAR_11);
 FUNC_3(VAR_9, VAR_25->ppll_div_3, ~VAR_12);


 while (FUNC_0(VAR_13) & VAR_6)
  ;
 FUNC_3(VAR_13, VAR_7, ~VAR_7);






 for (VAR_26 = 0; (VAR_26 < 10000 && FUNC_0(VAR_13) & VAR_6); VAR_26++)
  ;

 FUNC_2(VAR_4, 0);


 FUNC_3(VAR_8, 0,
  ~(VAR_15 | VAR_16 | VAR_5 | VAR_17));


        FUNC_6(5);


 FUNC_3(VAR_20, VAR_23, ~VAR_22);
}
