
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ pmf; } ;
struct bnx2x {int flags; TYPE_1__ port; int pdev; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_8 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 () ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct bnx2x *VAR_12)
{
 u32 VAR_13;
 bool VAR_14 = (VAR_12->flags & VAR_9) ? 1 : 0;
 bool VAR_15 = (VAR_12->flags & VAR_11) ? 1 : 0;
 bool VAR_16 = (VAR_12->flags & VAR_10) ? 1 : 0;

 VAR_13 = FUNC_3(VAR_12, VAR_6);

 if (VAR_14) {
  VAR_13 &= ~(VAR_2 |
    VAR_4);
  VAR_13 |= (VAR_3 |
   VAR_0);

  if (VAR_15)
   VAR_13 |= VAR_4;
 } else if (VAR_16) {
  VAR_13 &= ~VAR_2;
  VAR_13 |= (VAR_3 |
   VAR_0 |
   VAR_4);
 } else {
  VAR_13 &= ~VAR_3;
  VAR_13 |= (VAR_2 |
   VAR_0 |
   VAR_4);
 }


 if ((!VAR_14) || VAR_15) {
  FUNC_4(VAR_12, VAR_6, VAR_13);
  FUNC_6(VAR_12);
 }

 VAR_13 |= VAR_1;

 FUNC_1(VAR_8, "write 0x%x to IGU  mode %s\n",
    VAR_13, (VAR_14 ? "MSI-X" : (VAR_16 ? "MSI" : "INTx")));

 FUNC_4(VAR_12, VAR_6, VAR_13);

 if (VAR_13 & VAR_2)
  FUNC_7(VAR_12->pdev, 1);

 FUNC_5();


 if (FUNC_2(VAR_12)) {
  VAR_13 = (0xee0f | (1 << (FUNC_0(VAR_12) + 4)));
  if (VAR_12->port.pmf)

   VAR_13 |= 0x1100;
 } else
  VAR_13 = 0xffff;

 FUNC_4(VAR_12, VAR_7, VAR_13);
 FUNC_4(VAR_12, VAR_5, VAR_13);
}
