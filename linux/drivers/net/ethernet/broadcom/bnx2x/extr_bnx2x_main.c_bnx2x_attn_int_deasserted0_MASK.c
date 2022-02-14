
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ pmf; } ;
struct TYPE_3__ {int aeu_int_mask; } ;
struct bnx2x {int link_params; TYPE_2__ port; TYPE_1__ link_vars; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int,int) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_10(struct bnx2x *VAR_4, u32 VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4);
 int VAR_7;
 u32 VAR_8;

 VAR_7 = (VAR_6 ? VAR_3 :
        VAR_2);

 if (VAR_5 & VAR_0) {

  VAR_8 = FUNC_2(VAR_4, VAR_7);
  VAR_8 &= ~VAR_0;
  FUNC_3(VAR_4, VAR_7, VAR_8);

  FUNC_0("SPIO5 hw attention\n");


  FUNC_7(&VAR_4->link_params);
  FUNC_5(VAR_4);
 }

 if ((VAR_5 & VAR_4->link_vars.aeu_int_mask) && VAR_4->port.pmf) {
  FUNC_4(VAR_4);
  FUNC_6(&VAR_4->link_params);
  FUNC_9(VAR_4);
 }

 if (VAR_5 & VAR_1) {

  VAR_8 = FUNC_2(VAR_4, VAR_7);
  VAR_8 &= ~(VAR_5 & VAR_1);
  FUNC_3(VAR_4, VAR_7, VAR_8);

  FUNC_0("FATAL HW block attention set0 0x%x\n",
     (u32)(VAR_5 & VAR_1));
  FUNC_8();
 }
}
