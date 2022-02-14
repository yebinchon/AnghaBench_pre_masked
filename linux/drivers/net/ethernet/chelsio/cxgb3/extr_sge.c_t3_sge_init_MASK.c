
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_params {int dummy; } ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {int flags; TYPE_1__ params; int pdev; } ;


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
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct adapter*) ;
 unsigned int FUNC_9 (int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct adapter*,int ,int) ;

void FUNC_12(struct adapter *VAR_26, struct sge_params *VAR_27)
{
 unsigned int VAR_28, VAR_29 = FUNC_9(FUNC_10(VAR_26->pdev, 2) >> 12);

 VAR_28 = VAR_14 | FUNC_4(2) | VAR_17 | VAR_10 |
     VAR_13 | VAR_12 | VAR_21 | VAR_16 |
     FUNC_2(VAR_22 - 11) | VAR_11 |
     FUNC_7(VAR_29 ? VAR_29 - 1 : 0) | VAR_18;



 if (VAR_26->params.rev > 0) {
  if (!(VAR_26->flags & (VAR_25 | VAR_24)))
   VAR_28 |= VAR_19 | VAR_20;
 }
 FUNC_11(VAR_26, VAR_1, VAR_28);
 FUNC_11(VAR_26, VAR_3, FUNC_1(512) |
       FUNC_3(512));
 FUNC_11(VAR_26, VAR_9, FUNC_8(VAR_26) / 10);
 FUNC_11(VAR_26, VAR_0, FUNC_5(32) |
       FUNC_6(200 * FUNC_8(VAR_26)));
 FUNC_11(VAR_26, VAR_4,
       VAR_26->params.rev < VAR_23 ? 1000 : 500);
 FUNC_11(VAR_26, VAR_5, 256);
 FUNC_11(VAR_26, VAR_6, 1000);
 FUNC_11(VAR_26, VAR_7, 256);
 FUNC_11(VAR_26, VAR_8, FUNC_0(0xfff));
 FUNC_11(VAR_26, VAR_2, 63 * 1024);
}
