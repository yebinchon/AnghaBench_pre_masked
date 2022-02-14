
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addr_val_pair {int const member_1; scalar_t__ const member_0; } ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {int slow_intr_mask; TYPE_1__ params; } ;


 int FUNC_0 (struct addr_val_pair const*) ;

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
 int VAR_12 ;
 int VAR_13 ;



 scalar_t__ VAR_14 ;

 int VAR_15 ;
 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int) ;
 int FUNC_5 (struct adapter*,struct addr_val_pair const*,int ,int ) ;

void FUNC_6(struct adapter *VAR_16)
{
 static const struct addr_val_pair VAR_17[] = {
  {140, 129},
  {144, 135},
  {144 - 134 + 133,
   135},
  {144 - 134 + 136,
   135},
  {145, 137},
  {139, 128},
  {141, 130},
  {142, 131},
  {146, 138},
  {143, 132},
 };

 VAR_16->slow_intr_mask = VAR_13;

 FUNC_5(VAR_16, VAR_17, FUNC_0(VAR_17), 0);
 FUNC_4(VAR_16, VAR_5,
       VAR_16->params.rev >= VAR_14 ? 0x2bfffff : 0x3bfffff);

 if (VAR_16->params.rev > 0) {
  FUNC_4(VAR_16, VAR_0,
        VAR_7 | VAR_8);
  FUNC_4(VAR_16, VAR_6,
        VAR_15 | VAR_9 |
        VAR_10);
 } else {
  FUNC_4(VAR_16, VAR_0, VAR_7);
  FUNC_4(VAR_16, VAR_6, VAR_15);
 }

 FUNC_4(VAR_16, VAR_4, FUNC_1(VAR_16));

 if (FUNC_2(VAR_16))
  FUNC_4(VAR_16, VAR_1, VAR_11);
 else
  FUNC_4(VAR_16, VAR_2, VAR_12);
 FUNC_4(VAR_16, VAR_3, VAR_16->slow_intr_mask);
 FUNC_3(VAR_16, VAR_3);
}
