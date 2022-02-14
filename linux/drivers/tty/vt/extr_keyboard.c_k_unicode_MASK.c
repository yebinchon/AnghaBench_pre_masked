
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ kbdmode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct vc_data*,unsigned int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct vc_data*,int) ;
 int FUNC_3 (struct vc_data*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_4, unsigned int VAR_5, char VAR_6)
{
 if (VAR_6)
  return;

 if (VAR_2)
  VAR_5 = FUNC_1(VAR_4, VAR_5);

 if (VAR_1) {
  VAR_1 = 0;
  VAR_2 = VAR_5;
  return;
 }
 if (VAR_3->kbdmode == VAR_0)
  FUNC_3(VAR_4, VAR_5);
 else {
  int VAR_7 = FUNC_0(VAR_5);
  if (VAR_7 != -1)
   FUNC_2(VAR_4, VAR_7);
 }
}
