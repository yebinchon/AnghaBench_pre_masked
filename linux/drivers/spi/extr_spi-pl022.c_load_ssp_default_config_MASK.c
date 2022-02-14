
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl022 {int virtbase; TYPE_1__* vendor; } ;
struct TYPE_2__ {scalar_t__ extended_cr; scalar_t__ pl023; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct pl022 *VAR_10)
{
 if (VAR_10->vendor->pl023) {
  FUNC_6(VAR_4, FUNC_1(VAR_10->virtbase));
  FUNC_7(VAR_7, FUNC_2(VAR_10->virtbase));
 } else if (VAR_10->vendor->extended_cr) {
  FUNC_6(VAR_3, FUNC_1(VAR_10->virtbase));
  FUNC_7(VAR_6, FUNC_2(VAR_10->virtbase));
 } else {
  FUNC_7(VAR_2, FUNC_1(VAR_10->virtbase));
  FUNC_7(VAR_5, FUNC_2(VAR_10->virtbase));
 }
 FUNC_7(VAR_8, FUNC_3(VAR_10->virtbase));
 FUNC_7(VAR_1, FUNC_0(VAR_10->virtbase));
 FUNC_7(VAR_9, FUNC_5(VAR_10->virtbase));
 FUNC_7(VAR_0, FUNC_4(VAR_10->virtbase));
}
