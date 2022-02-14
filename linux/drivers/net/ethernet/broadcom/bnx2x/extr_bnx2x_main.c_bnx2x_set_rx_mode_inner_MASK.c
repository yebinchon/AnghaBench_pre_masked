
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {TYPE_1__* dev; int sp_state; int rx_mode; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int VAR_10 ;
 int FUNC_4 (struct bnx2x*,int ,int ) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct bnx2x *VAR_11)
{
 u32 VAR_12 = VAR_5;

 FUNC_1(VAR_10, "dev->flags = %x\n", VAR_11->dev->flags);

 FUNC_10(VAR_11->dev);

 if (VAR_11->dev->flags & VAR_9) {
  VAR_12 = VAR_6;
 } else if ((VAR_11->dev->flags & VAR_8) ||
     ((FUNC_9(VAR_11->dev) > VAR_2) &&
      FUNC_0(VAR_11))) {
  VAR_12 = VAR_3;
 } else {
  if (FUNC_3(VAR_11)) {

   if (FUNC_5(VAR_11) < 0)
    VAR_12 = VAR_3;


   FUNC_11(VAR_11->dev);
   if (FUNC_7(VAR_11) < 0)
    VAR_12 = VAR_6;
   FUNC_10(VAR_11->dev);
  } else {



   FUNC_4(VAR_11,
            VAR_7, 0);
  }
 }

 VAR_11->rx_mode = VAR_12;

 if (FUNC_2(VAR_11))
  VAR_11->rx_mode = VAR_4;


 if (FUNC_13(VAR_0, &VAR_11->sp_state)) {
  FUNC_12(VAR_1, &VAR_11->sp_state);
  FUNC_11(VAR_11->dev);
  return;
 }

 if (FUNC_3(VAR_11)) {
  FUNC_6(VAR_11);
  FUNC_11(VAR_11->dev);
 } else {




  FUNC_11(VAR_11->dev);
  FUNC_8(VAR_11);
 }
}
