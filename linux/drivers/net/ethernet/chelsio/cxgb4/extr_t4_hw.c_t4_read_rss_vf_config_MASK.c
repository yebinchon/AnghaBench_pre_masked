
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_2 (unsigned int) ;
 int VAR_9 ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int*,int,int ,int) ;
 int FUNC_5 (struct adapter*,int ,int) ;

void FUNC_6(struct adapter *VAR_10, unsigned int VAR_11,
      u32 *VAR_12, u32 *VAR_13, bool VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;

 if (FUNC_0(VAR_10->params.chip) <= VAR_0) {
  VAR_16 = FUNC_2(VAR_8);
  VAR_17 = FUNC_2(VAR_11);
 } else {
   VAR_16 = FUNC_1(VAR_2);
   VAR_17 = FUNC_1(VAR_11);
 }



 VAR_15 = FUNC_3(VAR_10, VAR_3);
 VAR_15 &= ~(VAR_7 | VAR_9 | VAR_1 | VAR_16);
 VAR_15 |= VAR_17 | VAR_6;
 FUNC_5(VAR_10, VAR_3, VAR_15);



 FUNC_4(VAR_10, VAR_12, 1, VAR_5, VAR_14);
 FUNC_4(VAR_10, VAR_13, 1, VAR_4, VAR_14);
}
