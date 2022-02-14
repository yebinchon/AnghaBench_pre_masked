
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ kbdmode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct vc_data*,int) ;
 int FUNC_2 (struct vc_data*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_4)
{
 if (VAR_2) {
  if (VAR_3->kbdmode == VAR_1)
   FUNC_2(VAR_4, VAR_2);
  else {
   int VAR_5 = FUNC_0(VAR_2);
   if (VAR_5 != -1)
    FUNC_1(VAR_4, VAR_5);
  }
  VAR_2 = 0;
 }

 FUNC_1(VAR_4, 13);
 if (FUNC_3(VAR_3, VAR_0))
  FUNC_1(VAR_4, 10);
}
